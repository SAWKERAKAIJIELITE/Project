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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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




/* Copy the first part of user declarations.  */
#line 1 "index.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 246 "y.tab.c"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  161
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1533

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  79
/* YYNRULES -- Number of rules. */
#define YYNRULES  299
/* YYNRULES -- Number of states. */
#define YYNSTATES  485

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    76,    88,     2,
      84,    80,    73,    71,    83,    72,    85,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,     2,
      86,    79,    87,     2,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    82,     2,    81,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,    77,    92,    90,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    10,    12,    14,    16,
      18,    20,    22,    24,    26,    28,    30,    32,    34,    36,
      41,    44,    47,    50,    54,    58,    62,    67,    72,    75,
      78,    81,    85,    89,    93,    97,   101,   105,   107,   109,
     111,   113,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   134,   136,   138,   143,   146,   149,   152,   155,   159,
     163,   165,   167,   170,   172,   175,   179,   182,   184,   186,
     188,   190,   192,   194,   196,   199,   202,   204,   206,   210,
     212,   216,   218,   222,   224,   228,   230,   232,   234,   237,
     240,   243,   245,   247,   251,   255,   259,   263,   267,   269,
     273,   277,   280,   283,   286,   288,   291,   294,   296,   299,
     301,   303,   306,   308,   313,   318,   323,   326,   327,   331,
     333,   335,   337,   339,   342,   346,   350,   355,   361,   366,
     370,   375,   379,   382,   389,   395,   400,   402,   407,   411,
     414,   416,   417,   421,   429,   436,   441,   445,   452,   458,
     462,   465,   469,   472,   474,   478,   480,   482,   484,   486,
     488,   490,   494,   498,   502,   506,   510,   514,   517,   521,
     525,   530,   534,   537,   540,   543,   545,   548,   551,   555,
     558,   562,   567,   569,   572,   576,   583,   590,   597,   605,
     613,   619,   625,   631,   638,   645,   651,   657,   663,   670,
     677,   682,   687,   692,   698,   704,   706,   708,   712,   716,
     718,   720,   721,   725,   727,   731,   734,   737,   738,   742,
     744,   746,   752,   756,   761,   763,   766,   769,   773,   776,
     780,   783,   787,   792,   796,   800,   805,   809,   812,   816,
     819,   822,   826,   828,   832,   835,   840,   844,   849,   853,
     858,   862,   864,   868,   870,   874,   876,   879,   881,   883,
     887,   890,   894,   898,   902,   907,   912,   916,   920,   925,
     930,   934,   939,   944,   948,   950,   954,   956,   958,   961,
     964,   967,   970,   976,   980,   988,   994,  1005,  1015,  1024,
    1032,  1037,  1038,  1042,  1048,  1051,  1052,  1056,  1057,  1060
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      94,     0,    -1,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,   147,    -1,   100,    -1,     6,    -1,   104,    -1,
     102,    -1,   144,    -1,   103,    -1,     8,    -1,    18,    -1,
     167,    -1,   166,    -1,   165,    -1,    33,   146,    83,   146,
      -1,    33,   146,    -1,    99,   147,    -1,    99,   144,    -1,
      99,   154,    79,    -1,    99,    39,    79,    -1,    99,   122,
      79,    -1,    99,    82,    81,    79,    -1,    99,    84,    80,
      79,    -1,   154,    79,    -1,    39,    79,    -1,   122,    79,
      -1,    84,    80,    79,    -1,    82,    81,    79,    -1,   122,
     101,   150,    -1,    39,   101,   150,    -1,   122,   101,   144,
      -1,    39,   101,   144,    -1,    53,    -1,    54,    -1,    55,
      -1,    60,    -1,    56,    -1,    57,    -1,    59,    -1,    58,
      -1,    63,    -1,    62,    -1,    61,    -1,    64,    -1,    65,
      -1,    43,   150,    -1,    43,    -1,    13,    -1,    13,   146,
      30,   146,    -1,    13,   146,    -1,    34,   154,    -1,    34,
      39,    -1,    34,   122,    -1,    34,    84,    80,    -1,    34,
      82,    81,    -1,    85,    -1,   169,    -1,    85,   105,    -1,
     111,    -1,   111,   107,    -1,   107,   108,   111,    -1,   108,
     111,    -1,    86,    -1,    87,    -1,    46,    -1,    48,    -1,
      49,    -1,    47,    -1,    16,    -1,    16,    20,    -1,    20,
      12,    -1,    12,    -1,   112,    -1,   109,    88,   112,    -1,
     109,    -1,   110,    89,   109,    -1,   110,    -1,   111,    77,
     110,    -1,   116,    -1,   112,   113,   116,    -1,    67,    -1,
      66,    -1,   118,    -1,    72,   114,    -1,    71,   114,    -1,
      90,   114,    -1,    39,    -1,   114,    -1,   115,    73,   114,
      -1,   115,    74,   115,    -1,   115,    50,   114,    -1,   115,
      75,   114,    -1,   115,    76,   114,    -1,   115,    -1,   116,
      71,   115,    -1,   116,    72,   115,    -1,     3,   121,    -1,
       3,   122,    -1,     3,    39,    -1,   119,    -1,   119,   120,
      -1,    39,   120,    -1,   122,    -1,   122,   120,    -1,   117,
      -1,   121,    -1,    51,   114,    -1,   164,    -1,   121,    82,
     123,    81,    -1,   122,    82,   123,    81,    -1,    39,    82,
     123,    81,    -1,   125,   124,    -1,    -1,    83,   125,   124,
      -1,    83,    -1,   146,    -1,   126,    -1,    78,    -1,    78,
      78,    -1,    78,    78,   146,    -1,    78,   146,    78,    -1,
      78,   146,    78,   146,    -1,   146,    78,   146,    78,   146,
      -1,   146,    78,   146,    78,    -1,   146,    78,   146,    -1,
     146,    78,    78,   146,    -1,   146,    78,    78,    -1,   146,
      78,    -1,   131,   129,    83,    75,    83,   128,    -1,   131,
     129,    83,    75,    83,    -1,   131,   129,    83,    75,    -1,
     128,    -1,   131,   129,    83,   130,    -1,   131,   129,    83,
      -1,   131,   129,    -1,   130,    -1,    -1,    83,   131,   129,
      -1,    73,   163,   129,    83,    51,   163,    83,    -1,    73,
     163,   129,    83,    51,   163,    -1,    73,   163,   129,    83,
      -1,    73,   163,   129,    -1,    73,   129,    83,    51,   163,
      83,    -1,    73,   129,    83,    51,   163,    -1,    73,   129,
      83,    -1,    73,   129,    -1,    51,   163,    83,    -1,    51,
     163,    -1,   163,    -1,   163,    79,   146,    -1,   133,    -1,
     134,    -1,   136,    -1,   135,    -1,   137,    -1,   138,    -1,
      84,   147,    80,    -1,    84,   146,    80,    -1,    82,   139,
      81,    -1,    82,   140,    81,    -1,    91,   139,    92,    -1,
      91,   140,    92,    -1,    91,    92,    -1,    91,   141,    92,
      -1,    91,   143,    92,    -1,    84,   146,   145,    80,    -1,
      84,   144,    80,    -1,   147,   148,    -1,   162,   145,    -1,
     146,   145,    -1,   149,    -1,   149,    83,    -1,   149,   142,
      -1,   149,   142,    83,    -1,    83,   149,    -1,    83,   149,
     142,    -1,   146,    78,   146,   145,    -1,    26,    -1,    26,
     150,    -1,    26,    30,   146,    -1,    22,    36,   154,    12,
     156,   159,    -1,    22,    36,    39,    12,   156,   159,    -1,
      22,    36,   122,    12,   156,   159,    -1,    22,    36,    82,
      81,    12,   156,   159,    -1,    22,    36,    84,    80,    12,
     156,   159,    -1,    36,   154,    12,   156,   159,    -1,    36,
      39,    12,   156,   159,    -1,    36,   122,    12,   156,   159,
      -1,    36,    84,    80,    12,   156,   159,    -1,    36,    82,
      81,    12,   156,   159,    -1,    22,    36,   154,    12,   156,
      -1,    22,    36,    39,    12,   156,    -1,    22,    36,   122,
      12,   156,    -1,    22,    36,    82,    81,    12,   156,    -1,
      22,    36,    84,    80,    12,   156,    -1,    36,   154,    12,
     156,    -1,    36,    39,    12,   156,    -1,    36,   122,    12,
     156,    -1,    36,    84,    80,    12,   156,    -1,    36,    82,
      81,    12,   156,    -1,   152,    -1,   153,    -1,   147,   162,
      83,    -1,   147,   146,    83,    -1,   162,    -1,   146,    -1,
      -1,    83,   147,   148,    -1,    83,    -1,   146,    78,   146,
      -1,    51,   111,    -1,   146,   151,    -1,    -1,    83,   146,
     151,    -1,    83,    -1,   156,    -1,   156,    24,   156,     4,
     146,    -1,    27,    78,   146,    -1,    27,   127,    78,   146,
      -1,   161,    -1,   161,    83,    -1,   161,   155,    -1,   161,
     155,    83,    -1,   122,   155,    -1,   122,   155,    83,    -1,
     122,    83,    -1,    82,    81,   155,    -1,    82,    81,   155,
      83,    -1,    82,    81,    83,    -1,    84,    80,   155,    -1,
      84,    80,   155,    83,    -1,    84,    80,    83,    -1,    39,
     155,    -1,    39,   155,    83,    -1,    39,    83,    -1,    83,
     161,    -1,   155,    83,   161,    -1,    39,    -1,   155,    83,
     122,    -1,    83,   122,    -1,   155,    83,    82,    81,    -1,
      83,    82,    81,    -1,   155,    83,    84,    80,    -1,    83,
      84,    80,    -1,   155,    83,    73,   161,    -1,    83,    73,
     161,    -1,   157,    -1,   156,    25,   157,    -1,   158,    -1,
     157,    17,   158,    -1,   106,    -1,    20,   158,    -1,   145,
      -1,   160,    -1,    24,   156,   159,    -1,    24,   156,    -1,
      82,   154,    81,    -1,    82,    39,    81,    -1,    82,   122,
      81,    -1,    82,    82,    81,    81,    -1,    82,    84,    80,
      81,    -1,    84,   154,    80,    -1,    84,   122,    80,    -1,
      84,    84,    80,    80,    -1,    84,    82,    81,    80,    -1,
      84,    39,    80,    -1,    84,    73,   161,    80,    -1,    82,
      73,   161,    81,    -1,    39,    52,   146,    -1,    39,    -1,
      39,    78,   146,    -1,    41,    -1,   132,    -1,    82,    81,
      -1,    84,    80,    -1,    31,    39,    -1,    35,    39,    -1,
       5,   169,    29,    39,   168,    -1,     5,   169,   168,    -1,
      30,   105,     5,    39,    29,    39,   171,    -1,    30,   105,
       5,    39,   171,    -1,    30,   105,     5,    84,    39,    29,
      39,   171,    83,    80,    -1,    30,   105,     5,    84,    39,
      29,    39,   171,    80,    -1,    30,   105,     5,    84,    39,
     171,    83,    80,    -1,    30,   105,     5,    84,    39,   171,
      80,    -1,    30,   105,     5,    73,    -1,    -1,    83,   169,
     168,    -1,    83,   169,    29,    39,   168,    -1,   170,    39,
      -1,    -1,   170,    39,    85,    -1,    -1,    83,    39,    -1,
      83,    39,    29,    39,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    41,    41,    42,    45,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   170,
     170,   172,   173,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   186,   187,   188,   189,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   192,   192,   192,   192,
     194,   194,   196,   196,   196,   198,   198,   198,   198,   198,
     200,   200,   200,   202,   202,   204,   204,   206,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   208,   208,   210,
     210,   212,   212,   214,   214,   216,   216,   218,   218,   218,
     218,   218,   220,   220,   220,   220,   220,   220,   222,   222,
     222,   224,   224,   224,   226,   226,   226,   226,   226,   228,
     228,   230,   232,   236,   237,   238,   241,   243,   243,   243,
     245,   245,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   260,   261,   262,   263,   265,   266,   267,
     268,   270,   270,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   283,   283,   286,   286,   286,   286,   286,
     286,   288,   288,   290,   290,   292,   292,   294,   294,   294,
     296,   298,   301,   303,   303,   305,   305,   305,   305,   307,
     307,   309,   311,   311,   311,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   335,   336,   340,   341,   342,
     343,   345,   345,   345,   347,   347,   349,   351,   351,   351,
     353,   353,   355,   355,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     375,   376,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   389,   389,   391,   391,   393,   393,   395,   395,   397,
     397,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   414,   416,   416,   418,   418,   418,   418,
     420,   423,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   438,   438,   438,   440,   442,   442,   444,   446,   447
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAIT", "ELSE", "IMPORT", "PASS",
  "NONE", "BREAK", "EXCEPT", "CLASS", "FALSE", "IN", "RAISE", "TRUE",
  "FINALLY", "IS", "AND", "CONTINUE", "MATCH", "NOT", "WITH", "ASYNC",
  "ELIF", "IF", "OR", "YIELD", "LAMBDA", "TRY", "AS", "FROM", "NONLOCAL",
  "WHILE", "ASSERT", "DEL", "GLOBAL", "FOR", "DEF", "CASE", "IDENTIFIER",
  "FN", "NUMBER", "STRING", "RETURN", "SINGLESTRING", "ZERO", "EQUAL",
  "NOTEQUAL", "GTE", "SME", "INTDIVIDE", "POWER", "ASSIGN", "ASSIGNADD",
  "ASSIGNMINUS", "ASSIGNMUL", "ASSIGNDIVIDE", "ASSIGNINTDIVIDE",
  "ASSIGNPOWER", "ASSIGNMODULUS", "ASSIGNARRMUL", "ASSIGNANDBIT",
  "ASSIGNRIGHTSHIFT", "ASSIGNLEFTSHIFT", "ASSIGNXORBIT", "ASSIGNORBIT",
  "RIGHTSHIFT", "LEFTSHIFT", "INDENT", "DEDENT", "NEWLINE", "'+'", "'-'",
  "'*'", "'@'", "'/'", "'%'", "'|'", "':'", "'='", "')'", "']'", "'['",
  "','", "'('", "'.'", "'<'", "'>'", "'&'", "'^'", "'~'", "'{'", "'}'",
  "$accept", "program", "statements", "simple_stmt", "assert_stmt",
  "assignment_stmt", "mytargetlist", "augmented_assignment_stmt", "augop",
  "return_stmt", "raise_stmt", "del_stmt", "relative_module", "comparison",
  "mycomparison", "comp_operator", "and_expr", "xor_expr", "or_expr",
  "shift_expr", "shifter", "u_expr", "m_expr", "a_expr", "await_expr",
  "power", "firstpower", "mypower", "primary", "slicing", "slice_list",
  "mysliceitem", "slice_item", "proper_slice", "parameter_list",
  "parameter_list_no_posonly", "mydefparameter", "parameter_list_starargs",
  "defparameter", "enclosure", "parenth_form", "list_display",
  "set_display", "dict_display", "generator_expression", "yield_atom",
  "starred_list", "comprehension", "dict_item_list", "mydictitem",
  "dict_comprehension", "yield_expression", "comp_for", "expression",
  "starred_item", "mystarreditem", "dict_item", "expression_list",
  "myexpression", "conditional_expression", "lambda_expr", "target_list",
  "mytarget", "or_test", "and_test", "not_test", "comp_iter", "comp_if",
  "target", "assignment_expression", "parameter", "atom", "nonlocal_stmt",
  "global_stmt", "import_stmt", "mymodule", "module", "identifiermodule",
  "mymoduleidentifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    43,    45,    42,    64,    47,    37,   124,    58,    61,
      41,    93,    91,    44,    40,    46,    60,    62,    38,    94,
     126,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    93,    94,    94,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   103,   103,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   114,
     114,   114,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   117,   117,   117,   118,   118,   118,   118,   118,   119,
     119,   120,   121,   122,   122,   122,   123,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   127,   127,   127,   127,   128,   128,   128,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     137,   138,   139,   140,   140,   141,   141,   141,   141,   142,
     142,   143,   144,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   147,
     147,   148,   148,   148,   149,   149,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   162,   163,   163,   164,   164,   164,   164,
     165,   166,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   169,   170,   170,   171,   171,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     2,     2,     3,     3,     3,     4,     4,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     4,     2,     2,     2,     2,     3,     3,
       1,     1,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     2,     2,
       2,     1,     1,     3,     3,     3,     3,     3,     1,     3,
       3,     2,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     2,     1,     4,     4,     4,     2,     0,     3,     1,
       1,     1,     1,     2,     3,     3,     4,     5,     4,     3,
       4,     3,     2,     6,     5,     4,     1,     4,     3,     2,
       1,     0,     3,     7,     6,     4,     3,     6,     5,     3,
       2,     3,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       4,     3,     2,     2,     2,     1,     2,     2,     3,     2,
       3,     4,     1,     2,     3,     6,     6,     6,     7,     7,
       5,     5,     5,     6,     6,     5,     5,     5,     6,     6,
       4,     4,     4,     5,     5,     1,     1,     3,     3,     1,
       1,     0,     3,     1,     3,     2,     2,     0,     3,     1,
       1,     5,     3,     4,     1,     2,     2,     3,     2,     3,
       2,     3,     4,     3,     3,     4,     3,     2,     3,     2,
       2,     3,     1,     3,     2,     4,     3,     4,     3,     4,
       3,     1,     3,     1,     3,     1,     2,     1,     1,     3,
       2,     3,     3,     3,     4,     4,     3,     3,     4,     4,
       3,     4,     4,     3,     1,     3,     1,     1,     2,     2,
       2,     2,     5,     3,     7,     5,    10,     9,     8,     7,
       4,     0,     3,     5,     2,     0,     3,     0,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       2,     0,   295,     9,    14,    52,    15,     0,   182,     0,
     295,     0,     0,     0,     0,    91,   276,    51,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     6,     0,
       8,    11,    13,    10,   255,    79,    81,    63,    77,    92,
      98,    83,   109,    87,   104,   110,   107,   277,   155,   156,
     158,   157,   159,   160,    12,   210,     7,   205,   206,     0,
     220,   251,   253,   224,   209,   112,    18,    17,    16,   103,
       0,     0,   101,   102,   291,     0,    91,   107,    54,   256,
       0,   217,   183,   274,     0,   141,     0,     0,   136,   140,
     141,   153,    60,     0,    61,   280,    20,    56,     0,     0,
       0,    57,    55,   281,   242,     0,     0,    37,    38,    39,
      41,    42,    44,    43,    40,    47,    46,    45,    48,    49,
      29,     0,   239,     0,   106,   237,    50,    89,    88,    91,
       0,   278,     0,     0,   107,     0,     0,   210,   211,     0,
     209,    91,     0,   279,     0,     0,   107,     0,   210,     0,
       0,    90,    91,     0,   167,     0,     0,     0,     0,   210,
     175,     1,    91,     0,     0,   107,    22,    21,     0,     0,
       0,    76,    73,     0,    69,    72,    70,    71,     0,    67,
      68,    64,     0,    86,    85,     0,     0,     0,     0,     0,
       0,     0,     0,   105,     0,    30,     0,   230,     0,   108,
     228,     0,     0,    28,     0,     0,     0,   225,   226,   278,
     279,     0,   295,   283,   294,     0,   184,   219,   216,     0,
     152,     0,   150,   141,   222,     0,   139,     0,    62,     0,
       0,    59,    58,   111,   273,   122,     0,   117,   121,   120,
       0,     0,     0,     0,   244,   240,    36,    34,   238,   262,
       0,     0,     0,    32,   233,   231,   278,   279,   263,   163,
     164,     0,     0,   174,   213,   172,   261,   173,   270,     0,
      31,   236,   234,   278,   279,   267,   171,   162,     0,   161,
     266,   215,   165,   166,   168,   169,     0,   176,   177,    24,
     278,   279,    25,    23,    78,    80,    74,    75,    82,     0,
      66,    84,    95,    93,    94,    96,    97,    99,   100,     0,
       0,    35,    33,   229,   208,   207,     0,   252,   254,   227,
     291,   291,   296,    53,   217,   275,   151,   141,   149,   146,
     223,   138,   154,   297,   290,     0,    19,   123,     0,   115,
     119,   116,   132,   250,   246,   248,     0,     0,     0,   243,
     241,     0,     0,     0,     0,   272,   232,   264,   265,     0,
       0,     0,     0,     0,     0,   211,   271,   235,   269,   268,
     170,   214,     0,   179,   178,    26,    27,    65,   113,   114,
       0,   282,     0,   292,   218,   142,     0,   145,   135,   137,
       0,     0,   285,   297,   124,   125,   117,   131,   129,   249,
     245,   247,     0,     0,     0,     0,     0,     0,   278,   279,
       0,     0,   212,   181,     0,     0,   180,   221,   291,   148,
       0,   134,   297,   298,     0,     0,   126,   118,   130,   128,
       0,   278,   279,     0,     0,   201,     0,     0,   202,   200,
     214,   293,   147,   144,   133,   141,   284,     0,   297,   289,
       0,   127,   196,     0,     0,   197,   195,     0,   257,   191,
     258,   204,   203,   192,   190,   143,   139,   299,     0,   288,
     186,   198,   199,   187,   185,   260,   194,   193,   138,   287,
       0,   188,   189,   259,   286
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    29,    30,   123,    31,
      32,    33,    93,    34,   181,   182,    35,    36,    37,    38,
     185,    39,    40,    41,    42,    43,    44,   124,    45,    77,
     236,   341,   237,   238,    87,    88,   222,    89,    90,    47,
      48,    49,    50,    51,    52,    53,   135,   136,   157,   288,
     158,   147,   458,   137,   138,   265,   373,    82,   218,    57,
      58,   139,   125,    60,    61,    62,   459,   460,    63,    64,
      91,    65,    66,    67,    68,   213,    94,    75,   392
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -316
static const short int yypact[] =
{
     554,   448,  -316,  -316,  -316,  1316,  -316,  1356,  1078,   372,
     -40,    24,  1316,   449,    53,  1419,  -316,  1316,  1378,  1378,
     788,   551,  1378,   474,    57,  -316,  -316,  -316,  -316,  1103,
    -316,  -316,  -316,  -316,  -316,    27,    36,    18,    16,  -316,
     468,  -316,  -316,  -316,    47,    79,  1450,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  1341,  -316,  -316,    56,
      85,   180,  -316,   -15,  -316,  -316,  -316,  -316,  -316,  -316,
    1118,   791,    79,   130,    -4,   162,    47,   111,   188,  -316,
    1316,   141,  -316,   148,   197,   102,  1316,   164,  -316,  -316,
     161,   175,     9,   268,  -316,  -316,   205,   177,   863,   588,
      79,   320,  -316,  -316,  -316,  1378,  1316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  1143,   150,  1177,  -316,   210,  -316,  -316,  -316,   119,
      -7,   116,   885,   591,   218,   216,   228,   154,  1202,   237,
     154,   117,    -7,   240,   889,   663,   100,   263,    10,  1217,
     264,  -316,   135,  1378,  -316,   259,   260,   275,   278,    33,
     277,  -316,   170,   911,   666,   302,  -316,  1341,   293,  1378,
    1378,  -316,   327,   364,  -316,  -316,  -316,  -316,  1378,  -316,
    -316,  1406,  1378,  -316,  -316,  1378,  1378,  1378,  1378,  1378,
    1378,  1378,  1378,  -316,  1143,  -316,  1143,   150,  1177,  -316,
     300,   303,   305,  -316,  1356,  1356,  1356,   150,   309,  -316,
    -316,   360,  -316,  -316,   324,  1316,  -316,  1316,  -316,  1316,
     329,   197,   330,   161,  -316,  1316,   333,  1316,  -316,    73,
    1316,   325,   434,  -316,  -316,  1242,   336,   338,  -316,   344,
     350,    -7,   969,   688,   130,  -316,  -316,  -316,   192,  -316,
     207,   402,   355,  -316,   150,   354,   229,   243,  -316,  -316,
    -316,   404,   615,  -316,  1341,  -316,  -316,  -316,  -316,   362,
    -316,   150,   363,   223,   255,  -316,  -316,  -316,   369,  -316,
    -316,   374,  -316,  -316,  -316,  -316,  1316,  1276,   377,  -316,
     292,   315,  -316,  -316,    16,    27,  -316,  -316,    36,  1378,
     374,  -316,  -316,  -316,  -316,  -316,  -316,   468,   468,   386,
     389,  -316,  -316,   192,  -316,  -316,    68,   180,  -316,   192,
     395,    -2,  -316,  -316,   141,  -316,  -316,   161,   421,   408,
    -316,    99,  -316,    41,  -316,   446,  -316,  1316,   418,  -316,
    1143,  -316,  1301,  -316,   415,   420,    -7,   984,   691,   130,
    -316,   246,   352,   233,   379,  -316,   192,  -316,  -316,   683,
      14,  1006,   763,    19,   492,  1202,  -316,   192,  -316,  -316,
    -316,   154,   429,   425,  -316,  -316,  -316,   374,  -316,  -316,
    1316,  -316,   470,  -316,  -316,  -316,   197,   461,   431,  -316,
     481,   482,  -316,    60,  -316,  1316,   338,  1316,   444,  -316,
     415,   420,    35,  1043,   766,    48,   512,  1356,    39,    49,
    1356,  1356,  -316,  -316,  1316,  1276,  -316,  -316,   395,   451,
     197,    11,   452,   498,   490,   198,  -316,  -316,  -316,  1316,
    1356,    61,    64,  1356,  1356,   403,  1356,  1356,   403,   403,
    -316,  -316,  -316,   453,  -316,   161,  -316,   499,   452,  -316,
     467,  -316,   403,  1356,  1356,   403,   403,  1356,  -316,  -316,
    -316,   403,   403,  -316,  -316,  -316,   465,  -316,   212,  -316,
    -316,   403,   403,  -316,  -316,   403,  -316,  -316,   -14,  -316,
     469,  -316,  -316,  -316,  -316
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,   504,  -316,
    -316,  -316,   459,  -316,  -316,   371,   383,   385,  -140,   399,
    -316,    21,   142,   370,  -316,  -316,  -316,     8,   139,   107,
     -19,   173,   230,  -316,  -316,   152,   -89,  -315,  -219,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,   552,   553,  -316,   213,
    -316,     6,  -126,     0,    20,   231,   575,   -10,   276,  -316,
    -316,    15,   174,    46,   394,    -3,   560,  -316,   125,   158,
     -75,  -316,  -316,  -316,  -316,  -302,     1,  -316,  -256
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -296
static const short int yytable[] =
{
      55,   226,   327,    74,    79,    78,    54,   126,    81,   220,
     223,   263,    96,   281,   267,    59,   389,    81,   381,   383,
      56,   148,   278,   159,   104,   211,   407,   382,   102,    55,
     171,   410,   261,   263,   172,   166,   150,    84,   173,   127,
     128,   149,   300,   151,   168,    92,   262,   430,  -295,   167,
      83,   436,   193,   104,   199,   261,   201,   161,   104,    85,
     433,   437,    84,    95,   174,   175,   176,   177,   207,   262,
     390,   148,   380,   453,   104,   250,   454,   251,   104,   212,
     216,   212,   183,   184,    85,   199,   224,   104,   104,   424,
     277,   149,   103,   205,    92,   178,   121,   122,   105,   148,
     104,   196,   197,   104,   179,   180,   234,    46,    73,   204,
     205,   286,   333,   247,   150,   169,   441,   121,   122,   149,
     101,   239,   254,    81,   391,   170,   233,   134,   146,   246,
     196,   197,   271,   148,   329,   203,   165,   425,   201,   104,
      72,    83,   199,   391,   254,   148,   334,   271,   150,   201,
      84,   105,   100,   149,   199,   104,   104,   335,   104,   377,
     150,   194,   105,   389,   148,   149,   446,   201,   105,   106,
     105,   106,    85,   199,   388,   309,   261,   310,   140,   150,
     275,   140,   196,   197,   149,   221,   105,   106,   312,   240,
     262,    16,   468,   196,   239,   253,   239,   206,    81,   254,
     122,   214,   445,   318,   311,   134,   146,   302,   303,   104,
     305,   306,   196,   321,   202,   323,   104,   324,   215,   325,
     200,   105,   106,   241,   217,   330,   219,   332,   140,   244,
     336,   240,   242,    16,   243,   338,    83,   208,   385,   134,
     146,    23,   225,   148,   221,   413,   351,   245,    16,   289,
     316,   134,   146,   122,   227,   252,   140,   104,   150,   121,
     122,   100,   104,   149,    55,   346,   150,   269,   104,   105,
     134,   146,   104,   229,   347,   200,   348,   364,   449,   104,
     130,   450,   104,    23,   365,   104,   371,   372,   230,   132,
     140,   133,   479,   248,   104,   480,   202,   259,    23,   258,
     196,   197,   140,   368,   244,   255,   254,   202,   200,   260,
     357,   419,   254,   268,   244,   121,   122,   272,   266,   270,
     200,   140,   245,   271,   358,   202,   271,   249,   121,   122,
     304,   104,   245,   307,   308,   369,   100,   394,   271,   200,
     239,   104,   398,   276,   280,   443,   100,   296,   148,   134,
     146,   282,   283,   105,   104,   349,   466,   352,   354,   104,
     287,   244,   148,   150,   104,   201,   343,   284,   149,   363,
     285,   375,   293,   350,   406,   254,   297,   150,   244,   245,
     417,   292,   149,   313,   196,   197,   314,   100,   315,   100,
     100,   104,   319,   100,   376,   426,   245,   428,   271,   320,
     140,   100,   196,   197,   148,   255,   272,  -278,   254,   322,
     100,    83,   326,   328,   440,   372,   331,   339,   104,   150,
     349,   340,   342,    84,   149,   261,   349,   457,   205,   451,
     255,   272,   121,   258,   196,   197,   355,   356,   350,   262,
     359,   353,   366,    16,   350,    85,   367,   255,   272,   370,
      86,   178,   100,   435,   134,   146,   438,   439,   100,   275,
     374,   196,   197,   349,   255,   272,   405,   378,   134,   146,
     379,   399,   386,   104,   349,   142,   452,     1,   212,   455,
     456,   350,   461,   462,   144,   393,   145,    69,    97,    16,
      16,   387,   350,    23,     7,   100,   395,  -278,   100,   471,
     472,     9,  -279,   475,   411,   140,   100,   414,   415,   418,
     134,   146,   420,   152,   421,    16,  -279,   271,   186,   140,
     422,   423,   429,   202,   434,   153,   200,   447,   200,   448,
      70,    98,    71,    99,   442,   391,   465,   200,   467,    23,
      23,   187,   188,   189,   190,    18,    19,   469,   478,   484,
     198,   228,   299,   295,     1,   301,    70,     1,    71,     2,
       3,   140,     4,   298,    22,    23,   154,     5,   294,   427,
     396,     7,     6,   444,     7,   155,   156,     8,     9,   200,
       8,     9,   255,   272,    10,    11,   416,    12,    13,    14,
     141,     1,    16,    15,     1,    16,   412,    17,   160,   317,
     384,     0,     0,     0,     0,   255,   272,     0,     7,     0,
       0,     7,     0,     0,     8,     9,     0,     8,     9,     0,
       0,     0,    18,    19,   142,    18,    19,   141,     0,    16,
     141,   143,    16,   144,     0,   145,    20,     0,    21,     0,
       0,    22,    23,     0,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   360,     0,    16,     0,     0,    18,
      19,   142,    18,    19,   142,     0,     1,     0,   232,     1,
     144,   257,   145,   144,     0,   145,     0,     0,    22,    23,
       0,    22,    23,     7,     0,     0,     7,     0,     0,     8,
       9,     1,     8,     9,     1,     0,     0,   361,     0,   362,
       0,     0,   141,     0,    16,   141,    23,    16,     7,     0,
       0,     7,     0,     0,     8,     9,     0,     8,     9,     0,
       0,     0,   402,     0,    16,     0,     0,   141,     0,    16,
     141,     0,    16,     0,    18,    19,   142,    18,    19,   142,
       0,     0,     0,   274,     0,   144,   291,   145,   144,     0,
     145,     0,     0,    22,    23,     0,    22,    23,     0,    18,
      19,   142,    18,    19,   142,   403,     1,   404,   345,     1,
     144,   401,   145,   144,    23,   145,     0,     0,    22,    23,
       0,    22,    23,     7,     0,     0,     7,     0,     0,     8,
       9,     1,     8,     9,     1,     0,     0,     0,     0,     0,
       0,     0,   141,     0,    16,   141,     0,    16,     7,     0,
       0,     7,     0,     0,     0,     9,     0,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,   129,     0,    16,
     152,     0,    16,     0,    18,    19,   142,    18,    19,   142,
       0,     0,     0,   409,     0,   144,   432,   145,   144,     0,
     145,     0,     0,    22,    23,     0,    22,    23,     0,    18,
      19,   130,    18,    19,     0,     0,     1,     0,     0,   131,
     132,   210,   133,    70,     0,    71,     0,     0,    22,    23,
       0,    22,    23,     7,     0,     0,     0,     0,     1,     0,
       9,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,     0,    16,     7,     0,     0,     0,     7,
       0,     0,     9,     0,     1,     0,     9,     0,     0,     0,
       0,     0,     0,     0,   129,     0,    16,     0,   129,     0,
      16,     7,     0,     0,    18,    19,   130,     0,     9,     0,
       0,     0,     0,     0,   231,   132,     0,   133,     0,     0,
     129,     0,    16,    22,    23,     0,    18,    19,   130,     0,
      18,    19,   130,     0,     0,     0,   256,   132,     0,   133,
     273,   132,     1,   133,     0,    22,    23,     0,     0,    22,
      23,     0,    18,    19,   130,     0,     0,     1,     0,     7,
       0,     0,   290,   132,     0,   133,     9,     0,   463,   464,
       0,    22,    23,     0,     7,     0,     0,     0,   129,     1,
      16,     9,   470,     0,     0,   473,   474,     0,     0,     0,
       0,   476,   477,   129,     0,    16,     7,     0,     0,     0,
       0,   481,   482,     9,     0,   483,     0,     0,     0,     0,
      18,    19,   130,     0,     0,   129,     1,    16,     0,     0,
     344,   132,     0,   133,     0,    18,    19,   130,     0,    22,
      23,     0,     0,     7,     0,   400,   132,     0,   133,     0,
       9,     0,     0,     0,    22,    23,     0,    18,    19,   130,
       0,     1,   129,     0,    16,     0,     0,   408,   132,     0,
     133,     0,     0,     0,     0,     0,    22,    23,     7,     0,
       0,     0,     0,     0,     0,     9,     1,     0,    80,     0,
       0,     0,     0,     0,    18,    19,   130,    76,     0,    16,
       0,     1,     0,     7,   431,   132,     0,   133,     0,     8,
       9,     0,     0,    22,    23,     0,     0,     0,     7,     0,
       0,     0,   162,     0,    16,     9,     1,     0,     0,    18,
      19,     0,     0,     0,     0,     0,     0,   152,     0,    16,
      70,     0,    71,     7,     0,     0,     0,     0,    22,    23,
       9,     0,     0,     0,    18,    19,     0,     0,     0,     0,
       1,     0,    76,     0,    16,   163,     0,   164,     0,    18,
      19,     0,     0,    22,    23,     0,     0,     7,     0,   209,
      70,     0,    71,     8,     9,     1,     0,     0,    22,    23,
       0,     0,     0,     0,    18,    19,    76,     0,    16,     0,
       1,   235,     7,     0,     0,    70,     0,    71,     0,     9,
       0,     0,     0,    22,    23,     0,     0,     7,     0,     0,
       0,   152,     0,    16,     9,     1,     0,     0,    18,    19,
       0,     0,     0,     0,     0,     0,   152,     0,    16,    70,
       0,    71,     7,     0,     0,     0,     0,    22,    23,     9,
       0,     0,     0,    18,    19,     0,     0,     0,     0,     1,
       0,    76,     0,    16,    70,   264,    71,     0,    18,    19,
       0,     0,    22,    23,     0,     0,     7,   279,     0,    70,
       0,    71,     0,     9,     1,     0,     0,    22,    23,     0,
       0,     0,     0,    18,    19,    76,     0,    16,     0,     1,
     337,     7,     0,     0,    70,     0,    71,   153,     9,     0,
       0,     0,    22,    23,     0,     0,     7,     0,     0,     0,
      76,     0,    16,     9,     1,     0,     0,    18,    19,     0,
       0,     0,     0,     0,     0,    76,     0,    16,    70,     1,
      71,     7,     0,     0,     0,     0,    22,    23,     9,     0,
       0,     0,    18,    19,     0,     0,     7,     0,     0,   397,
     152,     1,    16,    70,     0,    71,     0,    18,    19,     0,
       0,    22,    23,     0,     0,    76,     0,    16,    70,     0,
      71,     0,     0,     0,     0,     0,    22,    23,     0,     0,
       0,     0,    18,    19,     0,     0,     0,    76,   171,    16,
       0,     0,   172,    70,     0,    71,   173,    18,    19,     0,
       0,    22,    23,     0,     0,     0,     0,     0,    70,     0,
      71,     0,     0,     0,     0,     0,    22,    23,     0,    18,
      19,     0,   174,   175,   176,   177,     0,     0,   104,     0,
      70,     0,    71,     0,     0,     0,     0,     0,    22,    23,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,     0,     0,     0,   104,
       0,     0,   179,   180,     0,     0,     0,     0,   120,     0,
       0,   105,   122,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
       0,     0,   196,   197
};

static const short int yycheck[] =
{
       0,    90,   221,     2,     7,     5,     0,    17,     8,    84,
      85,   137,    12,   153,   140,     0,   331,    17,   320,   321,
       0,    21,   148,    23,    39,    29,    12,    29,    13,    29,
      12,    12,    22,   159,    16,    29,    21,    51,    20,    18,
      19,    21,   182,    22,    29,    85,    36,    12,    39,    29,
      39,    12,    44,    39,    46,    22,    56,     0,    39,    73,
      12,    12,    51,    39,    46,    47,    48,    49,    83,    36,
      29,    71,     4,    12,    39,    82,    12,    84,    39,    83,
      80,    83,    66,    67,    73,    77,    86,    39,    39,    29,
      80,    71,    39,    25,    85,    77,    82,    83,    51,    99,
      39,    82,    83,    39,    86,    87,   106,     0,     1,    24,
      25,    78,    39,   123,    99,    88,   418,    82,    83,    99,
      13,   121,    83,   123,    83,    89,   105,    20,    21,   123,
      82,    83,    83,   133,   223,    79,    29,   393,   138,    39,
       1,    39,   134,    83,    83,   145,    73,    83,   133,   149,
      51,    51,    13,   133,   146,    39,    39,    84,    39,   299,
     145,    82,    51,   478,   164,   145,   422,   167,    51,    52,
      51,    52,    73,   165,    75,   194,    22,   196,    20,   164,
      80,    23,    82,    83,   164,    83,    51,    52,   198,    39,
      36,    41,   448,    82,   194,    79,   196,    17,   198,    83,
      83,    39,   421,   206,   198,    98,    99,   186,   187,    39,
     189,   190,    82,   212,    56,   215,    39,   217,    30,   219,
      46,    51,    52,    73,    83,   225,    78,   227,    70,   122,
     230,    39,    82,    41,    84,   235,    39,    63,   327,   132,
     133,    91,    78,   243,    83,   371,    39,   122,    41,    79,
     204,   144,   145,    83,    79,   130,    98,    39,   243,    82,
      83,   122,    39,   243,   264,    73,   251,   142,    39,    51,
     163,   164,    39,     5,    82,   101,    84,   262,    80,    39,
      73,    83,    39,    91,   264,    39,   286,   287,    83,    82,
     132,    84,    80,    83,    39,    83,   138,    81,    91,    81,
      82,    83,   144,    80,   197,   131,    83,   149,   134,    81,
      81,   386,    83,    80,   207,    82,    83,   143,    81,    79,
     146,   163,   197,    83,    81,   167,    83,    81,    82,    83,
     188,    39,   207,   191,   192,    80,   197,   337,    83,   165,
     340,    39,   342,    80,    80,   420,   207,    20,   348,   242,
     243,    92,    92,    51,    39,   248,   445,   250,   251,    39,
      83,   254,   362,   348,    39,   365,   241,    92,   348,   262,
      92,    79,    79,   248,   359,    83,    12,   362,   271,   254,
     380,    79,   362,    83,    82,    83,    83,   248,    83,   250,
     251,    39,    83,   254,    79,   395,   271,   397,    83,    39,
     242,   262,    82,    83,   404,   231,   232,    82,    83,    85,
     271,    39,    83,    83,   414,   415,    83,    81,    39,   404,
     313,    83,    78,    51,   404,    22,   319,    24,    25,   429,
     256,   257,    82,    81,    82,    83,    81,    83,   313,    36,
      36,    39,    80,    41,   319,    73,    83,   273,   274,    80,
      78,    77,   313,   407,   347,   348,   410,   411,   319,    80,
      83,    82,    83,   356,   290,   291,   359,    81,   361,   362,
      81,   346,    51,    39,   367,    73,   430,     3,    83,   433,
     434,   356,   436,   437,    82,    39,    84,    39,    39,    41,
      41,    83,   367,    91,    20,   356,    78,    82,   359,   453,
     454,    27,    82,   457,    12,   347,   367,    78,    83,    39,
     403,   404,    51,    39,    83,    41,    82,    83,    50,   361,
      39,    39,    78,   365,    12,    51,   352,    29,   354,    39,
      82,    82,    84,    84,    83,    83,    83,   363,    39,    91,
      91,    73,    74,    75,    76,    71,    72,    80,    83,    80,
      46,    92,   181,   170,     3,   185,    82,     3,    84,     5,
       6,   403,     8,   178,    90,    91,    92,    13,   169,   396,
     340,    20,    18,   421,    20,    23,    23,    26,    27,   405,
      26,    27,   408,   409,    30,    31,   373,    33,    34,    35,
      39,     3,    41,    39,     3,    41,   365,    43,    23,   205,
     324,    -1,    -1,    -1,    -1,   431,   432,    -1,    20,    -1,
      -1,    20,    -1,    -1,    26,    27,    -1,    26,    27,    -1,
      -1,    -1,    71,    72,    73,    71,    72,    39,    -1,    41,
      39,    80,    41,    82,    -1,    84,    82,    -1,    84,    -1,
      -1,    90,    91,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    -1,    71,
      72,    73,    71,    72,    73,    -1,     3,    -1,    80,     3,
      82,    80,    84,    82,    -1,    84,    -1,    -1,    90,    91,
      -1,    90,    91,    20,    -1,    -1,    20,    -1,    -1,    26,
      27,     3,    26,    27,     3,    -1,    -1,    82,    -1,    84,
      -1,    -1,    39,    -1,    41,    39,    91,    41,    20,    -1,
      -1,    20,    -1,    -1,    26,    27,    -1,    26,    27,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,    39,    -1,    41,
      39,    -1,    41,    -1,    71,    72,    73,    71,    72,    73,
      -1,    -1,    -1,    80,    -1,    82,    80,    84,    82,    -1,
      84,    -1,    -1,    90,    91,    -1,    90,    91,    -1,    71,
      72,    73,    71,    72,    73,    82,     3,    84,    80,     3,
      82,    80,    84,    82,    91,    84,    -1,    -1,    90,    91,
      -1,    90,    91,    20,    -1,    -1,    20,    -1,    -1,    26,
      27,     3,    26,    27,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    39,    -1,    41,    20,    -1,
      -1,    20,    -1,    -1,    -1,    27,    -1,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      39,    -1,    41,    -1,    71,    72,    73,    71,    72,    73,
      -1,    -1,    -1,    80,    -1,    82,    80,    84,    82,    -1,
      84,    -1,    -1,    90,    91,    -1,    90,    91,    -1,    71,
      72,    73,    71,    72,    -1,    -1,     3,    -1,    -1,    81,
      82,    80,    84,    82,    -1,    84,    -1,    -1,    90,    91,
      -1,    90,    91,    20,    -1,    -1,    -1,    -1,     3,    -1,
      27,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    20,    -1,    -1,    -1,    20,
      -1,    -1,    27,    -1,     3,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    -1,    39,    -1,
      41,    20,    -1,    -1,    71,    72,    73,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    81,    82,    -1,    84,    -1,    -1,
      39,    -1,    41,    90,    91,    -1,    71,    72,    73,    -1,
      71,    72,    73,    -1,    -1,    -1,    81,    82,    -1,    84,
      81,    82,     3,    84,    -1,    90,    91,    -1,    -1,    90,
      91,    -1,    71,    72,    73,    -1,    -1,     3,    -1,    20,
      -1,    -1,    81,    82,    -1,    84,    27,    -1,   438,   439,
      -1,    90,    91,    -1,    20,    -1,    -1,    -1,    39,     3,
      41,    27,   452,    -1,    -1,   455,   456,    -1,    -1,    -1,
      -1,   461,   462,    39,    -1,    41,    20,    -1,    -1,    -1,
      -1,   471,   472,    27,    -1,   475,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    39,     3,    41,    -1,    -1,
      81,    82,    -1,    84,    -1,    71,    72,    73,    -1,    90,
      91,    -1,    -1,    20,    -1,    81,    82,    -1,    84,    -1,
      27,    -1,    -1,    -1,    90,    91,    -1,    71,    72,    73,
      -1,     3,    39,    -1,    41,    -1,    -1,    81,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    90,    91,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,     3,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    39,    -1,    41,
      -1,     3,    -1,    20,    81,    82,    -1,    84,    -1,    26,
      27,    -1,    -1,    90,    91,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    39,    -1,    41,    27,     3,    -1,    -1,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,
      82,    -1,    84,    20,    -1,    -1,    -1,    -1,    90,    91,
      27,    -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,
       3,    -1,    39,    -1,    41,    82,    -1,    84,    -1,    71,
      72,    -1,    -1,    90,    91,    -1,    -1,    20,    -1,    81,
      82,    -1,    84,    26,    27,     3,    -1,    -1,    90,    91,
      -1,    -1,    -1,    -1,    71,    72,    39,    -1,    41,    -1,
       3,    78,    20,    -1,    -1,    82,    -1,    84,    -1,    27,
      -1,    -1,    -1,    90,    91,    -1,    -1,    20,    -1,    -1,
      -1,    39,    -1,    41,    27,     3,    -1,    -1,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    82,
      -1,    84,    20,    -1,    -1,    -1,    -1,    90,    91,    27,
      -1,    -1,    -1,    71,    72,    -1,    -1,    -1,    -1,     3,
      -1,    39,    -1,    41,    82,    83,    84,    -1,    71,    72,
      -1,    -1,    90,    91,    -1,    -1,    20,    80,    -1,    82,
      -1,    84,    -1,    27,     3,    -1,    -1,    90,    91,    -1,
      -1,    -1,    -1,    71,    72,    39,    -1,    41,    -1,     3,
      78,    20,    -1,    -1,    82,    -1,    84,    51,    27,    -1,
      -1,    -1,    90,    91,    -1,    -1,    20,    -1,    -1,    -1,
      39,    -1,    41,    27,     3,    -1,    -1,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    41,    82,     3,
      84,    20,    -1,    -1,    -1,    -1,    90,    91,    27,    -1,
      -1,    -1,    71,    72,    -1,    -1,    20,    -1,    -1,    78,
      39,     3,    41,    82,    -1,    84,    -1,    71,    72,    -1,
      -1,    90,    91,    -1,    -1,    39,    -1,    41,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    39,    12,    41,
      -1,    -1,    16,    82,    -1,    84,    20,    71,    72,    -1,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    71,
      72,    -1,    46,    47,    48,    49,    -1,    -1,    39,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,    91,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    51,    83,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     5,     6,     8,    13,    18,    20,    26,    27,
      30,    31,    33,    34,    35,    39,    41,    43,    71,    72,
      82,    84,    90,    91,    94,    95,    96,    97,    98,    99,
     100,   102,   103,   104,   106,   109,   110,   111,   112,   114,
     115,   116,   117,   118,   119,   121,   122,   132,   133,   134,
     135,   136,   137,   138,   144,   146,   147,   152,   153,   154,
     156,   157,   158,   161,   162,   164,   165,   166,   167,    39,
      82,    84,   121,   122,   169,   170,    39,   122,   146,   158,
      30,   146,   150,    39,    51,    73,    78,   127,   128,   130,
     131,   163,    85,   105,   169,    39,   146,    39,    82,    84,
     121,   122,   154,    39,    39,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      79,    82,    83,   101,   120,   155,   150,   114,   114,    39,
      73,    81,    82,    84,   122,   139,   140,   146,   147,   154,
     162,    39,    73,    80,    82,    84,   122,   144,   146,   147,
     154,   114,    39,    51,    92,   139,   140,   141,   143,   146,
     149,     0,    39,    82,    84,   122,   144,   147,   154,    88,
      89,    12,    16,    20,    46,    47,    48,    49,    77,    86,
      87,   107,   108,    66,    67,   113,    50,    73,    74,    75,
      76,    71,    72,   120,    82,    79,    82,    83,   101,   120,
     155,   146,   162,    79,    24,    25,    17,    83,   155,    81,
      80,    29,    83,   168,    39,    30,   146,    83,   151,    78,
     163,    83,   129,   163,   146,    78,   129,    79,   105,     5,
      83,    81,    80,   114,   146,    78,   123,   125,   126,   146,
      39,    73,    82,    84,   122,   161,   144,   150,    83,    81,
      82,    84,   161,    79,    83,   155,    81,    80,    81,    81,
      81,    22,    36,   145,    83,   148,    81,   145,    80,   161,
      79,    83,   155,    81,    80,    80,    80,    80,   145,    80,
      80,   111,    92,    92,    92,    92,    78,    83,   142,    79,
      81,    80,    79,    79,   112,   109,    20,    12,   110,   108,
     111,   116,   114,   114,   115,   114,   114,   115,   115,   123,
     123,   144,   150,    83,    83,    83,   156,   157,   158,    83,
      39,   169,    85,   146,   146,   146,    83,   131,    83,   129,
     146,    83,   146,    39,    73,    84,   146,    78,   146,    81,
      83,   124,    78,   161,    81,    80,    73,    82,    84,   122,
     161,    39,   122,    39,   122,    81,    83,    81,    81,    36,
      39,    82,    84,   122,   154,   147,    80,    83,    80,    80,
      80,   146,   146,   149,    83,    79,    79,   111,    81,    81,
       4,   168,    29,   168,   151,   129,    51,    83,    75,   130,
      29,    83,   171,    39,   146,    78,   125,    78,   146,   161,
      81,    80,    39,    82,    84,   122,   154,    12,    81,    80,
      12,    12,   148,   145,    78,    83,   142,   146,    39,   163,
      51,    83,    39,    39,    29,   171,   146,   124,   146,    78,
      12,    81,    80,    12,    12,   156,    12,    12,   156,   156,
     146,   168,    83,   163,   128,   131,   171,    29,    39,    80,
      83,   146,   156,    12,    12,   156,   156,    24,   145,   159,
     160,   156,   156,   159,   159,    83,   129,    39,   171,    80,
     159,   156,   156,   159,   159,   156,   159,   159,    83,    80,
      83,   159,   159,   159,    80
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 41 "index.y"
    {YYACCEPT;}
    break;

  case 3:
#line 42 "index.y"
    {YYACCEPT;}
    break;

  case 4:
#line 45 "index.y"
    {printf("simple\n");}
    break;

  case 21:
#line 172 "index.y"
    {printf("assignment_stmt\n");}
    break;

  case 29:
#line 181 "index.y"
    {printf("assign identifier\n");}
    break;

  case 110:
#line 228 "index.y"
    {printf("primary\n");}
    break;

  case 111:
#line 230 "index.y"
    {}
    break;

  case 117:
#line 243 "index.y"
    {}
    break;

  case 141:
#line 270 "index.y"
    {}
    break;

  case 211:
#line 345 "index.y"
    {}
    break;

  case 217:
#line 351 "index.y"
    {}
    break;

  case 276:
#line 418 "index.y"
    {printf("number\n");}
    break;

  case 291:
#line 438 "index.y"
    {}
    break;

  case 295:
#line 442 "index.y"
    {}
    break;

  case 297:
#line 444 "index.y"
    {}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 2025 "y.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 505 "index.y"


void main(int argc, char **argv)
{
    if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
    yyparse();
}

// int yyerror(const char* s) {
//     fprintf(stderr, "Error: %s in line %d \n", s);
//     return 1;
// }

void yyerror(const char *msg)
    {
        printf(" %s \n", msg);
    }
