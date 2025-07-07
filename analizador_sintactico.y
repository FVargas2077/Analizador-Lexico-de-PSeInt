%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    extern int yylex(void);
    extern char *yytext;
    extern int linea;
    extern FILE *yyin;
    void yyerror(const char *s);
%}

%union {
    int entero;
    float real;
    char *str;
}

/* Palabras reservadas */
%token ALGORITMO FINALGORITMO DEFINIR COMO ESCRIBIR LEER
%token SI ENTONCES SINO FINSI SEGUN CASO DE OTRO MODO FINSEGUN
%token MIENTRAS HACER FINMIENTRAS REPETIR HASTA QUE
%token PARA DESDE CON PASO FINPARA FUNCION FINFUNCION
%token SUBALGORITMO FINSUBALGORITMO DIMENSION POR REFERENCIA VALOR FIN

/* Tipos de datos */
%token ENTERO REAL CADENA LOGICO

/* Operadores */
%token ASIGNACION MAS MENOS ASTERISCO DIVISION MODULO POTENCIA
%token IGUAL IGUALIGUAL DIFERENTE MENOR_IGUAL MAYOR_IGUAL MENOR MAYOR
%token Y O NO

/* Constantes numericas y texto */
%token <entero> NUMERO_ENTERO
%token <real> NUMERO_REAL
%token <str> TEXTO

/* Constantes lógicas */
%token VERDADERO FALSO

/* Delimitadores */
%token COMA PUNTO_Y_COMA PA PC CA CC DOS_PUNTOS

/* Otros tokens */
%token SALTO_LINEA ERROR
%token <str> IDENTIFICADOR

/* Seccion de la gramatica */
%start programa

%%

programa:
    ALGORITMO IDENTIFICADOR instrucciones FINALGORITMO
    {
        printf("Programa: %s\n", $2);
    }
;

instrucciones:
    /* vacio */
    | instrucciones instruccion
;

instruccion:
      declaracion
    | asignacion
    | estructura_si
    | estructura_segun
    | estructura_mientras
    | estructura_repetir
    | estructura_para
    | instruccion_escribir
    | instruccion_leer
    | funcion
    | subalgoritmo
    | declaracion_dimension
    | SALTO_LINEA
    | ERROR
    {
        printf("Error sintactico recuperado\n");
    }
;

declaracion:
    DEFINIR IDENTIFICADOR COMO tipo_dato
    {
        printf("Declarando variable: %s\n", $2);
    }
    | DEFINIR IDENTIFICADOR COMO tipo_dato PUNTO_Y_COMA
    {
        printf("Declarando variable: %s\n", $2);
    }
;

tipo_dato:
      ENTERO
    | REAL  
    | CADENA
    | LOGICO
;

asignacion:
    IDENTIFICADOR ASIGNACION expresion
    {
        printf("Asignacion a: %s\n", $1);
    }
    | IDENTIFICADOR IGUAL expresion
    {
        printf("Asignacion a: %s\n", $1);
    }
;

estructura_si:
    SI expresion ENTONCES instrucciones FINSI
    {
        printf("Estructura Si\n");
    }
    | SI expresion ENTONCES instrucciones SINO instrucciones FINSI
    {
        printf("Estructura Si-Sino\n");
    }
;

estructura_segun:
    SEGUN expresion HACER casos_segun FINSEGUN
    {
        printf("Estructura Segun\n");
    }
;

casos_segun:
    /* vacio */
    | casos_segun caso_segun
;

caso_segun:
    CASO expresion DOS_PUNTOS instrucciones
    {
        printf("Caso\n");
    }
    | DE OTRO MODO DOS_PUNTOS instrucciones
    {
        printf("Caso por defecto\n");
    }
;

estructura_mientras:
    MIENTRAS expresion HACER instrucciones FINMIENTRAS
    {
        printf("Estructura Mientras\n");
    }
;

estructura_repetir:
    REPETIR instrucciones HASTA QUE expresion
    {
        printf("Estructura Repetir-Hasta\n");
    }
;

estructura_para:
    PARA IDENTIFICADOR ASIGNACION expresion HASTA expresion HACER instrucciones FINPARA
    {
        printf("Estructura Para\n");
    }
    | PARA IDENTIFICADOR ASIGNACION expresion HASTA expresion CON PASO expresion HACER instrucciones FINPARA
    {
        printf("Estructura Para con paso\n");
    }
    | PARA IDENTIFICADOR DESDE expresion HASTA expresion HACER instrucciones FINPARA
    {
        printf("Estructura Para desde-hasta\n");
    }
    | PARA IDENTIFICADOR DESDE expresion HASTA expresion CON PASO expresion HACER instrucciones FINPARA
    {
        printf("Estructura Para desde-hasta con paso\n");
    }
;

instruccion_escribir:
    ESCRIBIR expresion
    {
        printf("Instruccion Escribir\n");
    }
;

instruccion_leer:
    LEER IDENTIFICADOR
    {
        printf("Leer variable: %s\n", $2);
    }
;

funcion:
    FUNCION IDENTIFICADOR PA parametros_funcion PC instrucciones FINFUNCION
    {
        printf("Definicion de funcion: %s\n", $2);
    }
;

parametros_funcion:
    /* vacio */
    | lista_parametros
;

lista_parametros:
    parametro
    | lista_parametros COMA parametro
;

parametro:
    IDENTIFICADOR
    | POR REFERENCIA IDENTIFICADOR
    | POR VALOR IDENTIFICADOR
;

subalgoritmo:
    SUBALGORITMO IDENTIFICADOR PA parametros_funcion PC instrucciones FINSUBALGORITMO
    {
        printf("Definicion de subalgoritmo: %s\n", $2);
    }
;

declaracion_dimension:
    DIMENSION IDENTIFICADOR CA expresion CC
    {
        printf("Declaracion de arreglo: %s\n", $2);
    }
    | DIMENSION IDENTIFICADOR CA expresion COMA expresion CC
    {
        printf("Declaracion de matriz: %s\n", $2);
    }
;

expresion:
      termino
    | expresion MAS termino
    | expresion MENOS termino
    | expresion operador_relacional termino
    | expresion operador_logico termino
;

termino:
      factor
    | termino ASTERISCO factor
    | termino DIVISION factor
    | termino MODULO factor
    | termino POTENCIA factor
;

factor:
      NUMERO_ENTERO
    | NUMERO_REAL
    | IDENTIFICADOR
    | TEXTO
    | VERDADERO
    | FALSO
    | PA expresion PC
    | MENOS factor
    | NO factor
    | FIN
    {
        printf("Token FIN encontrado\n");
    }
;

operador_relacional:
      IGUAL
    | IGUALIGUAL
    | DIFERENTE
    | MENOR
    | MAYOR
    | MENOR_IGUAL
    | MAYOR_IGUAL
;

operador_logico:
      Y
    | O
;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error sintactico en linea %d: %s\n", linea, s);
}

int main(int argc, char *argv[]) {
    printf("=== Analizador Lexico y Sintactico de PSeInt ===\n");
    
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: No se puede abrir el archivo %s\n", argv[1]);
            return 1;
        }
        printf("Analizando archivo: %s\n", argv[1]);
    } else {
        printf("Leyendo desde entrada estandar (Ctrl+D para terminar):\n");
        yyin = stdin;
    }
    
    printf("Iniciando analisis sintactico...\n");
    int resultado = yyparse();
    
    if (argc > 1) {
        fclose(yyin);
    }
    
    if (resultado == 0) {
        printf("Analisis completado exitosamente.\n");
    } else {
        printf("Se encontraron errores en el analisis.\n");
    }
    
    return resultado;
}