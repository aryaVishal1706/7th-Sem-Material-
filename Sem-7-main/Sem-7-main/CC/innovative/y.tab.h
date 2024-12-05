/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "CC_INNOV_YACC.y"
{char* dataType; char* IdName; struct attributes{
 char* code;
 char* addr;
 char* specifier;
}A;}
/* Line 1529 of yacc.c.  */
#line 151 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

