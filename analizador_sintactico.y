%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    extern int yylex(void);
    extern int yyparse(void);
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
%token SUBALGORITMO FINSUBALGORITMO DIMENSION POR REFERENCIA VALOR

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

 /* Precedencia y asociatividad de operadores */
%nonassoc IGUAL IGUALIGUAL DIFERENTE MENOR MAYOR MENOR_IGUAL MAYOR_IGUAL
%left O
%left Y
%left MAS MENOS
%left ASTERISCO DIVISION MODULO
%right POTENCIA
%right NO
%right UMINUS

 /* Seccion de la gramatica */
%start programa

%%

programa:
    ALGORITMO IDENTIFICADOR instrucciones FINALGORITMO subalgoritmo_funciones_definir
    {
        printf("Programa: %s completado exitosamente\n", $2);
    }
    | SALTO_LINEA ALGORITMO IDENTIFICADOR instrucciones FINALGORITMO subalgoritmo_funciones_definir
    {
        printf("Programa: %s completado exitosamente\n", $3);
    }
    | ALGORITMO IDENTIFICADOR instrucciones FINALGORITMO SALTO_LINEA subalgoritmo_funciones_definir
    {
        printf("Programa: %s completado exitosamente\n", $2);
    }
;

subalgoritmo_funciones_definir:
    /* vacio */
    | SALTO_LINEA subalgoritmo subalgoritmo_funciones_definir
    | SALTO_LINEA funcion subalgoritmo_funciones_definir

instrucciones:
    /* vacio */
    | instrucciones instruccion
    | instrucciones SALTO_LINEA
    | instrucciones PUNTO_Y_COMA
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
    | declaracion_dimension
    | llamada_procedimiento
    | ERROR
    {
        printf("Error sintactico recuperado\n");
    }
;

declaracion:
    DEFINIR definir_identificadores COMO tipo_dato
    {
        printf("Declarando variable\n");
    }
;

definir_identificadores:
      IDENTIFICADOR COMA definir_identificadores
    | IDENTIFICADOR
;

tipo_dato:
      ENTERO
    | REAL  
    | CADENA
    | LOGICO
;

asignacion:
    IDENTIFICADOR asignacion_variable expresion
    {
        printf("Asignacion a: %s\n", $1);
    }
    | IDENTIFICADOR CA expresion CC asignacion_variable expresion
    {
        printf("Asignacion a arreglo: %s[]\n", $1);
    }
    | IDENTIFICADOR CA expresion COMA expresion CC asignacion_variable expresion
    {
        printf("Asignacion a matriz: %s[,]\n", $1);
    }
;

asignacion_variable:
    ASIGNACION
    | IGUAL
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
    | SALTO_LINEA caso_segun
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
    PARA IDENTIFICADOR asignacion_variable expresion HASTA expresion HACER instrucciones FINPARA
    {
        printf("Estructura Para\n");
    }
    | PARA IDENTIFICADOR asignacion_variable expresion HASTA expresion CON PASO expresion HACER instrucciones FINPARA
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
    ESCRIBIR expresion_escribir
    {
        printf("Instruccion Escribir\n");
    }
;

expresion_escribir:
    expresion
    | expresion_escribir COMA expresion
;

instruccion_leer:
    LEER IDENTIFICADOR
    {
        printf("Leer variable: %s\n", $2);
    }
    | LEER IDENTIFICADOR CA expresion CC
    {
        printf("Leer arreglo: %s[]\n", $2);
    }
    | LEER IDENTIFICADOR CA expresion COMA expresion CC
    {
        printf("Leer matriz: %s[,]\n", $2);
    }
;

funcion:
    FUNCION IDENTIFICADOR PA parametros_funcion PC instrucciones FINFUNCION
    {
        printf("Definicion de funcion: %s\n", $2);
    }
    | FUNCION IDENTIFICADOR ASIGNACION IDENTIFICADOR PA parametros_funcion PC instrucciones FINFUNCION
    {
        printf("Definicion de funcion con retorno: %s\n", $4);
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
    | IDENTIFICADOR POR REFERENCIA
    | IDENTIFICADOR POR VALOR
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

llamada_procedimiento:
    IDENTIFICADOR PA argumentos_llamada PC
    {
        printf("Llamada a procedimiento: %s\n", $1);
    }
    | IDENTIFICADOR PA PC
    {
        printf("Llamada a procedimiento: %s\n", $1);
    }
;

argumentos_llamada:
    expresion
    | argumentos_llamada COMA expresion
;

expresion:
      expresion_logica
;

expresion_logica:
      expresion_relacional
    | expresion_logica Y expresion_relacional
    | expresion_logica O expresion_relacional
;

expresion_relacional:
      expresion_aritmetica
    | expresion_aritmetica IGUAL expresion_aritmetica
    | expresion_aritmetica IGUALIGUAL expresion_aritmetica
    | expresion_aritmetica DIFERENTE expresion_aritmetica
    | expresion_aritmetica MENOR expresion_aritmetica
    | expresion_aritmetica MAYOR expresion_aritmetica
    | expresion_aritmetica MENOR_IGUAL expresion_aritmetica
    | expresion_aritmetica MAYOR_IGUAL expresion_aritmetica
;

expresion_aritmetica:
      termino
    | expresion_aritmetica MAS termino
    | expresion_aritmetica MENOS termino
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
    | IDENTIFICADOR CA expresion CC
    | IDENTIFICADOR CA expresion COMA expresion CC
    | TEXTO
    | VERDADERO
    | FALSO
    | PA expresion PC
    | MENOS factor %prec UMINUS
    | NO factor
    | IDENTIFICADOR PA argumentos_llamada PC
    | IDENTIFICADOR PA PC
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
        printf("Leyendo desde entrada estandar (Ctrl+Z para terminar):\n");
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