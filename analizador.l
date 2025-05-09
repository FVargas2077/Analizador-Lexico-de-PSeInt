%{
#include <stdio.h> // Para la función fprintf
#include <stdlib.h> // Para la función exit
FILE *token_file; // Archivo para guardar los tokens
%}

%option caseless
%option noyywrap

%%
 /* Palabras reservadas */
"Algoritmo"         { fprintf(token_file, "<PALABRA_RESERVADA, Algoritmo>\n"); }
"FinAlgoritmo"      { fprintf(token_file, "<PALABRA_RESERVADA, FinAlgoritmo>\n"); }
"Definir"           { fprintf(token_file, "<PALABRA_RESERVADA, Definir>\n"); }
"Como"              { fprintf(token_file, "<PALABRA_RESERVADA, Como>\n"); }
"Escribir"          { fprintf(token_file, "<PALABRA_RESERVADA, Escribir>\n"); }
"Leer"              { fprintf(token_file, "<PALABRA_RESERVADA, Leer>\n"); }
"Si"                { fprintf(token_file, "<PALABRA_RESERVADA, Si>\n"); }
"Entonces"          { fprintf(token_file, "<PALABRA_RESERVADA, Entonces>\n"); }
"Sino"              { fprintf(token_file, "<PALABRA_RESERVADA, Sino>\n"); }
"FinSi"             { fprintf(token_file, "<PALABRA_RESERVADA, FinSi>\n"); }
"Segun"             { fprintf(token_file, "<PALABRA_RESERVADA, Segun>\n"); }
"De Otro Modo"      { fprintf(token_file, "<PALABRA_RESERVADA, De Otro Modo>\n"); }
"FinSegun"          { fprintf(token_file, "<PALABRA_RESERVADA, FinSegun>\n"); }
"Mientras"          { fprintf(token_file, "<PALABRA_RESERVADA, Mientras>\n"); }
"Hacer"             { fprintf(token_file, "<PALABRA_RESERVADA, Hacer>\n"); }
"FinMientras"       { fprintf(token_file, "<PALABRA_RESERVADA, FinMientras>\n"); }
"Repetir"           { fprintf(token_file, "<PALABRA_RESERVADA, Repetir>\n"); }
"Hasta Que"         { fprintf(token_file, "<PALABRA_RESERVADA, Hasta Que>\n"); }
"Para"              { fprintf(token_file, "<PALABRA_RESERVADA, Para>\n"); }
"FinPara"           { fprintf(token_file, "<PALABRA_RESERVADA, FinPara>\n"); }
"Funcion"           { fprintf(token_file, "<PALABRA_RESERVADA, Funcion>\n"); }
"FinFuncion"        { fprintf(token_file, "<PALABRA_RESERVADA, FinFuncion>\n"); }
"SubProceso"        { fprintf(token_file, "<PALABRA_RESERVADA, SubProceso>\n"); }
"FinSubProceso"     { fprintf(token_file, "<PALABRA_RESERVADA, FinSubProceso>\n"); }

 /* Tipos de datos */
"Entero"            { fprintf(token_file, "<TIPO_DATO, Entero>\n"); }
"Real"              { fprintf(token_file, "<TIPO_DATO, Real>\n"); }
"Cadena"            { fprintf(token_file, "<TIPO_DATO, Cadena>\n"); }
"Texto"             { fprintf(token_file, "<TIPO_DATO, Texto>\n"); }
"Logico"            { fprintf(token_file, "<TIPO_DATO, Logico>\n"); }

 /* Operadores de asignación */
"<-"                { fprintf(token_file, "<OPERADOR_ASIGNACION, <- >\n"); }

 /* Operadores aritméticos */
"+"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, +>\n"); }
"-"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, ->\n"); }
"*"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, *>\n"); }
"/"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, />\n"); }
"%"                 { fprintf(token_file, "<OPERADOR_ARITMETICO, %>\n"); }

 /* Operadores relacionales */
"="                 { fprintf(token_file, "<OPERADOR_RELACIONAL, =>\n"); }
"<>"                { fprintf(token_file, "<OPERADOR_RELACIONAL, <>>\n"); }
"<="                { fprintf(token_file, "<OPERADOR_RELACIONAL, <=>\n"); }
">="                { fprintf(token_file, "<OPERADOR_RELACIONAL, >=>\n"); }
"<"                 { fprintf(token_file, "<OPERADOR_RELACIONAL, <>\n"); }
">"                 { fprintf(token_file, "<OPERADOR_RELACIONAL, >>\n"); }

 /* Constantes numéricas */
[0-9]+"."[0-9]+     { fprintf(token_file, "<CONST_REAL, %s>\n", yytext); }
[0-9]+              { fprintf(token_file, "<CONST_ENTERO, %s>\n", yytext); }

 /* Constantes de texto */
\"([^\\\"]|\\.)*\"  { fprintf(token_file, "<CONST_TEXTO, %s>\n", yytext); }

 /* Comentarios (solo tipo PSeInt) */
"//".*              { fprintf(token_file, "<COMENTARIO, %s>\n", yytext); }

 /* Delimitadores */
","     { fprintf(token_file, "<DELIMITADOR, ,>\n"); }
";"     { fprintf(token_file, "<DELIMITADOR, ;>\n"); }
"("     { fprintf(token_file, "<DELIMITADOR, (>\n"); }
")"     { fprintf(token_file, "<DELIMITADOR, )>\n"); }
"["     { fprintf(token_file, "<DELIMITADOR, [>\n"); }
"]"     { fprintf(token_file, "<DELIMITADOR, ]>\n"); }

 /* Identificadores */
[a-zA-Z_][a-zA-Z0-9_]*  { fprintf(token_file, "<IDENTIFICADOR, %s>\n", yytext); }

 /* Ignora espacios en blanco */
[ \t\n]+            ;

 /* Caracteres no reconocidos */
.                   { fprintf(token_file, "<CARACTER_NO_RECONOCIDO, %s>\n", yytext); }

%%

int main(int argc, char **argv) {
    if (argc > 1)
        yyin = fopen(argv[1], "r");
    else
        yyin = stdin;

    token_file = fopen("tokens.txt", "w");
    yylex();
    fclose(token_file);
    return 0;
}