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

 /* Tipos de datos */
"Entero"            { fprintf(token_file, "<TIPO_DATO, Entero>\n"); }
"Real"              { fprintf(token_file, "<TIPO_DATO, Real>\n"); }
"Texto"             { fprintf(token_file, "<TIPO_DATO, Texto>\n"); }

 /* Operadores de asignación */
"<-"                { fprintf(token_file, "<OPERADOR_ASIGNACION, <- >\n"); }

 /* Operadores */
"+"                 { fprintf(token_file, "<OPERADOR, +>\n"); }
"-"                 { fprintf(token_file, "<OPERADOR, ->\n"); }
"*"                 { fprintf(token_file, "<OPERADOR, *>\n"); }
"/"                 { fprintf(token_file, "<OPERADOR, />\n"); }

 /* Constantes numericas */
[0-9]+              { fprintf(token_file, "<CONST_ENTERO, %s>\n", yytext); }
[0-9]+"."[0-9]+     { fprintf(token_file, "<CONST_REAL, %s>\n", yytext); }

 /* Constantes de texto */
\".*\"              { fprintf(token_file, "<CONST_TEXTO, %s>\n", yytext); }

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