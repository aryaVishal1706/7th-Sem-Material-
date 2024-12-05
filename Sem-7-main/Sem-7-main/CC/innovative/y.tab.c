/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BEG = 258,
     END = 259,
     INIT = 260,
     TO = 261,
     IF = 262,
     FOR = 263,
     THEN = 264,
     WHILE = 265,
     DO = 266,
     PRINT = 267,
     READ = 268,
     ASSIGN = 269,
     FLOATING_NUMBER = 270,
     BREAK = 271,
     RETURN = 272,
     END_FUNCTION = 273,
     START_PROCEDURE = 274,
     CLOSE_BRACKET = 275,
     OPEN_BRACKET = 276,
     EXP = 277,
     DIV = 278,
     MUL = 279,
     MINUS = 280,
     PLUS = 281,
     NOT = 282,
     ELSE = 283,
     ENDIF = 284,
     COMMA = 285,
     NEWLINE = 286,
     ENDWHILE = 287,
     INT = 288,
     FLOAT = 289,
     CHAR = 290,
     DOUBLE = 291,
     LONG = 292,
     ID = 293,
     NUM = 294,
     LESS = 295,
     GREAT = 296,
     LESS_E = 297,
     GREAT_E = 298,
     NOT_EQUAL = 299,
     EQUAL = 300,
     OR = 301,
     AND = 302,
     NAME_PROCEDURE = 303
   };
#endif
/* Tokens.  */
#define BEG 258
#define END 259
#define INIT 260
#define TO 261
#define IF 262
#define FOR 263
#define THEN 264
#define WHILE 265
#define DO 266
#define PRINT 267
#define READ 268
#define ASSIGN 269
#define FLOATING_NUMBER 270
#define BREAK 271
#define RETURN 272
#define END_FUNCTION 273
#define START_PROCEDURE 274
#define CLOSE_BRACKET 275
#define OPEN_BRACKET 276
#define EXP 277
#define DIV 278
#define MUL 279
#define MINUS 280
#define PLUS 281
#define NOT 282
#define ELSE 283
#define ENDIF 284
#define COMMA 285
#define NEWLINE 286
#define ENDWHILE 287
#define INT 288
#define FLOAT 289
#define CHAR 290
#define DOUBLE 291
#define LONG 292
#define ID 293
#define NUM 294
#define LESS 295
#define GREAT 296
#define LESS_E 297
#define GREAT_E 298
#define NOT_EQUAL 299
#define EQUAL 300
#define OR 301
#define AND 302
#define NAME_PROCEDURE 303




/* Copy the first part of user declarations.  */
#line 1 "CC_INNOV_YACC.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include <stdarg.h>
 int yylex();
 void yyerror(const char *s);
 extern char yytext[];
 #define YYDEBUG_LEXER_TEXT yytext
 char* code_concatenate(int arg_count,...);
 char* gen_addr(char* string);
 char* get_specifier(char *type);
 int t=0;
 extern int yylineno;


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "CC_INNOV_YACC.y"
{char* dataType; char* IdName; struct attributes{
 char* code;
 char* addr;
 char* specifier;
}A;}
/* Line 193 of yacc.c.  */
#line 214 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 227 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNRULES -- Number of states.  */
#define YYNSTATES  120

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

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
      45,    46,    47,    48
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    10,    13,    15,    18,    20,    22,
      24,    26,    28,    34,    42,    48,    53,    59,    61,    63,
      68,    70,    72,    74,    79,    84,    89,    93,    97,   102,
     106,   112,   121,   124,   129,   133,   137,   139,   143,   147,
     149,   151,   153,   157,   159,   161,   163,   165,   167,   169,
     171,   173,   175,   179,   181,   185,   187,   189,   191,   193
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,     3,    51,     4,    31,    -1,    52,    -1,
      51,    52,    -1,    54,    -1,    17,    54,    -1,    59,    -1,
      60,    -1,    56,    -1,    55,    -1,    16,    -1,     7,    54,
       9,    52,    29,    -1,     7,    54,     9,    52,    28,    52,
      29,    -1,    10,    54,     9,    52,    32,    -1,    11,    52,
      10,    54,    -1,     8,    59,    54,    59,    52,    -1,    61,
      -1,    53,    -1,    48,    21,    62,    20,    -1,    57,    -1,
      58,    -1,    63,    -1,    12,    68,    30,    54,    -1,    12,
      68,    30,    38,    -1,    13,    68,    30,    69,    -1,    63,
      66,    63,    -1,    63,    67,    63,    -1,     5,    38,     6,
      63,    -1,    38,    14,    63,    -1,     5,    21,    38,    70,
      20,    -1,    19,    48,    21,    62,    20,    52,    18,    70,
      -1,    38,    70,    -1,    62,    30,    38,    70,    -1,    63,
      26,    64,    -1,    63,    25,    64,    -1,    64,    -1,    64,
      24,    65,    -1,    64,    23,    65,    -1,    65,    -1,    38,
      -1,    39,    -1,    21,    63,    20,    -1,    42,    -1,    43,
      -1,    44,    -1,    45,    -1,    40,    -1,    41,    -1,    47,
      -1,    46,    -1,    70,    -1,    68,    30,    70,    -1,    38,
      -1,    69,    30,    38,    -1,    35,    -1,    33,    -1,    36,
      -1,    34,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    40,    41,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    60,
      63,    64,    65,    68,    69,    72,    75,    78,    81,    83,
      86,    89,    93,    94,    96,    97,    98,   101,   102,   103,
     107,   108,   109,   115,   116,   117,   118,   119,   120,   123,
     124,   128,   129,   132,   133,   137,   138,   139,   140,   141
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEG", "END", "INIT", "TO", "IF", "FOR",
  "THEN", "WHILE", "DO", "PRINT", "READ", "ASSIGN", "FLOATING_NUMBER",
  "BREAK", "RETURN", "END_FUNCTION", "START_PROCEDURE", "CLOSE_BRACKET",
  "OPEN_BRACKET", "EXP", "DIV", "MUL", "MINUS", "PLUS", "NOT", "ELSE",
  "ENDIF", "COMMA", "NEWLINE", "ENDWHILE", "INT", "FLOAT", "CHAR",
  "DOUBLE", "LONG", "ID", "NUM", "LESS", "GREAT", "LESS_E", "GREAT_E",
  "NOT_EQUAL", "EQUAL", "OR", "AND", "NAME_PROCEDURE", "$accept",
  "program", "codes", "Stmt", "function_call", "Expr", "print_stmt",
  "read_stmt", "RelExpr", "LogExpr", "assign_stmt", "initialize_stmt",
  "function", "parameter_list", "E", "T", "F", "relOp", "logOp",
  "datatypelist", "namelist", "datatype", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    54,    54,    55,    55,    56,    57,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    63,    64,    64,    64,
      65,    65,    65,    66,    66,    66,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     5,     7,     5,     4,     5,     1,     1,     4,
       1,     1,     1,     4,     4,     4,     3,     3,     4,     3,
       5,     8,     2,     4,     3,     3,     1,     3,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,    40,    41,     0,     0,     3,    18,
       5,    10,     9,    20,    21,     7,     8,    17,    22,    36,
      39,     1,     0,     0,    40,     0,     0,     0,     0,     0,
       0,    56,    58,    55,    57,    59,     0,    51,     0,     6,
       0,     0,     0,     0,     0,     4,     0,     0,    47,    48,
      43,    44,    45,    46,    50,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      29,     0,     0,     2,    35,    34,    26,    27,    38,    37,
       0,    28,     0,     0,     0,    15,    24,    23,    52,    53,
      25,     0,    32,    19,     0,    30,     0,    12,    16,    14,
       0,     0,     0,     0,    54,     0,    33,    13,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    82,    28,    29,    30,    66,    67,    46,
     100,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -66
static const yytype_int8 yypact[] =
{
       6,    71,    19,    -8,   -14,    -1,   -14,    71,   106,   106,
     -66,   -14,   -15,   -14,    22,   -66,    31,    10,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,    90,    20,
     -66,   -66,    16,    51,   -66,    50,    28,    22,   -14,    59,
      61,   -66,   -66,   -66,   -66,   -66,    39,   -66,    40,   -66,
      54,    14,   -14,    42,    46,   -66,   -14,   -14,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -14,   -14,   -14,   -14,
     106,   -14,    71,    -1,    71,   -14,   117,    60,    42,   -66,
      25,   106,     8,   -66,    20,    20,    25,    25,   -66,   -66,
      65,    25,    17,    71,    57,   -66,    82,   -66,   -66,   -66,
      70,    12,   -66,   -66,    53,   -66,    71,   -66,   -66,   -66,
      63,    71,   106,    73,   -66,    85,   -66,   -66,   106,   -66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -66,   -66,   -66,    -7,   -66,    -3,   -66,   -66,   -66,   -66,
       1,   -66,   -66,    33,   -11,     5,    -5,   -66,   -66,   103,
     -66,   -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -41
static const yytype_int8 yytable[] =
{
      40,    35,    51,    39,    36,    90,    38,    13,    49,     1,
      55,    98,    98,    32,    54,     3,   102,     4,     5,    31,
       6,     7,     8,     9,    34,    15,    10,    11,   103,    12,
      33,    13,   111,    50,    79,    73,    52,    37,   104,    56,
      57,    80,   104,    68,    69,   106,   107,   116,    14,    15,
      56,    57,    53,   119,    70,    86,    87,    71,    16,    72,
      91,    84,    85,    88,    89,    92,    33,    94,    74,    76,
      77,    75,    95,    97,    93,    78,     3,    83,     4,     5,
      81,     6,     7,     8,     9,   105,   108,    10,    11,   109,
      12,   112,    13,    41,    42,    43,    44,    45,    99,   113,
     110,   114,   117,   118,   115,   -40,   -40,   -40,   -40,    14,
      15,   101,    48,     0,     0,    56,    57,     0,     0,    16,
       0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
      58,    59,    60,    61,    62,    63,    64,    65,    13,    41,
      42,    43,    44,    45,     0,     0,     0,     0,     0,     0,
      41,    42,    43,    44,    45,    96,    15
};

static const yytype_int8 yycheck[] =
{
       7,     4,    13,     6,     5,    70,     5,    21,    11,     3,
      17,    76,    77,    21,     4,     5,    81,     7,     8,     0,
      10,    11,    12,    13,    38,    39,    16,    17,    20,    19,
      38,    21,    20,    48,    20,    38,    14,    38,    30,    25,
      26,    52,    30,    23,    24,    28,    29,   112,    38,    39,
      25,    26,    21,   118,    38,    66,    67,     6,    48,     9,
      71,    56,    57,    68,    69,    72,    38,    74,     9,    30,
      30,    10,    75,    76,    73,    21,     5,    31,     7,     8,
      38,    10,    11,    12,    13,    20,    93,    16,    17,    32,
      19,    38,    21,    33,    34,    35,    36,    37,    38,   106,
      30,    38,    29,    18,   111,    23,    24,    25,    26,    38,
      39,    78,     9,    -1,    -1,    25,    26,    -1,    -1,    48,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      40,    41,    42,    43,    44,    45,    46,    47,    21,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    50,     5,     7,     8,    10,    11,    12,    13,
      16,    17,    19,    21,    38,    39,    48,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    63,    64,
      65,     0,    21,    38,    38,    54,     5,    38,    59,    54,
      52,    33,    34,    35,    36,    37,    68,    70,    68,    54,
      48,    63,    14,    21,     4,    52,    25,    26,    40,    41,
      42,    43,    44,    45,    46,    47,    66,    67,    23,    24,
      38,     6,     9,    54,     9,    10,    30,    30,    21,    20,
      63,    38,    62,    31,    64,    64,    63,    63,    65,    65,
      70,    63,    52,    59,    52,    54,    38,    54,    70,    38,
      69,    62,    70,    20,    30,    20,    28,    29,    52,    32,
      30,    20,    38,    52,    38,    52,    70,    29,    18,    70
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 37 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(2) - (4)].A);printf("\nC code: \n%s",(yyval.A).code); YYACCEPT;}
    break;

  case 3:
#line 40 "CC_INNOV_YACC.y"
    {(yyval.A).code=(yyvsp[(1) - (1)].A).code;}
    break;

  case 4:
#line 41 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(2,(yyvsp[(1) - (2)].A).code,(yyvsp[(2) - (2)].A).code);}
    break;

  case 5:
#line 44 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(1) - (1)].A);}
    break;

  case 6:
#line 45 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(3,"return b",(yyvsp[(2) - (2)].A).code,";\n");}
    break;

  case 7:
#line 46 "CC_INNOV_YACC.y"
    {(yyval.A).code=(yyvsp[(1) - (1)].A).code;}
    break;

  case 8:
#line 47 "CC_INNOV_YACC.y"
    {(yyval.A).code=(yyvsp[(1) - (1)].A).code;}
    break;

  case 9:
#line 48 "CC_INNOV_YACC.y"
    {(yyval.A).code=(yyvsp[(1) - (1)].A).code;}
    break;

  case 10:
#line 49 "CC_INNOV_YACC.y"
    {(yyval.A).code=(yyvsp[(1) - (1)].A).code;}
    break;

  case 11:
#line 50 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(1,"break;\n");}
    break;

  case 12:
#line 51 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,"\nif(",(yyvsp[(2) - (5)].A).code,"){\n ",(yyvsp[(4) - (5)].A).code,"\n}");}
    break;

  case 13:
#line 52 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(7,"\nif(",(yyvsp[(2) - (7)].A).code,"){\n ",(yyvsp[(4) - (7)].A).code,"\n}else{\n ",(yyvsp[(6) - (7)].A).code,"\n}");}
    break;

  case 14:
#line 53 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,"\nwhile(",(yyvsp[(2) - (5)].A).code,"){\n ",(yyvsp[(4) - (5)].A).code," \n}\n");}
    break;

  case 15:
#line 54 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,"\ndo\n{\n ",(yyvsp[(2) - (4)].A).code,"\n}while(",(yyvsp[(4) - (4)].A).code,");\n");}
    break;

  case 16:
#line 55 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(8,"\nfor(", (yyvsp[(2) - (5)].A).code, (yyvsp[(3) - (5)].A).code, "; ", (yyvsp[(4) - (5)].A).code, ")\n{\n ", (yyvsp[(5) - (5)].A).code, "\n}\n");}
    break;

  case 17:
#line 56 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(1) - (1)].A);}
    break;

  case 18:
#line 57 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(1) - (1)].A);}
    break;

  case 19:
#line 60 "CC_INNOV_YACC.y"
    { (yyval.A).code=code_concatenate(5,"\n",(yyvsp[(1) - (4)].IdName),"(",(yyvsp[(3) - (4)].A).code,");\n");}
    break;

  case 20:
#line 63 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(1) - (1)].A);}
    break;

  case 21:
#line 64 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(1) - (1)].A);}
    break;

  case 22:
#line 65 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(1) - (1)].A);}
    break;

  case 23:
#line 68 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,"printf(\" ",(yyvsp[(2) - (4)].A).code,"\",",(yyvsp[(4) - (4)].A).code,");\n");}
    break;

  case 24:
#line 69 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,"printf(\" ",(yyvsp[(2) - (4)].A).code,"\" ,",(yyvsp[(4) - (4)].IdName),");\n");}
    break;

  case 25:
#line 72 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,"scanf(\"",(yyvsp[(2) - (4)].A).code,"\",",(yyvsp[(4) - (4)].A).code,");\n");}
    break;

  case 26:
#line 75 "CC_INNOV_YACC.y"
    {(yyval.A).code = code_concatenate(1,code_concatenate(3,(yyvsp[(1) - (3)].A).addr,(yyvsp[(2) - (3)].IdName),(yyvsp[(3) - (3)].A).addr,";"));}
    break;

  case 27:
#line 78 "CC_INNOV_YACC.y"
    {(yyval.A).code = code_concatenate(1,code_concatenate(3,(yyvsp[(1) - (3)].A).addr,(yyvsp[(2) - (3)].IdName),(yyvsp[(3) - (3)].A).addr,";"));}
    break;

  case 28:
#line 81 "CC_INNOV_YACC.y"
    { (yyval.A).addr=gen_addr((yyvsp[(2) - (4)].IdName));
    (yyval.A).code = code_concatenate(3,(yyvsp[(4) - (4)].A).code,code_concatenate(3,(yyval.A).addr," = ",(yyvsp[(4) - (4)].A).addr),";");}
    break;

  case 29:
#line 83 "CC_INNOV_YACC.y"
    { (yyval.A).addr = gen_addr((yyvsp[(1) - (3)].IdName));  
    (yyval.A).code = code_concatenate(3,(yyvsp[(3) - (3)].A).code,code_concatenate(3,(yyval.A).addr," = ",(yyvsp[(3) - (3)].A).addr),";");}
    break;

  case 30:
#line 86 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(2,code_concatenate(3,(yyvsp[(4) - (5)].dataType)," ",(yyvsp[(3) - (5)].IdName)),";\n");}
    break;

  case 31:
#line 89 "CC_INNOV_YACC.y"
    { (yyval.A).code = code_concatenate(8,(yyvsp[(8) - (8)].dataType)," ",(yyvsp[(2) - (8)].IdName),"(",(yyvsp[(4) - (8)].A).code,")\n{\n",(yyvsp[(6) - (8)].A).code,"\n}\n");}
    break;

  case 32:
#line 93 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(3,(yyvsp[(2) - (2)].dataType)," ",(yyvsp[(1) - (2)].IdName));}
    break;

  case 33:
#line 94 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(5,(yyvsp[(1) - (4)].A).code,",",(yyvsp[(4) - (4)].dataType)," ",(yyvsp[(3) - (4)].IdName));}
    break;

  case 34:
#line 96 "CC_INNOV_YACC.y"
    {(yyval.A).addr = code_concatenate(1,code_concatenate(3,(yyvsp[(1) - (3)].A).addr," + ",(yyvsp[(3) - (3)].A).addr,";")); }
    break;

  case 35:
#line 97 "CC_INNOV_YACC.y"
    {(yyval.A).addr = code_concatenate(1,code_concatenate(3,(yyvsp[(1) - (3)].A).addr," - ",(yyvsp[(3) - (3)].A).addr,";")); }
    break;

  case 36:
#line 98 "CC_INNOV_YACC.y"
    {(yyval.A).addr = (yyvsp[(1) - (1)].A).addr;}
    break;

  case 37:
#line 101 "CC_INNOV_YACC.y"
    {(yyval.A).addr = code_concatenate(1,code_concatenate(3,(yyvsp[(1) - (3)].A).addr," * ",(yyvsp[(3) - (3)].A).addr,";")); }
    break;

  case 38:
#line 102 "CC_INNOV_YACC.y"
    {(yyval.A).addr = code_concatenate(1,code_concatenate(3,(yyvsp[(1) - (3)].A).addr," / ",(yyvsp[(3) - (3)].A).addr,";")); }
    break;

  case 39:
#line 103 "CC_INNOV_YACC.y"
    {(yyval.A).addr = (yyvsp[(1) - (1)].A).addr;}
    break;

  case 40:
#line 107 "CC_INNOV_YACC.y"
    {(yyval.A).addr = gen_addr((yyvsp[(1) - (1)].IdName)); (yyval.A).code = code_concatenate(1," ");}
    break;

  case 41:
#line 108 "CC_INNOV_YACC.y"
    {(yyval.A).addr = gen_addr((yyvsp[(1) - (1)].IdName)); (yyval.A).code = code_concatenate(1," ");;}
    break;

  case 42:
#line 109 "CC_INNOV_YACC.y"
    {(yyval.A)=(yyvsp[(2) - (3)].A);}
    break;

  case 43:
#line 115 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 44:
#line 116 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 45:
#line 117 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 46:
#line 118 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 47:
#line 119 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 48:
#line 120 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 49:
#line 123 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 50:
#line 124 "CC_INNOV_YACC.y"
    {(yyval.IdName)=(yyvsp[(1) - (1)].IdName);}
    break;

  case 51:
#line 128 "CC_INNOV_YACC.y"
    { (yyval.A).specifier=get_specifier((yyvsp[(1) - (1)].dataType));(yyval.A).code=code_concatenate(1,(yyval.A).specifier);}
    break;

  case 52:
#line 129 "CC_INNOV_YACC.y"
    { (yyval.A).specifier=get_specifier((yyvsp[(3) - (3)].dataType));(yyval.A).code=code_concatenate(3,(yyvsp[(1) - (3)].A).code,",",(yyval.A).specifier);}
    break;

  case 53:
#line 132 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(1,(yyvsp[(1) - (1)].IdName));}
    break;

  case 54:
#line 133 "CC_INNOV_YACC.y"
    {(yyval.A).code=code_concatenate(3,(yyvsp[(1) - (3)].A).code,",",(yyvsp[(3) - (3)].IdName));}
    break;

  case 55:
#line 137 "CC_INNOV_YACC.y"
    {(yyval.dataType) = (yyvsp[(1) - (1)].dataType);}
    break;

  case 56:
#line 138 "CC_INNOV_YACC.y"
    {(yyval.dataType) = (yyvsp[(1) - (1)].dataType);}
    break;

  case 57:
#line 139 "CC_INNOV_YACC.y"
    {(yyval.dataType) = (yyvsp[(1) - (1)].dataType);}
    break;

  case 58:
#line 140 "CC_INNOV_YACC.y"
    {(yyval.dataType) = (yyvsp[(1) - (1)].dataType);}
    break;

  case 59:
#line 141 "CC_INNOV_YACC.y"
    {(yyval.dataType) = (yyvsp[(1) - (1)].dataType);}
    break;


/* Line 1267 of yacc.c.  */
#line 1822 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 145 "CC_INNOV_YACC.y"


int yywrap()
{
  return 1;
}
void yyerror(const char* arg)
{
 printf("%s\n",arg);
}


char* gen_addr(char* string)
{
 char* addr = (char*)malloc(sizeof(string));
 strcpy(addr, string);
 return addr;
}

char* code_concatenate(int arg_count,...)
{
 int i;
 va_list ap;
 va_start(ap, arg_count);
 char* temp = malloc(1000);
 for (i = 1; i <= arg_count; i++)
    {  
      char* a = va_arg(ap,char*);
      temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
      strcat(temp,a);
     }
     return temp;    
}

char* get_specifier(char *type){
 char* data;
 if(strcmp(type,"int")==0|| strcmp(type,"integer")==0)
  data="%d";
 else if(strcmp(type,"float")==0)
  data="%f";
 else if(strcmp(type,"char")==0 || strcmp(type,"character")==0)
  data="%c";
 else if (strcmp(type,"double")==0)
  data="%f";
 else if(strcmp(type,"long")==0)
  data="%ld";
 return data;
}

int main()
{
 extern FILE *yyin;
 yyin=fopen("input.txt","r");
 if(!yyparse())
 {
  printf("\n");
 
 }
 fclose(yyin);
 return 0;
}
