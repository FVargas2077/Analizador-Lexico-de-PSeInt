%{
#include <stdio.h> // Para la funcion fprintf
FILE *token_file; // Archivo para guardar los tokens
%}

%option caseless
%option noyywrap

%%

 /* Palabras reservadas */
"Algoritmo"         { fprintf(token_file, "<PALABRA_RESERVADA, Algoritmo>\n"); }
"FinAlgoritmo"      { fprintf(token_file, "<PALABRA_RESERVADA, FinAlgoritmo>\n"); }
"Proceso"           { fprintf(token_file, "<PALABRA_RESERVADA, Algoritmo>\n"); }
"FinProceso"        { fprintf(token_file, "<PALABRA_RESERVADA, FinAlgoritmo>\n"); }
"Definir"           { fprintf(token_file, "<PALABRA_RESERVADA, Definir>\n"); }
"Como"              { fprintf(token_file, "<PALABRA_RESERVADA, Como>\n"); }
"Escribir"          { fprintf(token_file, "<PALABRA_RESERVADA, Escribir>\n"); }
"Imprimir"          { fprintf(token_file, "<PALABRA_RESERVADA, Escribir>\n"); }
"Mostrar"           { fprintf(token_file, "<PALABRA_RESERVADA, Escribir>\n"); }
"Leer"              { fprintf(token_file, "<PALABRA_RESERVADA, Leer>\n"); }
"Si"                { fprintf(token_file, "<PALABRA_RESERVADA, Si>\n"); }
"Entonces"          { fprintf(token_file, "<PALABRA_RESERVADA, Entonces>\n"); }
"Sino"              { fprintf(token_file, "<PALABRA_RESERVADA, Sino>\n"); }
"FinSi"             { fprintf(token_file, "<PALABRA_RESERVADA, FinSi>\n"); }
"Segun"             { fprintf(token_file, "<PALABRA_RESERVADA, Segun>\n"); }
"Caso"              { fprintf(token_file, "<PALABRA_RESERVADA, Caso>\n"); }
"De"                { fprintf(token_file, "<PALABRA_RESERVADA, De>\n"); }
"Otro"              { fprintf(token_file, "<PALABRA_RESERVADA, Otro>\n"); }
"Modo"              { fprintf(token_file, "<PALABRA_RESERVADA, Modo>\n"); }
"FinSegun"          { fprintf(token_file, "<PALABRA_RESERVADA, FinSegun>\n"); }
"Mientras"          { fprintf(token_file, "<PALABRA_RESERVADA, Mientras>\n"); }
"Hacer"             { fprintf(token_file, "<PALABRA_RESERVADA, Hacer>\n"); }
"FinMientras"       { fprintf(token_file, "<PALABRA_RESERVADA, FinMientras>\n"); }
"Repetir"           { fprintf(token_file, "<PALABRA_RESERVADA, Repetir>\n"); }
"Hasta"             { fprintf(token_file, "<PALABRA_RESERVADA, Hasta>\n"); }
"Que"               { fprintf(token_file, "<PALABRA_RESERVADA, Que>\n"); }
"Para"              { fprintf(token_file, "<PALABRA_RESERVADA, Para>\n"); }
"Desde"             { fprintf(token_file, "<PALABRA_RESERVADA, Desde>\n"); }
"Con"               { fprintf(token_file, "<PALABRA_RESERVADA, Con>\n"); }
"Paso"              { fprintf(token_file, "<PALABRA_RESERVADA, Paso>\n"); }
"FinPara"           { fprintf(token_file, "<PALABRA_RESERVADA, FinPara>\n"); }
"Funcion"           { fprintf(token_file, "<PALABRA_RESERVADA, Funcion>\n"); }
"FinFuncion"        { fprintf(token_file, "<PALABRA_RESERVADA, FinFuncion>\n"); }
"SubProceso"        { fprintf(token_file, "<PALABRA_RESERVADA, SubAlgoritmo>\n"); }
"FinSubProceso"     { fprintf(token_file, "<PALABRA_RESERVADA, FinSubAlgoritmo>\n"); }
"SubAlgoritmo"      { fprintf(token_file, "<PALABRA_RESERVADA, SubAlgoritmo>\n"); }
"FinSubAlgoritmo"   { fprintf(token_file, "<PALABRA_RESERVADA, FinSubAlgoritmo>\n"); }
"Dimension"         { fprintf(token_file, "<PALABRA_RESERVADA, Dimension>\n"); }
"Por"               { fprintf(token_file, "<PALABRA_RESERVADA, Por>\n"); }
"Referencia"        { fprintf(token_file, "<PALABRA_RESERVADA, Referencia>\n"); }
"Valor"             { fprintf(token_file, "<PALABRA_RESERVADA, Valor>\n"); }
"Fin"               { fprintf(token_file, "<PALABRA_RESERVADA, Fin>\n"); }

 /* Tipos de datos */
"Entero"            { fprintf(token_file, "<TIPO_DATO, Entero>\n"); }
"Real"              { fprintf(token_file, "<TIPO_DATO, Real>\n"); }
"Caracter"          { fprintf(token_file, "<TIPO_DATO, Caracter>\n"); }
"Cadena"            { fprintf(token_file, "<TIPO_DATO, Cadena>\n"); }
"Texto"             { fprintf(token_file, "<TIPO_DATO, Texto>\n"); }
"Logico"            { fprintf(token_file, "<TIPO_DATO, Logico>\n"); }

 /* Operadores de asignacion */
"<-"|":="           { fprintf(token_file, "<OPERADOR_ASIGNACION, <->\n"); }

 /* Operadores aritmeticos */
"+"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, +>\n"); }
"-"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, ->\n"); }
"*"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, *>\n"); }
"/"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, />\n"); }
"%"|"MOD"           { fprintf(token_file, "<OPERADOR_ARITMETICO, %>\n"); }
"^"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, ^>\n"); }

 /* Operadores relacionales */
"="                 { fprintf(token_file, "<OPERADOR_RELACIONAL, =>\n"); }
"=="                { fprintf(token_file, "<OPERADOR_RELACIONAL, ==>\n"); }
"<>"                { fprintf(token_file, "<OPERADOR_RELACIONAL, <>>\n"); }
"<="                { fprintf(token_file, "<OPERADOR_RELACIONAL, <=>\n"); }
">="                { fprintf(token_file, "<OPERADOR_RELACIONAL, >=>\n"); }
"<"                 { fprintf(token_file, "<OPERADOR_RELACIONAL, <>\n"); }
">"                 { fprintf(token_file, "<OPERADOR_RELACIONAL, >>\n"); }

 /* Operadores logicos */
"Y"|"&"             { fprintf(token_file, "<OPERADOR_LOGICO, Y>\n"); }
"O"|"|"             { fprintf(token_file, "<OPERADOR_LOGICO, O>\n"); }
"NO"|"~"            { fprintf(token_file, "<OPERADOR_LOGICO, NO>\n"); }

 /* Constantes numericas sin signo */
[0-9]+\.[0-9]+        { fprintf(token_file, "<CONST_REAL, %s>\n", yytext); }
[0-9]+                { fprintf(token_file, "<CONST_ENTERO, %s>\n", yytext); }

 /* Constantes numericas con signo */
([^0-9]|^)[-+][0-9]+\.[0-9]+        { fprintf(token_file, "<CONST_REAL, %s>\n", yytext); }
([^0-9]|^)[-+][0-9]+                { fprintf(token_file, "<CONST_ENTERO, %s>\n", yytext); }

 /* Constantes de texto con comillas dobles */
\"([^\\\"\n]|\\.)*\"  { fprintf(token_file, "<CONST_TEXTO, %s>\n", yytext); }

 /* Constantes de texto con comillas simples */
\'([^\\\'\n]|\\.)*\'  { fprintf(token_file, "<CONST_TEXTO, %s>\n", yytext); }

 /* Constantes logicas */
"Verdadero"         { fprintf(token_file, "<CONST_LOGICO, Verdadero>\n"); }
"Falso"             { fprintf(token_file, "<CONST_LOGICO, Falso>\n"); }

 /* Ignorar Comentarios */
"//".*              ;

 /* Delimitadores */
","                 { fprintf(token_file, "<DELIMITADOR, ,>\n"); }
";"                 { fprintf(token_file, "<DELIMITADOR, ;>\n"); }
"("                 { fprintf(token_file, "<DELIMITADOR, (>\n"); }
")"                 { fprintf(token_file, "<DELIMITADOR, )>\n"); }
"["                 { fprintf(token_file, "<DELIMITADOR, [>\n"); }
"]"                 { fprintf(token_file, "<DELIMITADOR, ]>\n"); }
"\""               { fprintf(token_file, "<DELIMITADOR, \">\n"); }

 /* Simbolos extras */
 ":"                { fprintf(token_file, "<SIMBOLO, :>\n"); }

 /* Identificadores */
[a-zA-Z_][a-zA-Z0-9_]*  { fprintf(token_file, "<IDENTIFICADOR, %s>\n", yytext); }

 /* Ignora espacios en blanco y tabulaciones */
[ \t]+              ;

 /* Reconocer saltos de linea */
\n                      { fprintf(token_file, "<SALTO_LINEA>\n"); }

 /* Caracteres no reconocidos */
.                       { fprintf(token_file, "<CARACTER_NO_RECONOCIDO, %s>\n", yytext); }

%%

int main() {
    int opcion;
    char archivo[100];

    printf("Seleccione una opcion:\n");
    printf("1. Leer desde un archivo txt\n");
    printf("2. Ingreso manual\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese el nombre del archivo (con extension .txt): ");
        scanf("%s", archivo);

        yyin = fopen(archivo, "r");
        if (yyin == NULL) {
            printf("Error al abrir el archivo %s\n", archivo);
            return 1;
        }
    } else if (opcion == 2) {
        printf("Ingrese el texto manualmente (Ctrl+C para finalizar):\n");
        yyin = stdin;
    } else {
        printf("Opcion no valida.\n");
        return 1;
    }

    token_file = fopen("tokens.txt", "w");
    if (token_file == NULL) {
        printf("Error al crear el archivo de tokens.\n");
        return 1;
    }

    yylex();

    fclose(token_file);
    if (opcion == 1) {
        fclose(yyin);
    }

    printf("Analisis lexico completado. Los tokens se han guardado en 'tokens.txt'.\n");
    return 0;
}