%{
#include <stdlib.h> // Para la funcion fopen
#include <stdio.h> // Para la funcion fprintf
#include "analizador_sintactico.tap.h"
int linea = 0; // Contador de lineas
%}

%option caseless
%option noyywrap

%%

 /* Palabras reservadas */
"Algoritmo"         { return ALGORITMO; }
"FinAlgoritmo"      { return FINALGORITMO; }
"Proceso"           { return ALGORITMO; }
"FinProceso"        { return FINALGORITMO; }
"Definir"           { return DEFINIR; }
"Como"              { return COMO; }
"Escribir"          { return ESCRIBIR; }
"Imprimir"          { return ESCRIBIR; }
"Mostrar"           { return ESCRIBIR; }
"Leer"              { return LEER; }
"Si"                { return SI; }
"Entonces"          { return ENTONCES; }
"Sino"              { return SINO; }
"FinSi"             { return FINSI; }
"Segun"             { return SEGUN; }
"Caso"              { return CASO; }
"De"                { return DE; }
"Otro"              { return OTRO; }
"Modo"              { return MODO; }
"FinSegun"          { return FINSEGUN; }
"Mientras"          { return MIENTRAS; }
"Hacer"             { return HACER; }
"FinMientras"       { return FINMIENTRAS; }
"Repetir"           { return REPETIR; }
"Hasta"             { return HASTA; }
"Que"               { return QUE; }
"Para"              { return PARA; }
"Desde"             { return DESDE; }
"Con"               { return CON; }
"Paso"              { return PASO; }
"FinPara"           { return FINPARA; }
"Funcion"           { return FUNCION; }
"FinFuncion"        { return FINFUNCION; }
"SubProceso"        { return SUBALGORITMO; }
"FinSubProceso"     { return FINSUBALGORITMO; }
"SubAlgoritmo"      { return SUBALGORITMO; }
"FinSubAlgoritmo"   { return FINSUBALGORITMO; }
"Dimension"         { return DIMENSION; }
"Por"               { return POR; }
"Referencia"        { return REFERENCIA; }
"Valor"             { return VALOR; }
"Fin"               { return FIN; }

 /* Tipos de datos */
"Entero"            { return ENTERO; }
"Real"              { return REAL; }
"Caracter"          { return CADENA; }
"Cadena"            { return CADENA; }
"Texto"             { return CADENA; }
"Logico"            { return LOGICO; }

 /* Operadores de asignacion */
"<-"|":="           { return ASIGNACION; }

 /* Operadores aritmeticos */
"+"                 { return MAS; }
"-"                 { return MENOS; }
"*"                 { return ASTERISCO; }
"/"                 { return DIVISION; }
"%"|"MOD"           { return MODULO; }
"^"                 { return POTENCIA; }

 /* Operadores relacionales */
"="                 { return IGUAL; }
"=="                { return IGUALIGUAL; }
"<>"                { return DIFERENTE; }
"<="                { return MENOR_IGUAL; }
">="                { return MAYOR_IGUAL; }
"<"                 { return MENOR; }
">"                 { return MAYOR; }

 /* Operadores logicos */
"Y"|"&"             { return Y; }
"O"|"|"             { return O; }
"NO"|"~"            { return NO; }

 /* Constantes numericas sin signo */
[0-9]+\.[0-9]+        { yylval.real = atof(yytext); return NUMERO_REAL; }
[0-9]+                { yylval.entero = atoi(yytext); return NUMERO_ENTERO; }

 /* Constantes de texto con comillas dobles */
\"([^\\\"\n]|\\.)*\"  { yylval.str = strdup(yytext); return TEXTO; }

 /* Constantes de texto con comillas simples */
\'([^\\\'\n]|\\.)*\'  { yylval.str = strdup(yytext); return TEXTO; }

 /* Constantes logicas */
"Verdadero"         { return VERDADERO; }
"Falso"             { return FALSO; }

 /* Ignorar Comentarios */
"//".*              ;

 /* Delimitadores */
","                 { return COMA; }
";"                 { return PUNTO_Y_COMA; }
"("                 { return PA; }
")"                 { return PC; }
"["                 { return CA; }
"]"                 { return CC; }

 /* Simbolos extras */
 ":"                { return DOS_PUNTOS; }

 /* Identificadores */
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.str = strdup(yytext); return IDENTIFICADOR; }

 /* Ignora espacios en blanco y tabulaciones */
[ \t]+              ;

 /* Reconocer saltos de linea */
\n                      { return SALTO_LINEA; }

 /* Caracteres no reconocidos */
.                       { return ERROR; }

%%