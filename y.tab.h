/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AWAIT = 258,
     ELSE = 259,
     IMPORT = 260,
     PASS = 261,
     NONE = 262,
     BREAK = 263,
     EXCEPT = 264,
     CLASS = 265,
     FALSE = 266,
     IN = 267,
     RAISE = 268,
     TRUE = 269,
     FINALLY = 270,
     IS = 271,
     AND = 272,
     CONTINUE = 273,
     MATCH = 274,
     NOT = 275,
     WITH = 276,
     ASYNC = 277,
     ELIF = 278,
     IF = 279,
     OR = 280,
     YIELD = 281,
     LAMBDA = 282,
     TRY = 283,
     AS = 284,
     FROM = 285,
     NONLOCAL = 286,
     WHILE = 287,
     ASSERT = 288,
     DEL = 289,
     GLOBAL = 290,
     FOR = 291,
     DEF = 292,
     CASE = 293,
     IDENTIFIER = 294,
     FN = 295,
     NUMBER = 296,
     STRING = 297,
     RETURN = 298,
     SINGLESTRING = 299,
     ZERO = 300,
     EQUAL = 301,
     NOTEQUAL = 302,
     GTE = 303,
     SME = 304,
     INTDIVIDE = 305,
     POWER = 306,
     ASSIGN = 307,
     ASSIGNADD = 308,
     ASSIGNMINUS = 309,
     ASSIGNMUL = 310,
     ASSIGNDIVIDE = 311,
     ASSIGNINTDIVIDE = 312,
     ASSIGNPOWER = 313,
     ASSIGNMODULUS = 314,
     ASSIGNARRMUL = 315,
     ASSIGNANDBIT = 316,
     ASSIGNRIGHTSHIFT = 317,
     ASSIGNLEFTSHIFT = 318,
     ASSIGNXORBIT = 319,
     ASSIGNORBIT = 320,
     RIGHTSHIFT = 321,
     LEFTSHIFT = 322,
     INDENT = 323,
     DEDENT = 324,
     NEWLINE = 325
   };
#endif
/* Tokens.  */
#define AWAIT 258
#define ELSE 259
#define IMPORT 260
#define PASS 261
#define NONE 262
#define BREAK 263
#define EXCEPT 264
#define CLASS 265
#define FALSE 266
#define IN 267
#define RAISE 268
#define TRUE 269
#define FINALLY 270
#define IS 271
#define AND 272
#define CONTINUE 273
#define MATCH 274
#define NOT 275
#define WITH 276
#define ASYNC 277
#define ELIF 278
#define IF 279
#define OR 280
#define YIELD 281
#define LAMBDA 282
#define TRY 283
#define AS 284
#define FROM 285
#define NONLOCAL 286
#define WHILE 287
#define ASSERT 288
#define DEL 289
#define GLOBAL 290
#define FOR 291
#define DEF 292
#define CASE 293
#define IDENTIFIER 294
#define FN 295
#define NUMBER 296
#define STRING 297
#define RETURN 298
#define SINGLESTRING 299
#define ZERO 300
#define EQUAL 301
#define NOTEQUAL 302
#define GTE 303
#define SME 304
#define INTDIVIDE 305
#define POWER 306
#define ASSIGN 307
#define ASSIGNADD 308
#define ASSIGNMINUS 309
#define ASSIGNMUL 310
#define ASSIGNDIVIDE 311
#define ASSIGNINTDIVIDE 312
#define ASSIGNPOWER 313
#define ASSIGNMODULUS 314
#define ASSIGNARRMUL 315
#define ASSIGNANDBIT 316
#define ASSIGNRIGHTSHIFT 317
#define ASSIGNLEFTSHIFT 318
#define ASSIGNXORBIT 319
#define ASSIGNORBIT 320
#define RIGHTSHIFT 321
#define LEFTSHIFT 322
#define INDENT 323
#define DEDENT 324
#define NEWLINE 325




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



