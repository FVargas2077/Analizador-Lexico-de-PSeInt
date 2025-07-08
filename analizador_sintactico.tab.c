
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\analizador_sintactico.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    extern int yylex(void);
    extern int yyparse(void);
    extern char *yytext;
    extern int linea;
    extern FILE *yyin;
    void yyerror(const char *s);


/* Line 189 of yacc.c  */
#line 86 "analizador_sintactico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 13 ".\\analizador_sintactico.y"

    int entero;
    float real;
    char *str;



/* Line 214 of yacc.c  */
#line 204 "analizador_sintactico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "analizador_sintactico.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   619

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    16,    23,    24,    28,    32,    33,
      36,    39,    42,    44,    46,    48,    50,    52,    54,    56,
      58,    60,    62,    64,    66,    71,    75,    77,    79,    81,
      83,    85,    89,    96,   105,   107,   109,   115,   123,   129,
     130,   133,   136,   141,   147,   153,   159,   169,   182,   192,
     205,   208,   210,   214,   217,   223,   231,   239,   249,   250,
     252,   254,   258,   260,   264,   268,   276,   282,   290,   295,
     299,   301,   305,   307,   309,   313,   317,   319,   323,   327,
     331,   335,   339,   343,   347,   349,   353,   357,   359,   363,
     367,   371,   375,   377,   379,   381,   386,   393,   395,   397,
     399,   403,   406,   409,   414
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,     3,    73,    78,     4,    77,    -1,    71,
       3,    73,    78,     4,    77,    -1,     3,    73,    78,     4,
      71,    77,    -1,    -1,    71,    99,    77,    -1,    71,    95,
      77,    -1,    -1,    78,    79,    -1,    78,    71,    -1,    78,
      65,    -1,    80,    -1,    83,    -1,    85,    -1,    86,    -1,
      89,    -1,    90,    -1,    91,    -1,    92,    -1,    94,    -1,
     100,    -1,   101,    -1,    72,    -1,     5,    81,     6,    82,
      -1,    73,    64,    81,    -1,    73,    -1,    38,    -1,    39,
      -1,    40,    -1,    41,    -1,    73,    84,   103,    -1,    73,
      68,   103,    69,    84,   103,    -1,    73,    68,   103,    64,
     103,    69,    84,   103,    -1,    42,    -1,    49,    -1,     9,
     103,    10,    78,    12,    -1,     9,   103,    10,    78,    11,
      78,    12,    -1,    13,   103,    20,    87,    18,    -1,    -1,
      71,    88,    -1,    87,    88,    -1,    14,   103,    70,    78,
      -1,    15,    16,    17,    70,    78,    -1,    19,   103,    20,
      78,    21,    -1,    22,    78,    23,    24,   103,    -1,    25,
      73,    84,   103,    23,   103,    20,    78,    29,    -1,    25,
      73,    84,   103,    23,   103,    27,    28,   103,    20,    78,
      29,    -1,    25,    73,    26,   103,    23,   103,    20,    78,
      29,    -1,    25,    73,    26,   103,    23,   103,    27,    28,
     103,    20,    78,    29,    -1,     7,    93,    -1,   103,    -1,
      93,    64,   103,    -1,     8,    73,    -1,     8,    73,    68,
     103,    69,    -1,     8,    73,    68,   103,    64,   103,    69,
      -1,    30,    73,    66,    96,    67,    78,    31,    -1,    30,
      73,    42,    73,    66,    96,    67,    78,    31,    -1,    -1,
      97,    -1,    98,    -1,    97,    64,    98,    -1,    73,    -1,
      73,    35,    36,    -1,    73,    35,    37,    -1,    32,    73,
      66,    96,    67,    78,    33,    -1,    34,    73,    68,   103,
      69,    -1,    34,    73,    68,   103,    64,   103,    69,    -1,
      73,    66,   102,    67,    -1,    73,    66,    67,    -1,   103,
      -1,   102,    64,   103,    -1,   104,    -1,   105,    -1,   104,
      56,   105,    -1,   104,    57,   105,    -1,   106,    -1,   106,
      49,   106,    -1,   106,    50,   106,    -1,   106,    51,   106,
      -1,   106,    54,   106,    -1,   106,    55,   106,    -1,   106,
      52,   106,    -1,   106,    53,   106,    -1,   107,    -1,   106,
      43,   107,    -1,   106,    44,   107,    -1,   108,    -1,   107,
      45,   108,    -1,   107,    46,   108,    -1,   107,    47,   108,
      -1,   107,    48,   108,    -1,    59,    -1,    60,    -1,    73,
      -1,    73,    68,   103,    69,    -1,    73,    68,   103,    64,
     103,    69,    -1,    61,    -1,    62,    -1,    63,    -1,    66,
     103,    67,    -1,    44,   108,    -1,    58,   108,    -1,    73,
      66,   102,    67,    -1,    73,    66,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    69,    73,    79,    81,    82,    84,    86,
      87,    88,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   110,   117,   118,   122,   123,   124,
     125,   129,   133,   137,   144,   145,   149,   153,   160,   166,
     168,   169,   173,   177,   184,   191,   198,   202,   206,   210,
     217,   224,   225,   229,   233,   237,   244,   248,   254,   256,
     260,   261,   265,   266,   267,   271,   278,   282,   289,   293,
     300,   301,   305,   309,   310,   311,   315,   316,   317,   318,
     319,   320,   321,   322,   326,   327,   328,   332,   333,   334,
     335,   336,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ALGORITMO", "FINALGORITMO", "DEFINIR",
  "COMO", "ESCRIBIR", "LEER", "SI", "ENTONCES", "SINO", "FINSI", "SEGUN",
  "CASO", "DE", "OTRO", "MODO", "FINSEGUN", "MIENTRAS", "HACER",
  "FINMIENTRAS", "REPETIR", "HASTA", "QUE", "PARA", "DESDE", "CON", "PASO",
  "FINPARA", "FUNCION", "FINFUNCION", "SUBALGORITMO", "FINSUBALGORITMO",
  "DIMENSION", "POR", "REFERENCIA", "VALOR", "ENTERO", "REAL", "CADENA",
  "LOGICO", "ASIGNACION", "MAS", "MENOS", "ASTERISCO", "DIVISION",
  "MODULO", "POTENCIA", "IGUAL", "IGUALIGUAL", "DIFERENTE", "MENOR_IGUAL",
  "MAYOR_IGUAL", "MENOR", "MAYOR", "Y", "O", "NO", "NUMERO_ENTERO",
  "NUMERO_REAL", "TEXTO", "VERDADERO", "FALSO", "COMA", "PUNTO_Y_COMA",
  "PA", "PC", "CA", "CC", "DOS_PUNTOS", "SALTO_LINEA", "ERROR",
  "IDENTIFICADOR", "UMINUS", "$accept", "programa",
  "subalgoritmo_funciones_definir", "instrucciones", "instruccion",
  "declaracion", "definir_identificadores", "tipo_dato", "asignacion",
  "asignacion_variable", "estructura_si", "estructura_segun",
  "casos_segun", "caso_segun", "estructura_mientras", "estructura_repetir",
  "estructura_para", "instruccion_escribir", "expresion_escribir",
  "instruccion_leer", "funcion", "parametros_funcion", "lista_parametros",
  "parametro", "subalgoritmo", "declaracion_dimension",
  "llamada_procedimiento", "argumentos_llamada", "expresion",
  "expresion_logica", "expresion_relacional", "expresion_aritmetica",
  "termino", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    76,    76,    77,    77,    77,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    82,    82,    82,
      82,    83,    83,    83,    84,    84,    85,    85,    86,    87,
      87,    87,    88,    88,    89,    90,    91,    91,    91,    91,
      92,    93,    93,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    98,    99,   100,   100,   101,   101,
     102,   102,   103,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   107,   107,   107,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,     6,     0,     3,     3,     0,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     3,     6,     8,     1,     1,     5,     7,     5,     0,
       2,     2,     4,     5,     5,     5,     9,    12,     9,    12,
       2,     1,     3,     2,     5,     7,     7,     9,     0,     1,
       1,     3,     1,     3,     3,     7,     5,     7,     4,     3,
       1,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     1,     1,     4,     6,     1,     1,     1,
       3,     2,     2,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     8,     0,     1,     0,     8,     5,
       0,     0,     0,     0,     0,     0,     8,     0,     0,    11,
      10,    23,     0,     9,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,     0,     5,     2,    26,     0,
       0,     0,    92,    93,    97,    98,    99,     0,    94,    50,
      51,    72,    73,    76,    84,    87,    53,     0,     0,     0,
       0,     0,     0,    34,    35,     0,     0,     0,     5,     0,
       0,     0,     4,     5,     5,     0,     0,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
      39,     8,     0,     0,     0,     0,    69,     0,    70,     0,
      31,     3,     0,     0,     7,     6,    25,    27,    28,    29,
      30,    24,   100,   104,     0,     0,    52,    74,    75,    85,
      86,    77,    78,    79,    82,    83,    80,    81,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,    58,    58,   103,     0,
      95,     0,    54,     8,    36,     0,     0,    40,    38,    41,
      44,    45,     0,     0,     0,    66,    71,     0,     0,     0,
      62,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    58,     0,     8,     0,     8,
      96,    55,    37,     8,     0,     8,     0,     8,     0,    67,
       0,     0,    63,    64,     0,    61,     0,    42,     8,     0,
       0,     0,     0,    33,     8,    56,    65,    43,    48,     0,
      46,     0,     0,     8,     8,    57,     0,     0,    49,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    37,     7,    23,    24,    39,   121,    25,    67,
      26,    27,   145,   167,    28,    29,    30,    31,    49,    32,
      73,   181,   182,   183,    74,    33,    34,   107,   108,    51,
      52,    53,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -143
static const yytype_int16 yypact[] =
{
      -2,   -70,    20,    47,  -143,   -18,  -143,     5,  -143,     4,
      13,   539,    28,   539,   539,   539,  -143,    39,    43,  -143,
    -143,  -143,   -14,  -143,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,    37,   -11,  -143,    57,   130,
     539,   539,  -143,  -143,  -143,  -143,  -143,   539,    31,    73,
    -143,   -23,  -143,   131,    18,  -143,    75,   137,   121,   128,
     195,    25,    81,  -143,  -143,   486,   539,   539,    80,    84,
      85,    92,  -143,    80,    80,    13,    66,  -143,  -143,    86,
     519,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,  -143,
      88,  -143,   136,   539,   539,   539,  -143,   -47,  -143,   -33,
    -143,  -143,   -26,    95,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,    56,   -32,  -143,  -143,  -143,    18,
      18,    83,    83,    83,    83,    83,    83,    83,  -143,  -143,
    -143,  -143,    23,   106,   115,    70,   214,   539,   139,   143,
      34,   539,  -143,   539,   -20,    94,    97,    97,  -143,   539,
    -143,   539,  -143,  -143,  -143,   539,   138,  -143,  -143,  -143,
    -143,  -143,   539,   539,   539,  -143,  -143,    99,   539,   107,
     141,   105,   123,  -143,   125,   119,   124,   237,   120,   177,
      41,    63,   127,   -20,  -143,    97,    96,  -143,    97,  -143,
    -143,  -143,  -143,  -143,   135,  -143,   170,  -143,   178,  -143,
     539,   140,  -143,  -143,   269,  -143,   310,   503,  -143,   340,
     539,   381,   539,  -143,  -143,  -143,  -143,   503,  -143,   189,
    -143,   192,   409,  -143,  -143,  -143,   442,   470,  -143,  -143
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,   -25,    -8,  -143,  -143,   149,  -143,  -143,   -54,
    -143,  -143,  -143,    87,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -142,  -143,    17,  -143,  -143,  -143,   148,    -9,  -143,
      51,   526,    60,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,     1,    50,     4,    57,    58,    59,   104,    60,     9,
      10,    72,    11,    12,    13,   184,   155,   151,    14,    69,
     152,    70,    63,     5,    15,    77,    78,    16,    63,    64,
      17,   153,   159,    83,    84,    64,   154,   160,    79,    18,
     156,    68,    10,   111,    11,    12,    13,     6,   114,   115,
      14,   103,    65,   211,    66,     8,    15,   109,   110,    16,
      71,   205,    17,    94,    95,    96,    97,    63,   206,     2,
      19,    18,   125,   126,    64,    36,    20,    21,    22,   138,
     139,   140,   141,   207,   165,   166,    38,   161,   168,   142,
     208,   143,   162,   146,   148,   149,   150,    80,   174,    81,
     178,    56,    19,   175,   117,   118,   119,   120,    20,    21,
      22,    10,    61,    11,    12,    13,    62,   163,   164,    14,
     151,    75,    69,   158,    70,    15,    85,    86,    16,   165,
     166,    17,   212,   213,   127,   128,    76,    82,   171,   210,
      18,   100,   176,    98,   177,   129,   130,    99,   101,   105,
     185,    71,   186,   122,   189,   187,   188,   112,   113,   144,
     147,   157,   172,   190,   191,   192,   173,   179,   193,   194,
     180,    19,   197,   195,    85,    86,   196,    20,    21,    22,
      87,    88,    89,    90,    91,    92,    93,   198,   200,   214,
     203,   216,   199,   201,   204,   217,   209,   219,   220,   221,
      10,   223,    11,    12,    13,   218,   222,   224,    14,   233,
     227,   229,   234,   231,    15,   215,   232,    16,   102,    10,
      17,    11,    12,    13,   116,   236,   237,    14,   124,    18,
       0,     0,   169,    15,     0,   170,    16,     0,     0,    17,
       0,     0,    10,     0,    11,    12,    13,     0,    18,   202,
      14,     0,     0,     0,     0,     0,    15,     0,     0,    16,
      19,     0,    17,     0,     0,     0,    20,    21,    22,     0,
       0,    18,     0,     0,    10,     0,    11,    12,    13,    19,
       0,     0,    14,     0,     0,    20,    21,    22,    15,     0,
       0,    16,     0,     0,    17,     0,     0,     0,     0,     0,
     225,     0,    19,    18,     0,     0,     0,     0,    20,    21,
      22,     0,     0,     0,     0,    10,     0,    11,    12,    13,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
       0,     0,    16,     0,    19,    17,     0,     0,     0,     0,
      20,    21,    22,   226,    18,    10,     0,    11,    12,    13,
       0,     0,     0,    14,     0,     0,     0,     0,     0,    15,
       0,     0,    16,     0,     0,    17,     0,     0,     0,   228,
       0,     0,     0,     0,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,     0,     0,    10,     0,    11,    12,
      13,     0,     0,     0,    14,     0,     0,     0,     0,     0,
      15,     0,     0,    16,     0,    19,    17,     0,     0,     0,
     230,    20,    21,    22,    10,    18,    11,    12,    13,     0,
       0,     0,    14,     0,     0,     0,     0,     0,    15,     0,
       0,    16,     0,     0,    17,     0,     0,     0,     0,     0,
     235,     0,     0,    18,     0,     0,    19,    10,     0,    11,
      12,    13,    20,    21,    22,    14,     0,     0,     0,     0,
       0,    15,     0,     0,    16,     0,     0,    17,     0,     0,
       0,   238,     0,     0,    19,    10,    18,    11,    12,    13,
      20,    21,    22,    14,     0,     0,     0,     0,     0,    15,
       0,     0,    16,     0,     0,    17,     0,     0,     0,   239,
       0,     0,     0,     0,    18,     0,     0,    19,    10,     0,
      11,    12,    13,    20,    21,    22,    14,     0,     0,     0,
       0,     0,    15,     0,     0,    16,     0,     0,    17,     0,
      40,     0,     0,     0,     0,    19,     0,    18,     0,     0,
       0,    20,    21,    22,    41,    42,    43,    44,    45,    46,
       0,     0,    47,   106,     0,     0,     0,     0,     0,    48,
       0,     0,     0,    40,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    20,    21,    22,    41,    42,    43,
      44,    45,    46,    40,     0,    47,   123,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,     0,     0,    47,     0,     0,     0,     0,
       0,     0,    48,   131,   132,   133,   134,   135,   136,   137
};

static const yytype_int16 yycheck[] =
{
       8,     3,    11,    73,    13,    14,    15,    61,    16,     4,
       5,    36,     7,     8,     9,   157,    42,    64,    13,    30,
      67,    32,    42,     3,    19,    40,    41,    22,    42,    49,
      25,    64,    64,    56,    57,    49,    69,    69,    47,    34,
      66,     4,     5,    68,     7,     8,     9,     0,    73,    74,
      13,    26,    66,   195,    68,    73,    19,    66,    67,    22,
      71,    20,    25,    45,    46,    47,    48,    42,    27,    71,
      65,    34,    81,    82,    49,    71,    71,    72,    73,    94,
      95,    96,    97,    20,    14,    15,    73,    64,    18,    98,
      27,    99,    69,   101,   103,   104,   105,    66,    64,    68,
     154,    73,    65,    69,    38,    39,    40,    41,    71,    72,
      73,     5,    73,     7,     8,     9,    73,    11,    12,    13,
      64,    64,    30,    67,    32,    19,    43,    44,    22,    14,
      15,    25,    36,    37,    83,    84,     6,    64,   147,   193,
      34,    20,   151,    68,   153,    85,    86,    10,    20,    68,
     159,    71,   161,    67,    16,   163,   165,    73,    73,    71,
      24,    66,    23,   172,   173,   174,    23,    73,    69,   178,
      73,    65,    67,    66,    43,    44,    35,    71,    72,    73,
      49,    50,    51,    52,    53,    54,    55,    64,    69,   197,
      70,   199,    67,    69,    17,   203,    69,   205,    28,   207,
       5,   210,     7,     8,     9,    70,    28,    67,    13,    20,
     218,   220,    20,   222,    19,   198,   224,    22,    23,     5,
      25,     7,     8,     9,    75,   233,   234,    13,    80,    34,
      -1,    -1,   145,    19,    -1,    21,    22,    -1,    -1,    25,
      -1,    -1,     5,    -1,     7,     8,     9,    -1,    34,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      65,    -1,    25,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    34,    -1,    -1,     5,    -1,     7,     8,     9,    65,
      -1,    -1,    13,    -1,    -1,    71,    72,    73,    19,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    65,    34,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,    -1,    -1,     5,    -1,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    65,    25,    -1,    -1,    -1,    -1,
      71,    72,    73,    33,    34,     5,    -1,     7,     8,     9,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    65,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    22,    -1,    65,    25,    -1,    -1,    -1,
      29,    71,    72,    73,     5,    34,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    -1,    -1,    65,     5,    -1,     7,
       8,     9,    71,    72,    73,    13,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    29,    -1,    -1,    65,     5,    34,     7,     8,     9,
      71,    72,    73,    13,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    65,     5,    -1,
       7,     8,     9,    71,    72,    73,    13,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,    -1,
      44,    -1,    -1,    -1,    -1,    65,    -1,    34,    -1,    -1,
      -1,    71,    72,    73,    58,    59,    60,    61,    62,    63,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    58,    59,    60,
      61,    62,    63,    44,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    87,    88,    89,    90,    91,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    71,    76,    73,     3,     0,    78,    73,     4,
       5,     7,     8,     9,    13,    19,    22,    25,    34,    65,
      71,    72,    73,    79,    80,    83,    85,    86,    89,    90,
      91,    92,    94,   100,   101,    78,    71,    77,    73,    81,
      44,    58,    59,    60,    61,    62,    63,    66,    73,    93,
     103,   104,   105,   106,   107,   108,    73,   103,   103,   103,
      78,    73,    73,    42,    49,    66,    68,    84,     4,    30,
      32,    71,    77,    95,    99,    64,     6,   108,   108,   103,
      66,    68,    64,    56,    57,    43,    44,    49,    50,    51,
      52,    53,    54,    55,    45,    46,    47,    48,    68,    10,
      20,    20,    23,    26,    84,    68,    67,   102,   103,   103,
     103,    77,    73,    73,    77,    77,    81,    38,    39,    40,
      41,    82,    67,    67,   102,   103,   103,   105,   105,   107,
     107,   106,   106,   106,   106,   106,   106,   106,   108,   108,
     108,   108,   103,    78,    71,    87,    78,    24,   103,   103,
     103,    64,    67,    64,    69,    42,    66,    66,    67,    64,
      69,    64,    69,    11,    12,    14,    15,    88,    18,    88,
      21,   103,    23,    23,    64,    69,   103,   103,    84,    73,
      73,    96,    97,    98,    96,   103,   103,    78,   103,    16,
     103,   103,   103,    69,   103,    66,    35,    67,    64,    67,
      69,    69,    12,    70,    17,    20,    27,    20,    27,    69,
      84,    96,    36,    37,    78,    98,    78,    78,    70,    78,
      28,    78,    28,   103,    67,    31,    33,    78,    29,   103,
      29,   103,    78,    20,    20,    31,    78,    78,    29,    29
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 66 ".\\analizador_sintactico.y"
    {
        printf("Programa: %s completado exitosamente\n", (yyvsp[(2) - (5)].str));
    ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 70 ".\\analizador_sintactico.y"
    {
        printf("Programa: %s completado exitosamente\n", (yyvsp[(3) - (6)].str));
    ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 74 ".\\analizador_sintactico.y"
    {
        printf("Programa: %s completado exitosamente\n", (yyvsp[(2) - (6)].str));
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 104 ".\\analizador_sintactico.y"
    {
        printf("Error sintactico recuperado\n");
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 111 ".\\analizador_sintactico.y"
    {
        printf("Declarando variable\n");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 130 ".\\analizador_sintactico.y"
    {
        printf("Asignacion a: %s\n", (yyvsp[(1) - (3)].str));
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 134 ".\\analizador_sintactico.y"
    {
        printf("Asignacion a arreglo: %s[]\n", (yyvsp[(1) - (6)].str));
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 138 ".\\analizador_sintactico.y"
    {
        printf("Asignacion a matriz: %s[,]\n", (yyvsp[(1) - (8)].str));
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 150 ".\\analizador_sintactico.y"
    {
        printf("Estructura Si\n");
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 154 ".\\analizador_sintactico.y"
    {
        printf("Estructura Si-Sino\n");
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 161 ".\\analizador_sintactico.y"
    {
        printf("Estructura Segun\n");
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 174 ".\\analizador_sintactico.y"
    {
        printf("Caso\n");
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 178 ".\\analizador_sintactico.y"
    {
        printf("Caso por defecto\n");
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 185 ".\\analizador_sintactico.y"
    {
        printf("Estructura Mientras\n");
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 192 ".\\analizador_sintactico.y"
    {
        printf("Estructura Repetir-Hasta\n");
    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 199 ".\\analizador_sintactico.y"
    {
        printf("Estructura Para\n");
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 203 ".\\analizador_sintactico.y"
    {
        printf("Estructura Para con paso\n");
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 207 ".\\analizador_sintactico.y"
    {
        printf("Estructura Para desde-hasta\n");
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 211 ".\\analizador_sintactico.y"
    {
        printf("Estructura Para desde-hasta con paso\n");
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 218 ".\\analizador_sintactico.y"
    {
        printf("Instruccion Escribir\n");
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 230 ".\\analizador_sintactico.y"
    {
        printf("Leer variable: %s\n", (yyvsp[(2) - (2)].str));
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 234 ".\\analizador_sintactico.y"
    {
        printf("Leer arreglo: %s[]\n", (yyvsp[(2) - (5)].str));
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 238 ".\\analizador_sintactico.y"
    {
        printf("Leer matriz: %s[,]\n", (yyvsp[(2) - (7)].str));
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 245 ".\\analizador_sintactico.y"
    {
        printf("Definicion de funcion: %s\n", (yyvsp[(2) - (7)].str));
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 249 ".\\analizador_sintactico.y"
    {
        printf("Definicion de funcion con retorno: %s\n", (yyvsp[(4) - (9)].str));
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 272 ".\\analizador_sintactico.y"
    {
        printf("Definicion de subalgoritmo: %s\n", (yyvsp[(2) - (7)].str));
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 279 ".\\analizador_sintactico.y"
    {
        printf("Declaracion de arreglo: %s\n", (yyvsp[(2) - (5)].str));
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 283 ".\\analizador_sintactico.y"
    {
        printf("Declaracion de matriz: %s\n", (yyvsp[(2) - (7)].str));
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 290 ".\\analizador_sintactico.y"
    {
        printf("Llamada a procedimiento: %s\n", (yyvsp[(1) - (4)].str));
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 294 ".\\analizador_sintactico.y"
    {
        printf("Llamada a procedimiento: %s\n", (yyvsp[(1) - (3)].str));
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 1975 "analizador_sintactico.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 355 ".\\analizador_sintactico.y"


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
