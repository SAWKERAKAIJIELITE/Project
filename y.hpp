/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_HPP_INCLUDED
# define YY_YY_Y_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "index.y" /* yacc.c:1909  */

    #include <iostream>
    #include <string>
    #include <unistd.h>
    #include "python_ast_node.hpp"

#line 51 "y.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AWAIT = 258,
    ELSE = 259,
    IMPORT = 260,
    PASS = 261,
    NONE = 262,
    BREAK = 263,
    EXCEPT = 264,
    CLASS = 265,
    FALSEE = 266,
    IN = 267,
    RAISE = 268,
    TRUEE = 269,
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
    END = 296,
    NUMBER = 297,
    STRING = 298,
    RETURN = 299,
    SINGLESTRING = 300,
    ZERO = 301,
    EQUAL = 302,
    NOTEQUAL = 303,
    GTE = 304,
    SME = 305,
    INTDIVIDE = 306,
    POWER = 307,
    ASSIGN = 308,
    ASSIGNADD = 309,
    ASSIGNMINUS = 310,
    ASSIGNMUL = 311,
    ASSIGNDIVIDE = 312,
    ASSIGNINTDIVIDE = 313,
    ASSIGNPOWER = 314,
    ASSIGNMODULUS = 315,
    ASSIGNARRMUL = 316,
    ASSIGNANDBIT = 317,
    ASSIGNRIGHTSHIFT = 318,
    ASSIGNLEFTSHIFT = 319,
    ASSIGNXORBIT = 320,
    ASSIGNORBIT = 321,
    RIGHTSHIFT = 322,
    LEFTSHIFT = 323,
    INDENT = 324,
    DEDENT = 325,
    NEWLINE = 326,
    NOTIN = 327,
    ISNOT = 328,
    UMINUS = 329,
    UADD = 330
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 9 "index.y" /* yacc.c:1909  */

    AstNode* astNode;
    IdentifierNode* idNode;
    int d;

#line 145 "y.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_HPP_INCLUDED  */
