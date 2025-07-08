
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ALGORITMO = 258,
     FINALGORITMO = 259,
     DEFINIR = 260,
     COMO = 261,
     ESCRIBIR = 262,
     LEER = 263,
     SI = 264,
     ENTONCES = 265,
     SINO = 266,
     FINSI = 267,
     SEGUN = 268,
     CASO = 269,
     DE = 270,
     OTRO = 271,
     MODO = 272,
     FINSEGUN = 273,
     MIENTRAS = 274,
     HACER = 275,
     FINMIENTRAS = 276,
     REPETIR = 277,
     HASTA = 278,
     QUE = 279,
     PARA = 280,
     DESDE = 281,
     CON = 282,
     PASO = 283,
     FINPARA = 284,
     FUNCION = 285,
     FINFUNCION = 286,
     SUBALGORITMO = 287,
     FINSUBALGORITMO = 288,
     DIMENSION = 289,
     POR = 290,
     REFERENCIA = 291,
     VALOR = 292,
     ENTERO = 293,
     REAL = 294,
     CADENA = 295,
     LOGICO = 296,
     ASIGNACION = 297,
     MAS = 298,
     MENOS = 299,
     ASTERISCO = 300,
     DIVISION = 301,
     MODULO = 302,
     POTENCIA = 303,
     IGUAL = 304,
     IGUALIGUAL = 305,
     DIFERENTE = 306,
     MENOR_IGUAL = 307,
     MAYOR_IGUAL = 308,
     MENOR = 309,
     MAYOR = 310,
     Y = 311,
     O = 312,
     NO = 313,
     NUMERO_ENTERO = 314,
     NUMERO_REAL = 315,
     TEXTO = 316,
     VERDADERO = 317,
     FALSO = 318,
     COMA = 319,
     PUNTO_Y_COMA = 320,
     PA = 321,
     PC = 322,
     CA = 323,
     CC = 324,
     DOS_PUNTOS = 325,
     SALTO_LINEA = 326,
     ERROR = 327,
     IDENTIFICADOR = 328,
     UMINUS = 329
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 ".\\analizador_sintactico.y"

    int entero;
    float real;
    char *str;



/* Line 1676 of yacc.c  */
#line 134 "analizador_sintactico.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


