%{
#include <stdio.h>
#include <stdlib.h>
FILE *token_file;
%}

%option noyywrap

%%

"Algoritmo"         { fprintf(token_file, "<PALABRA_RESERVADA, Algoritmo>\n"); }
"FinAlgoritmo"      { fprintf(token_file, "<PALABRA_RESERVADA, FinAlgoritmo>\n"); }
"Definir"           { fprintf(token_file, "<PALABRA_RESERVADA, Definir>\n"); }
"Como"              { fprintf(token_file, "<PALABRA_RESERVADA, Como>\n"); }
"Escribir"          { fprintf(token_file, "<PALABRA_RESERVADA, Escribir>\n"); }

"Entero"            { fprintf(token_file, "<TIPO_DATO, Entero>\n"); }
"Real"              { fprintf(token_file, "<TIPO_DATO, Real>\n"); }
"Texto"             { fprintf(token_file, "<TIPO_DATO, Texto>\n"); }

"<-"                { fprintf(token_file, "<OPERADOR_ASIGNACION, <- >\n"); }
"+"                 { fprintf(token_file, "<OPERADOR, +>\n"); }
"-"                 { fprintf(token_file, "<OPERADOR, ->\n"); }
"*"                 { fprintf(token_file, "<OPERADOR, *>\n"); }
"/"                 { fprintf(token_file, "<OPERADOR, />\n"); }

[0-9]+              { fprintf(token_file, "<CONST_ENTERO, %s>\n", yytext); }
[0-9]+"."[0-9]+     { fprintf(token_file, "<CONST_REAL, %s>\n", yytext); }
\".*\"              { fprintf(token_file, "<CONST_TEXTO, %s>\n", yytext); }
[a-zA-Z_][a-zA-Z0-9_]*  { fprintf(token_file, "<IDENTIFICADOR, %s>\n", yytext); }

[ \t\n]+            ; // Ignorar espacios y saltos
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
