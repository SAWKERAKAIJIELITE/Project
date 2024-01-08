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
     NEWLINE = 325,
     ISNOT = 326,
     NOTIN = 327,
     UADD = 328,
     UMINUS = 329
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
#define FALSEE 266
#define IN 267
#define RAISE 268
#define TRUEE 269
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
#define ISNOT 326
#define NOTIN 327
#define UADD 328
#define UMINUS 329




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
#line 254 "y.tab.c"

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
#define YYFINAL  210
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5193

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  114
/* YYNRULES -- Number of rules. */
#define YYNRULES  593
/* YYNRULES -- Number of states. */
#define YYNSTATES  1151

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    83,    77,     2,
      91,    89,    80,    78,    95,    79,    88,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    96,
      73,    97,    74,     2,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    92,     2,    90,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    94,    75,    93,    84,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    85,    86
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    37,    42,    44,
      47,    50,    52,    54,    57,    60,    64,    67,    71,    77,
      82,    90,    99,   104,   110,   115,   123,   130,   140,   147,
     157,   165,   176,   184,   195,   204,   216,   224,   235,   244,
     256,   263,   273,   281,   292,   294,   296,   298,   303,   314,
     322,   330,   332,   335,   339,   344,   351,   356,   367,   375,
     383,   385,   388,   394,   402,   409,   421,   429,   440,   450,
     461,   470,   480,   489,   500,   507,   517,   526,   534,   542,
     552,   561,   563,   566,   570,   578,   585,   592,   598,   604,
     611,   617,   622,   625,   629,   634,   637,   641,   645,   647,
     650,   653,   665,   674,   683,   693,   703,   714,   725,   733,
     736,   738,   740,   742,   744,   746,   748,   750,   752,   756,
     759,   766,   772,   778,   783,   790,   796,   802,   807,   815,
     822,   829,   835,   843,   850,   857,   863,   870,   876,   882,
     887,   895,   902,   909,   915,   923,   930,   937,   943,   952,
     960,   968,   975,   984,   992,  1000,  1007,  1009,  1011,  1015,
    1018,  1022,  1026,  1030,  1034,  1037,  1041,  1045,  1047,  1050,
    1053,  1057,  1060,  1064,  1068,  1071,  1076,  1081,  1085,  1087,
    1090,  1094,  1097,  1101,  1103,  1105,  1107,  1109,  1113,  1117,
    1121,  1126,  1131,  1136,  1141,  1146,  1152,  1158,  1163,  1168,
    1173,  1179,  1185,  1191,  1197,  1204,  1210,  1217,  1219,  1222,
    1225,  1229,  1231,  1234,  1238,  1242,  1247,  1252,  1258,  1263,
    1268,  1274,  1277,  1281,  1285,  1287,  1289,  1292,  1295,  1299,
    1304,  1308,  1314,  1319,  1323,  1328,  1332,  1335,  1338,  1341,
    1344,  1348,  1352,  1354,  1356,  1359,  1364,  1369,  1374,  1377,
    1382,  1387,  1392,  1396,  1400,  1404,  1408,  1412,  1416,  1420,
    1424,  1428,  1432,  1436,  1440,  1442,  1445,  1448,  1451,  1454,
    1457,  1460,  1463,  1466,  1469,  1471,  1475,  1479,  1483,  1487,
    1491,  1495,  1499,  1503,  1507,  1511,  1515,  1519,  1523,  1527,
    1531,  1535,  1539,  1543,  1547,  1551,  1553,  1555,  1559,  1563,
    1565,  1569,  1573,  1575,  1579,  1583,  1585,  1589,  1591,  1595,
    1597,  1601,  1603,  1606,  1610,  1613,  1615,  1617,  1619,  1621,
    1623,  1625,  1627,  1630,  1633,  1635,  1637,  1641,  1643,  1647,
    1649,  1652,  1656,  1658,  1660,  1666,  1668,  1670,  1674,  1679,
    1682,  1686,  1689,  1693,  1695,  1698,  1701,  1705,  1708,  1712,
    1714,  1716,  1719,  1722,  1726,  1729,  1731,  1733,  1735,  1737,
    1739,  1741,  1743,  1745,  1747,  1749,  1751,  1753,  1755,  1757,
    1759,  1761,  1763,  1768,  1771,  1774,  1777,  1781,  1784,  1788,
    1791,  1796,  1800,  1804,  1807,  1812,  1816,  1822,  1827,  1832,
    1836,  1842,  1847,  1852,  1856,  1858,  1861,  1864,  1868,  1871,
    1874,  1878,  1882,  1886,  1891,  1895,  1899,  1904,  1907,  1910,
    1914,  1918,  1922,  1927,  1932,  1937,  1943,  1947,  1951,  1956,
    1961,  1966,  1972,  1975,  1979,  1982,  1986,  1989,  1993,  1997,
    2002,  2007,  2013,  2017,  2022,  2027,  2033,  2037,  2042,  2047,
    2053,  2057,  2062,  2067,  2073,  2079,  2083,  2089,  2094,  2099,
    2105,  2110,  2117,  2124,  2130,  2136,  2141,  2146,  2152,  2158,
    2163,  2170,  2177,  2183,  2189,  2194,  2199,  2205,  2211,  2215,
    2219,  2223,  2228,  2230,  2232,  2234,  2236,  2238,  2240,  2242,
    2244,  2246,  2248,  2250,  2252,  2254,  2256,  2258,  2260,  2262,
    2266,  2272,  2278,  2281,  2283,  2286,  2290,  2293,  2296,  2300,
    2304,  2307,  2311,  2315,  2320,  2325,  2327,  2329,  2334,  2337,
    2343,  2348,  2352,  2355,  2363,  2370,  2376,  2381,  2392,  2402,
    2411,  2419,  2429,  2438,  2446,  2453,  2458,  2463,  2466,  2470,
    2476,  2478,  2481,  2484,  2488,  2491,  2496,  2500,  2506,  2508,
    2510,  2513,  2516,  2520,  2523,  2527,  2530,  2534,  2541,  2547,
    2552,  2558,  2563,  2567,  2569,  2574,  2578,  2581,  2585,  2588,
    2590,  2592,  2595,  2599,  2607,  2614,  2619,  2623,  2630,  2636,
    2640,  2643,  2650,  2656,  2660,  2663,  2669,  2674,  2677,  2679,
    2683,  2686,  2688,  2690
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      99,     0,    -1,    70,    -1,    70,    99,    -1,   100,    -1,
     100,    70,    99,    -1,   181,    -1,   101,    -1,   107,    -1,
     109,    -1,   110,    -1,   111,    -1,   119,    -1,   122,    -1,
     128,    -1,   127,    -1,   105,    70,    -1,    70,    68,   103,
      69,    -1,   104,    -1,   103,   104,    -1,   105,    70,    -1,
     101,    -1,   181,    -1,   181,    96,    -1,   181,   106,    -1,
     181,   106,    96,    -1,    96,   181,    -1,   106,    96,   181,
      -1,    24,   170,    87,   102,   108,    -1,    24,   170,    87,
     102,    -1,    24,   170,    87,   102,     4,    87,   102,    -1,
      24,   170,    87,   102,   108,     4,    87,   102,    -1,    23,
     170,    87,   102,    -1,   108,    23,   170,    87,   102,    -1,
      32,   170,    87,   102,    -1,    32,   170,    87,   102,     4,
      87,   102,    -1,    36,   186,    12,   176,    87,   102,    -1,
      36,   186,    12,   176,    87,   102,     4,    87,   102,    -1,
      36,   146,    12,   176,    87,   102,    -1,    36,   146,    12,
     176,    87,   102,     4,    87,   102,    -1,    36,    80,   146,
      12,   176,    87,   102,    -1,    36,    80,   146,    12,   176,
      87,   102,     4,    87,   102,    -1,    36,    92,    90,    12,
     176,    87,   102,    -1,    36,    92,    90,    12,   176,    87,
     102,     4,    87,   102,    -1,    36,    80,    92,    90,    12,
     176,    87,   102,    -1,    36,    80,    92,    90,    12,   176,
      87,   102,     4,    87,   102,    -1,    36,    91,    89,    12,
     176,    87,   102,    -1,    36,    91,    89,    12,   176,    87,
     102,     4,    87,   102,    -1,    36,    80,    91,    89,    12,
     176,    87,   102,    -1,    36,    80,    91,    89,    12,   176,
      87,   102,     4,    87,   102,    -1,    36,    39,    12,   176,
      87,   102,    -1,    36,    39,    12,   176,    87,   102,     4,
      87,   102,    -1,    36,    80,    39,    12,   176,    87,   102,
      -1,    36,    80,    39,    12,   176,    87,   102,     4,    87,
     102,    -1,   112,    -1,   115,    -1,   118,    -1,    28,    87,
     102,   113,    -1,    28,    87,   102,   113,     4,    87,   102,
      15,    87,   102,    -1,    28,    87,   102,   113,     4,    87,
     102,    -1,    28,    87,   102,   113,    15,    87,   102,    -1,
     114,    -1,   113,   114,    -1,     9,    87,   102,    -1,     9,
     172,    87,   102,    -1,     9,   172,    29,    39,    87,   102,
      -1,    28,    87,   102,   116,    -1,    28,    87,   102,   116,
       4,    87,   102,    15,    87,   102,    -1,    28,    87,   102,
     116,     4,    87,   102,    -1,    28,    87,   102,   116,    15,
      87,   102,    -1,   117,    -1,   116,   117,    -1,     9,    80,
     172,    87,   102,    -1,     9,    80,   172,    29,    39,    87,
     102,    -1,    28,    87,   102,    15,    87,   102,    -1,   120,
      37,    39,   124,    91,   206,    89,    40,   172,    87,   102,
      -1,   120,    37,    39,    91,    89,    87,   102,    -1,   120,
      37,    39,    91,   206,    89,    40,   172,    87,   102,    -1,
     120,    37,    39,    91,    89,    40,   172,    87,   102,    -1,
     120,    37,    39,   124,    91,    89,    40,   172,    87,   102,
      -1,   120,    37,    39,   124,    91,    89,    87,   102,    -1,
     120,    37,    39,   124,    91,   206,    89,    87,   102,    -1,
     120,    37,    39,    91,   206,    89,    87,   102,    -1,    37,
      39,   124,    91,   206,    89,    40,   172,    87,   102,    -1,
      37,    39,    91,    89,    87,   102,    -1,    37,    39,    91,
     206,    89,    40,   172,    87,   102,    -1,    37,    39,    91,
      89,    40,   172,    87,   102,    -1,    37,    39,   124,    91,
      89,    87,   102,    -1,    37,    39,    91,   206,    89,    87,
     102,    -1,    37,    39,   124,    91,    89,    40,   172,    87,
     102,    -1,    37,    39,   124,    91,   206,    89,    87,   102,
      -1,   121,    -1,   120,   121,    -1,    81,   170,    70,    -1,
     120,    10,    39,   124,   123,    87,   102,    -1,   120,    10,
      39,   124,    87,   102,    -1,   120,    10,    39,   123,    87,
     102,    -1,   120,    10,    39,    87,   102,    -1,    10,    39,
     123,    87,   102,    -1,    10,    39,   124,   123,    87,   102,
      -1,    10,    39,   124,    87,   102,    -1,    10,    39,    87,
     102,    -1,    91,    89,    -1,    92,   126,    90,    -1,    92,
     126,   125,    90,    -1,    95,   126,    -1,    95,   126,   125,
      -1,    39,    87,   172,    -1,    39,    -1,    80,    39,    -1,
      51,    39,    -1,   120,    22,    37,    39,    91,   206,    89,
      40,   172,    87,   102,    -1,   120,    22,    37,    39,    91,
      89,    87,   102,    -1,    22,    37,    39,    91,   206,    89,
      87,   102,    -1,    22,    37,    39,    91,    89,    40,   172,
      87,   102,    -1,   120,    22,    37,    39,    91,   206,    89,
      87,   102,    -1,   120,    22,    37,    39,    91,    89,    40,
     172,    87,   102,    -1,    22,    37,    39,    91,   206,    89,
      40,   172,    87,   102,    -1,    22,    37,    39,    91,    89,
      87,   102,    -1,    22,   110,    -1,    41,    -1,   130,    -1,
     131,    -1,   136,    -1,   138,    -1,   137,    -1,   143,    -1,
     144,    -1,    91,   178,    89,    -1,   170,   133,    -1,    22,
      36,   186,    12,   167,   134,    -1,    36,   186,    12,   167,
     134,    -1,    22,    36,   186,    12,   167,    -1,    36,   186,
      12,   167,    -1,    22,    36,   146,    12,   167,   134,    -1,
      36,   146,    12,   167,   134,    -1,    22,    36,   146,    12,
     167,    -1,    36,   146,    12,   167,    -1,    22,    36,    80,
      39,    12,   167,   134,    -1,    36,    80,    39,    12,   167,
     134,    -1,    22,    36,    80,    39,    12,   167,    -1,    36,
      80,    39,    12,   167,    -1,    22,    36,    80,   146,    12,
     167,   134,    -1,    36,    80,   146,    12,   167,   134,    -1,
      22,    36,    80,   146,    12,   167,    -1,    36,    80,   146,
      12,   167,    -1,    22,    36,    39,    12,   167,   134,    -1,
      36,    39,    12,   167,   134,    -1,    22,    36,    39,    12,
     167,    -1,    36,    39,    12,   167,    -1,    22,    36,    91,
      89,    12,   167,   134,    -1,    36,    91,    89,    12,   167,
     134,    -1,    22,    36,    91,    89,    12,   167,    -1,    36,
      91,    89,    12,   167,    -1,    22,    36,    92,    90,    12,
     167,   134,    -1,    36,    92,    90,    12,   167,   134,    -1,
      22,    36,    92,    90,    12,   167,    -1,    36,    92,    90,
      12,   167,    -1,    22,    36,    80,    91,    89,    12,   167,
     134,    -1,    36,    80,    91,    89,    12,   167,   134,    -1,
      22,    36,    80,    91,    89,    12,   167,    -1,    36,    80,
      91,    89,    12,   167,    -1,    22,    36,    80,    92,    90,
      12,   167,   134,    -1,    36,    80,    92,    90,    12,   167,
     134,    -1,    22,    36,    80,    92,    90,    12,   167,    -1,
      36,    80,    92,    90,    12,   167,    -1,   133,    -1,   135,
      -1,    24,   167,   134,    -1,    24,   167,    -1,    92,   176,
      90,    -1,    92,   132,    90,    -1,    94,   176,    93,    -1,
      94,   132,    93,    -1,    94,    93,    -1,    94,   139,    93,
      -1,    94,   142,    93,    -1,   141,    -1,   141,    95,    -1,
     141,   140,    -1,   141,   140,    95,    -1,    95,   141,    -1,
      95,   141,   140,    -1,   172,    87,   172,    -1,    51,   163,
      -1,   172,    87,   172,   133,    -1,    91,   172,   133,    89,
      -1,    91,   145,    89,    -1,    26,    -1,    26,   174,    -1,
      26,    30,   172,    -1,    26,   172,    -1,    26,   172,    95,
      -1,   148,    -1,   149,    -1,   150,    -1,   129,    -1,   147,
      88,    39,    -1,   146,    88,    39,    -1,    39,    88,    39,
      -1,    91,    89,    88,    39,    -1,    92,    90,    88,    39,
      -1,   147,    92,   174,    90,    -1,   146,    92,   174,    90,
      -1,    39,    92,   174,    90,    -1,    91,    89,    92,   174,
      90,    -1,    92,    90,    92,   174,    90,    -1,   147,    92,
     151,    90,    -1,   146,    92,   151,    90,    -1,    39,    92,
     151,    90,    -1,   147,    92,   172,    95,    90,    -1,   146,
      92,   172,    95,    90,    -1,    39,    92,   172,    95,    90,
      -1,    91,    89,    92,   151,    90,    -1,    91,    89,    92,
     172,    95,    90,    -1,    92,    90,    92,   151,    90,    -1,
      92,    90,    92,   172,    95,    90,    -1,   153,    -1,   153,
      95,    -1,   153,   152,    -1,   153,   152,    95,    -1,   172,
      -1,   172,   152,    -1,   172,   152,    95,    -1,   153,    95,
     172,    -1,   153,    95,   172,    95,    -1,   153,   152,    95,
     172,    -1,   153,   152,    95,   172,    95,    -1,   172,    95,
     172,    95,    -1,   172,   152,    95,   172,    -1,   172,   152,
      95,   172,    95,    -1,    95,   153,    -1,    95,   153,   152,
      -1,    95,   172,   152,    -1,   154,    -1,    87,    -1,    87,
      87,    -1,    87,   172,    -1,    87,   172,    87,    -1,    87,
     172,    87,   172,    -1,    87,    87,   172,    -1,   172,    87,
     172,    87,   172,    -1,   172,    87,   172,    87,    -1,   172,
      87,   172,    -1,   172,    87,    87,   172,    -1,   172,    87,
      87,    -1,   172,    87,    -1,     3,   147,    -1,     3,   146,
      -1,     3,    39,    -1,     3,    91,    89,    -1,     3,    92,
      90,    -1,   155,    -1,   147,    -1,    91,    89,    -1,    91,
      89,    51,   157,    -1,    91,    89,    51,    39,    -1,    91,
      89,    51,   146,    -1,    92,    90,    -1,    92,    90,    51,
     157,    -1,    92,    90,    51,    39,    -1,    92,    90,    51,
     146,    -1,   155,    51,   157,    -1,   147,    51,   157,    -1,
     146,    51,   157,    -1,    39,    51,   157,    -1,   155,    51,
      39,    -1,   147,    51,    39,    -1,   146,    51,    39,    -1,
      39,    51,    39,    -1,   155,    51,   146,    -1,   147,    51,
     146,    -1,   146,    51,   146,    -1,    39,    51,   146,    -1,
     156,    -1,    79,   157,    -1,    78,   157,    -1,    84,   157,
      -1,    79,   146,    -1,    78,   146,    -1,    84,   146,    -1,
      79,    39,    -1,    78,    39,    -1,    84,    39,    -1,   157,
      -1,   158,    80,   157,    -1,   158,    81,   158,    -1,   158,
      50,   157,    -1,   158,    82,   157,    -1,   158,    83,   157,
      -1,   158,    80,   146,    -1,   158,    50,   146,    -1,   158,
      82,   146,    -1,   158,    83,   146,    -1,   146,    81,   146,
      -1,   146,    81,   158,    -1,   158,    81,   146,    -1,   146,
      80,   146,    -1,   146,    50,   146,    -1,   146,    82,   146,
      -1,   146,    83,   146,    -1,   158,    50,    39,    -1,   158,
      80,    39,    -1,   158,    82,    39,    -1,   158,    83,    39,
      -1,    39,    -1,   158,    -1,   159,    78,   158,    -1,   159,
      79,   158,    -1,   146,    -1,   159,    78,   146,    -1,   159,
      79,   146,    -1,   159,    -1,   160,    67,   159,    -1,   160,
      66,   159,    -1,   160,    -1,   161,    77,   160,    -1,   161,
      -1,   162,    76,   161,    -1,   162,    -1,   163,    75,   162,
      -1,   163,    -1,   163,   165,    -1,   165,   166,   163,    -1,
     166,   163,    -1,    73,    -1,    74,    -1,    46,    -1,    48,
      -1,    49,    -1,    47,    -1,    16,    -1,    16,    20,    -1,
      20,    12,    -1,    12,    -1,   168,    -1,   167,    25,   168,
      -1,   169,    -1,   168,    17,   169,    -1,   164,    -1,    20,
     169,    -1,    39,    52,   172,    -1,   172,    -1,   167,    -1,
     167,    24,   167,     4,   172,    -1,   171,    -1,   173,    -1,
      27,    87,   172,    -1,    27,   206,    87,   172,    -1,   172,
     175,    -1,   172,   175,    95,    -1,    95,   172,    -1,    95,
     172,   175,    -1,   180,    -1,   180,    95,    -1,   180,   177,
      -1,   180,   177,    95,    -1,    95,   180,    -1,    95,   180,
     177,    -1,   180,    -1,   179,    -1,   179,   180,    -1,   180,
      95,    -1,   180,    95,   179,    -1,    80,   163,    -1,   170,
      -1,   183,    -1,   184,    -1,   182,    -1,   189,    -1,   192,
      -1,     6,    -1,   194,    -1,   193,    -1,   195,    -1,   196,
      -1,     8,    -1,    18,    -1,   197,    -1,   204,    -1,   203,
      -1,   178,    -1,    33,   172,    95,   172,    -1,    33,   172,
      -1,   185,   180,    -1,   185,   145,    -1,   185,   186,    97,
      -1,   186,    97,    -1,   185,   146,    97,    -1,   146,    97,
      -1,   185,    80,    39,    97,    -1,    80,    39,    97,    -1,
     185,    39,    97,    -1,    39,    97,    -1,   185,    91,    89,
      97,    -1,    91,    89,    97,    -1,   185,    80,    91,    89,
      97,    -1,    80,    91,    89,    97,    -1,   185,    92,    90,
      97,    -1,    92,    90,    97,    -1,   185,    80,    92,    90,
      97,    -1,    80,    92,    90,    97,    -1,   185,    80,   146,
      97,    -1,    80,   146,    97,    -1,   188,    -1,   188,    95,
      -1,   188,   187,    -1,   188,   187,    95,    -1,    39,    95,
      -1,    39,   187,    -1,    39,   187,    95,    -1,    80,   146,
      95,    -1,    80,   146,   187,    -1,    80,   146,   187,    95,
      -1,    80,    39,    95,    -1,    80,    39,   187,    -1,    80,
      39,   187,    95,    -1,   146,    95,    -1,   146,   187,    -1,
     146,   187,    95,    -1,    91,    89,    95,    -1,    91,    89,
     187,    -1,    91,    89,   187,    95,    -1,    80,    91,    89,
      95,    -1,    80,    91,    89,   187,    -1,    80,    91,    89,
     187,    95,    -1,    92,    90,    95,    -1,    92,    90,   187,
      -1,    92,    90,   187,    95,    -1,    80,    92,    90,    95,
      -1,    80,    92,    90,   187,    -1,    80,    92,    90,   187,
      95,    -1,    95,   188,    -1,   187,    95,   188,    -1,    95,
      39,    -1,   187,    95,    39,    -1,    95,   146,    -1,   187,
      95,   146,    -1,    95,    80,    39,    -1,   187,    95,    80,
      39,    -1,    95,    80,    80,   146,    -1,   187,    95,    80,
      80,   146,    -1,    95,    91,    89,    -1,   187,    95,    91,
      89,    -1,    95,    80,    91,    89,    -1,   187,    95,    80,
      91,    89,    -1,    95,    92,    90,    -1,   187,    95,    92,
      90,    -1,    95,    80,    92,    90,    -1,   187,    95,    80,
      92,    90,    -1,    91,   186,    89,    -1,    91,    91,    89,
      89,    -1,    91,    92,    90,    89,    -1,    91,    80,    92,
      90,    89,    -1,    91,    80,    91,    89,    89,    -1,    92,
     186,    90,    -1,    92,    80,    92,    90,    90,    -1,    92,
      91,    89,    90,    -1,    92,    92,    90,    90,    -1,    92,
      80,    91,    89,    90,    -1,    80,    91,   186,    89,    -1,
      80,    91,    80,    92,    90,    89,    -1,    80,    91,    80,
      91,    89,    89,    -1,    80,    91,    91,    89,    89,    -1,
      80,    91,    92,    90,    89,    -1,    80,    91,    39,    89,
      -1,    80,    91,   146,    89,    -1,    80,    91,    80,    39,
      89,    -1,    80,    91,    80,   146,    89,    -1,    80,    92,
     186,    90,    -1,    80,    92,    80,    92,    90,    90,    -1,
      80,    92,    80,    91,    89,    90,    -1,    80,    92,    91,
      89,    90,    -1,    80,    92,    92,    90,    90,    -1,    80,
      92,    39,    90,    -1,    80,    92,   146,    90,    -1,    80,
      92,    80,    39,    90,    -1,    80,    92,    80,   146,    90,
      -1,   190,   191,   174,    -1,   190,   191,   145,    -1,   190,
     191,   172,    -1,   190,   191,   172,    95,    -1,    39,    -1,
     148,    -1,   149,    -1,   150,    -1,    53,    -1,    54,    -1,
      55,    -1,    60,    -1,    56,    -1,    57,    -1,    59,    -1,
      58,    -1,    63,    -1,    62,    -1,    61,    -1,    64,    -1,
      65,    -1,   190,    87,   172,    -1,   190,    87,   172,    97,
     178,    -1,   190,    87,   172,    97,   145,    -1,    43,   174,
      -1,    43,    -1,    43,   172,    -1,    43,   172,    95,    -1,
      34,   186,    -1,    34,   146,    -1,    34,    80,    39,    -1,
      34,    80,   146,    -1,    34,    39,    -1,    34,    91,    89,
      -1,    34,    92,    90,    -1,    34,    80,    91,    89,    -1,
      34,    80,    92,    90,    -1,   145,    -1,    13,    -1,    13,
     172,    30,   172,    -1,    13,   172,    -1,     5,   199,    29,
      39,   198,    -1,     5,   199,    29,    39,    -1,     5,   199,
     198,    -1,     5,   199,    -1,    30,   202,     5,    39,    29,
      39,   201,    -1,    30,   202,     5,    39,    29,    39,    -1,
      30,   202,     5,    39,   201,    -1,    30,   202,     5,    39,
      -1,    30,   202,     5,    91,    39,    29,    39,   201,    95,
      89,    -1,    30,   202,     5,    91,    39,    29,    39,   201,
      89,    -1,    30,   202,     5,    91,    39,   201,    95,    89,
      -1,    30,   202,     5,    91,    39,   201,    89,    -1,    30,
     202,     5,    91,    39,    29,    39,    95,    89,    -1,    30,
     202,     5,    91,    39,    29,    39,    89,    -1,    30,   202,
       5,    91,    39,    95,    89,    -1,    30,   202,     5,    91,
      39,    89,    -1,    30,   202,     5,    80,    -1,    95,   199,
      29,    39,    -1,    95,   199,    -1,    95,   199,   198,    -1,
      95,   199,    29,    39,   198,    -1,    39,    -1,   200,    39,
      -1,    39,    88,    -1,   200,    39,    88,    -1,    95,    39,
      -1,    95,    39,    29,    39,    -1,    95,    39,   201,    -1,
      95,    39,    29,    39,   201,    -1,    88,    -1,   199,    -1,
      88,   202,    -1,    31,    39,    -1,    31,    39,   205,    -1,
      35,    39,    -1,    35,    39,   205,    -1,    95,    39,    -1,
     205,    95,    39,    -1,   211,   208,    95,    82,    95,   207,
      -1,   211,   208,    95,    82,    95,    -1,   211,   208,    95,
      82,    -1,   211,    95,    82,    95,   207,    -1,   211,    95,
      82,    95,    -1,   211,    95,    82,    -1,   207,    -1,   211,
     208,    95,   209,    -1,   211,   208,    95,    -1,   211,   208,
      -1,   211,    95,   209,    -1,   211,    95,    -1,   211,    -1,
     209,    -1,    95,   211,    -1,    95,   211,   208,    -1,    80,
     210,   208,    95,    51,   210,    95,    -1,    80,   210,   208,
      95,    51,   210,    -1,    80,   210,   208,    95,    -1,    80,
     210,   208,    -1,    80,   210,    95,    51,   210,    95,    -1,
      80,   210,    95,    51,   210,    -1,    80,   210,    95,    -1,
      80,   210,    -1,    80,   208,    95,    51,   210,    95,    -1,
      80,   208,    95,    51,   210,    -1,    80,   208,    95,    -1,
      80,   208,    -1,    80,    95,    51,   210,    95,    -1,    80,
      95,    51,   210,    -1,    80,    95,    -1,    80,    -1,    51,
     210,    95,    -1,    51,   210,    -1,    39,    -1,   210,    -1,
     210,    97,   172,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    44,    44,    44,    44,    44,    46,    47,    49,    50,
      51,    52,    54,    55,    56,    57,    59,    60,    61,    61,
      62,    62,    63,    64,    65,    66,    67,    67,    69,    70,
      71,    72,    74,    74,    76,    76,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    84,
      85,    85,    86,    86,    88,    88,    88,    90,    91,    92,
      93,    94,    94,    95,    95,    95,    97,    98,    99,   100,
     101,   101,   102,   102,   104,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   122,   123,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   135,   135,   136,   136,   137,   137,   137,
     137,   139,   140,   141,   142,   143,   144,   145,   146,   148,
     150,   150,   152,   152,   152,   152,   152,   152,   154,   156,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   175,   178,   178,   180,   180,
     182,   182,   184,   184,   186,   186,   186,   188,   188,   188,
     188,   190,   190,   192,   192,   194,   196,   198,   200,   200,
     200,   200,   200,   202,   202,   202,   204,   206,   206,   206,
     207,   207,   209,   209,   209,   213,   215,   218,   218,   218,
     219,   219,   219,   223,   223,   225,   225,   228,   228,   228,
     228,   229,   229,   229,   230,   230,   231,   231,   232,   233,
     233,   235,   235,   236,   238,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   254,   254,   254,
     254,   254,   256,   256,   257,   257,   257,   257,   258,   258,
     258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   266,   266,   266,   266,   267,   267,
     267,   268,   268,   268,   270,   270,   270,   270,   270,   270,
     271,   272,   273,   274,   275,   275,   275,   276,   277,   277,
     277,   278,   278,   278,   278,   278,   281,   281,   281,   282,
     283,   284,   287,   287,   287,   289,   289,   291,   291,   293,
     293,   295,   295,   297,   297,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   301,   301,   303,   303,   305,
     305,   307,   307,   309,   309,   311,   311,   313,   313,   315,
     315,   317,   317,   319,   319,   319,   319,   321,   321,   323,
     323,   323,   325,   325,   327,   327,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   346,   348,   348,   350,   350,   352,   352,   353,   353,
     354,   354,   355,   355,   356,   356,   357,   357,   358,   358,
     359,   359,   360,   360,   362,   362,   362,   362,   363,   363,
     363,   364,   364,   364,   365,   365,   365,   366,   366,   366,
     367,   367,   367,   368,   368,   368,   369,   369,   369,   370,
     370,   370,   373,   373,   373,   373,   374,   374,   374,   374,
     375,   375,   375,   375,   376,   376,   376,   376,   377,   377,
     380,   380,   380,   382,   384,   387,   387,   387,   387,   390,
     393,   393,   393,   393,   394,   394,   394,   394,   395,   396,
     396,   396,   396,   397,   397,   397,   397,   398,   400,   400,
     401,   401,   403,   403,   403,   403,   405,   405,   405,   405,
     405,   405,   405,   406,   406,   406,   406,   406,   406,   408,
     409,   410,   412,   412,   412,   412,   414,   414,   414,   414,
     414,   415,   415,   415,   415,   417,   419,   419,   420,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   440,   440,   440,   440,
     442,   442,   444,   444,   446,   447,   448,   449,   451,   451,
     451,   453,   453,   455,   455,   457,   457,   459,   460,   461,
     462,   463,   464,   465,   467,   468,   469,   470,   471,   472,
     473,   475,   475,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   496,   499,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAIT", "ELSE", "IMPORT", "PASS",
  "NONE", "BREAK", "EXCEPT", "CLASS", "FALSEE", "IN", "RAISE", "TRUEE",
  "FINALLY", "IS", "AND", "CONTINUE", "MATCH", "NOT", "WITH", "ASYNC",
  "ELIF", "IF", "OR", "YIELD", "LAMBDA", "TRY", "AS", "FROM", "NONLOCAL",
  "WHILE", "ASSERT", "DEL", "GLOBAL", "FOR", "DEF", "CASE", "IDENTIFIER",
  "FN", "NUMBER", "STRING", "RETURN", "SINGLESTRING", "ZERO", "EQUAL",
  "NOTEQUAL", "GTE", "SME", "INTDIVIDE", "POWER", "ASSIGN", "ASSIGNADD",
  "ASSIGNMINUS", "ASSIGNMUL", "ASSIGNDIVIDE", "ASSIGNINTDIVIDE",
  "ASSIGNPOWER", "ASSIGNMODULUS", "ASSIGNARRMUL", "ASSIGNANDBIT",
  "ASSIGNRIGHTSHIFT", "ASSIGNLEFTSHIFT", "ASSIGNXORBIT", "ASSIGNORBIT",
  "RIGHTSHIFT", "LEFTSHIFT", "INDENT", "DEDENT", "NEWLINE", "ISNOT",
  "NOTIN", "'<'", "'>'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'@'",
  "'/'", "'%'", "'~'", "UADD", "UMINUS", "':'", "'.'", "')'", "']'", "'('",
  "'['", "'}'", "'{'", "','", "';'", "'='", "$accept", "program",
  "statements", "compound_stmt", "suite", "mystatement", "statement",
  "stmt_list", "mysimplestmt", "if_stmt", "myelifstmt", "while_stmt",
  "for_stmt", "try_stmt", "try1_stmt", "mytry1", "myexcept1", "try2_stmt",
  "mytry2", "myexcept2", "try3_stmt", "funcdef", "decorators", "decorator",
  "classdef", "inheritance", "type_params", "mytypeparam", "type_param",
  "async_funcdef", "async_for_stmt", "atom", "enclosure", "parenth_form",
  "comprehension", "comp_for", "comp_iter", "comp_if", "list_display",
  "set_display", "dict_display", "dict_item_list", "mydictitem",
  "dict_item", "dict_comprehension", "generator_expression", "yield_atom",
  "yield_expression", "myreduce", "primary", "attributeref",
  "subscription", "slicing", "slice_list", "mysliceitem", "slice_item",
  "proper_slice", "await_expr", "power", "u_expr", "m_expr", "a_expr",
  "shift_expr", "and_expr", "xor_expr", "or_expr", "comparison",
  "mycomparison", "comp_operator", "or_test", "and_test", "not_test",
  "assignment_expression", "conditional_expression", "expression",
  "lambda_expr", "expression_list", "myexpression", "starred_list",
  "mystarreditem", "starred_expression", "mystarredexpression",
  "starred_item", "simple_stmt", "expression_stmt", "assert_stmt",
  "assignment_stmt", "mytargetlist", "target_list", "mytarget", "target",
  "augmented_assignment_stmt", "augtarget", "augop",
  "annotated_assignment_stmt", "return_stmt", "del_stmt", "yield_stmt",
  "raise_stmt", "import_stmt", "mymodule", "module", "identifiermodule",
  "mymoduleidentifier", "relative_module", "nonlocal_stmt", "global_stmt",
  "myidentifier", "parameter_list", "parameter_list_no_posonly",
  "mydefparameter", "parameter_list_starargs", "parameter", "defparameter", 0
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
     325,   326,   327,    60,    62,   124,    94,    38,    43,    45,
      42,    64,    47,    37,   126,   328,   329,    58,    46,    41,
      93,    40,    91,   125,   123,    44,    59,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    98,    99,    99,    99,    99,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   106,   106,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   112,   112,   112,
     112,   113,   113,   114,   114,   114,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   124,   124,   125,   125,   126,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     129,   129,   130,   130,   130,   130,   130,   130,   131,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   142,   143,   144,   145,   145,
     145,   145,   145,   146,   146,   146,   147,   148,   148,   148,
     148,   148,   149,   149,   149,   149,   149,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   152,   152,   152,   153,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   155,   155,   155,
     155,   155,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   159,   159,   159,   159,
     159,   159,   160,   160,   160,   161,   161,   162,   162,   163,
     163,   164,   164,   165,   165,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   176,   176,   176,   176,   177,   177,   178,
     178,   178,   179,   179,   180,   180,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   182,   183,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   189,   190,   190,   190,   190,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   192,
     192,   192,   193,   193,   193,   193,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   195,   196,   196,   196,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   198,   198,   198,   198,
     199,   199,   200,   200,   201,   201,   201,   201,   202,   202,
     202,   203,   203,   204,   204,   205,   205,   206,   206,   206,
     206,   206,   206,   206,   207,   207,   207,   207,   207,   207,
     207,   208,   208,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   210,   211,   211
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     1,     2,
       2,     1,     1,     2,     2,     3,     2,     3,     5,     4,
       7,     8,     4,     5,     4,     7,     6,     9,     6,     9,
       7,    10,     7,    10,     8,    11,     7,    10,     8,    11,
       6,     9,     7,    10,     1,     1,     1,     4,    10,     7,
       7,     1,     2,     3,     4,     6,     4,    10,     7,     7,
       1,     2,     5,     7,     6,    11,     7,    10,     9,    10,
       8,     9,     8,    10,     6,     9,     8,     7,     7,     9,
       8,     1,     2,     3,     7,     6,     6,     5,     5,     6,
       5,     4,     2,     3,     4,     2,     3,     3,     1,     2,
       2,    11,     8,     8,     9,     9,    10,    10,     7,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       6,     5,     5,     4,     6,     5,     5,     4,     7,     6,
       6,     5,     7,     6,     6,     5,     6,     5,     5,     4,
       7,     6,     6,     5,     7,     6,     6,     5,     8,     7,
       7,     6,     8,     7,     7,     6,     1,     1,     3,     2,
       3,     3,     3,     3,     2,     3,     3,     1,     2,     2,
       3,     2,     3,     3,     2,     4,     4,     3,     1,     2,
       3,     2,     3,     1,     1,     1,     1,     3,     3,     3,
       4,     4,     4,     4,     4,     5,     5,     4,     4,     4,
       5,     5,     5,     5,     6,     5,     6,     1,     2,     2,
       3,     1,     2,     3,     3,     4,     4,     5,     4,     4,
       5,     2,     3,     3,     1,     1,     2,     2,     3,     4,
       3,     5,     4,     3,     4,     3,     2,     2,     2,     2,
       3,     3,     1,     1,     2,     4,     4,     4,     2,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     3,     1,     3,     1,
       2,     3,     1,     1,     5,     1,     1,     3,     4,     2,
       3,     2,     3,     1,     2,     2,     3,     2,     3,     1,
       1,     2,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     2,     2,     3,     2,     3,     2,
       4,     3,     3,     2,     4,     3,     5,     4,     4,     3,
       5,     4,     4,     3,     1,     2,     2,     3,     2,     2,
       3,     3,     3,     4,     3,     3,     4,     2,     2,     3,
       3,     3,     4,     4,     4,     5,     3,     3,     4,     4,
       4,     5,     2,     3,     2,     3,     2,     3,     3,     4,
       4,     5,     3,     4,     4,     5,     3,     4,     4,     5,
       3,     4,     4,     5,     5,     3,     5,     4,     4,     5,
       4,     6,     6,     5,     5,     4,     4,     5,     5,     4,
       6,     6,     5,     5,     4,     4,     5,     5,     3,     3,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     5,     2,     1,     2,     3,     2,     2,     3,     3,
       2,     3,     3,     4,     4,     1,     1,     4,     2,     5,
       4,     3,     2,     7,     6,     5,     4,    10,     9,     8,
       7,     9,     8,     7,     6,     4,     4,     2,     3,     5,
       1,     2,     2,     3,     2,     4,     3,     5,     1,     1,
       2,     2,     3,     2,     3,     2,     3,     6,     5,     4,
       5,     4,     3,     1,     4,     3,     2,     3,     2,     1,
       1,     2,     3,     7,     6,     4,     3,     6,     5,     3,
       2,     6,     5,     3,     2,     5,     4,     2,     1,     3,
       2,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,   371,   376,     0,   516,   377,     0,     0,
       0,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   305,   120,   503,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     7,     8,     9,    10,
      11,    54,    55,    56,    12,     0,    91,    13,    15,    14,
     196,   121,   122,   123,   125,   124,   126,   127,   515,   309,
     253,   193,   194,   195,   252,   274,   284,   306,   312,   315,
     317,   319,   321,   339,   343,   335,   337,   365,   345,   342,
     346,   381,   360,   359,     6,   368,   366,   367,     0,     0,
     404,   369,     0,   370,   373,   372,   374,   375,   378,   380,
     379,   249,     0,     0,   248,   247,   193,   194,   195,   540,
     522,     0,     0,   305,     0,     0,   309,   518,   340,     0,
     119,   305,     0,     0,   191,   189,   591,     0,   588,     0,
       0,   563,   570,   592,   569,     0,   548,   549,     0,   551,
       0,   383,   510,     0,     0,     0,   507,     0,   506,   553,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   408,   393,   409,   504,   502,     3,   282,   279,   276,
     281,   278,   275,   305,     0,     0,   309,   364,     0,   283,
     280,   277,   305,     0,   254,     0,     0,     0,   309,   342,
       0,     0,     0,   258,     0,     0,     0,   365,     0,   353,
       0,     0,     0,   174,     0,     0,   177,     0,   342,     0,
       1,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,     0,   417,   389,   418,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   334,   331,     0,   327,   330,   328,   329,   325,
     326,     0,   322,     0,     0,     0,     0,   361,   362,   305,
       0,     0,     0,   385,   309,   384,     0,   387,   405,   406,
     486,   487,   488,   490,   491,   493,   492,   489,   496,   495,
     494,   497,   498,     0,     0,   250,   251,   542,     0,     0,
     521,   541,     0,     0,     0,     0,     0,   254,   258,     0,
       0,     0,   190,   192,   349,   590,   587,   584,   580,   347,
       0,     0,   568,   566,     0,     0,     0,    22,   550,     0,
       0,   552,     0,     0,   508,     0,     0,   509,   511,   512,
     554,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   273,   265,   341,   199,   235,     0,   217,
     234,   221,     0,   434,     0,     0,     0,   436,   432,   410,
     505,   414,   391,   415,   305,     0,   254,     0,     0,   309,
       0,   305,     0,   258,     0,     0,   309,     0,   411,   403,
     412,    93,   305,     0,     0,   309,     0,     0,     0,   420,
     395,   421,   254,   258,   187,     0,     0,     0,   128,   450,
       0,     0,     0,     0,     0,   426,   399,   427,   254,   258,
     171,   129,   170,   354,   355,   455,   184,   173,   175,   178,
     179,   176,     0,   172,     5,     0,     0,     0,     0,     0,
       0,   298,   268,   272,   264,   297,   294,   295,   299,   300,
     198,     0,   221,     0,   419,   267,   271,   263,   197,     0,
     221,     0,   266,   270,   262,   301,   291,   287,   302,   290,
     285,   296,   286,   303,   292,   288,   304,   293,   289,   310,
     307,   311,   308,   314,   313,   316,   318,   332,   333,   320,
       0,   324,     0,   336,   338,   363,     0,   392,   305,     0,
       0,   309,   254,   258,   388,   386,   407,   499,   479,   480,
     478,   520,   537,   543,   101,   102,   108,     0,     0,     0,
       0,     0,     0,   517,     0,    29,   351,   350,   589,     0,
     571,   583,   579,   576,   348,   593,   562,   567,   565,     0,
       0,     0,    57,    61,    66,    70,    16,    23,    24,   526,
     535,     0,   555,     0,    34,   382,   513,   514,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     236,   237,   209,   218,   219,   246,     0,   222,   204,   438,
       0,     0,     0,   442,   446,   435,     0,     0,     0,   437,
     433,   416,   465,   305,     0,     0,   309,   423,   397,   424,
     254,   258,   466,   460,   474,   305,     0,     0,   309,   429,
     401,   430,   254,   258,   475,   469,   413,   254,   258,   256,
     257,   255,   200,     0,   221,     0,   422,   451,   452,     0,
       0,     0,     0,     0,     0,     0,   186,   254,   258,   260,
     261,   259,   201,     0,   221,     0,   428,   457,   458,   357,
     356,   181,     0,   180,   183,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,   203,   207,     0,   202,   323,
       0,   390,   254,   258,   402,   394,   398,     0,   481,   519,
       0,   538,     0,   110,   109,   103,     0,     0,    98,   100,
       0,     0,     0,     0,     0,    28,     0,   352,   586,     0,
     572,     0,     0,   575,   561,   559,   564,    21,     0,    18,
       0,     0,     0,     0,     0,     0,     0,     0,    62,     0,
       0,     0,    71,    26,    25,     0,     0,   525,     0,   556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   240,   238,   231,   224,   220,
     245,   243,   212,   351,   223,   440,     0,     0,   444,     0,
       0,     0,     0,     0,   448,     0,     0,     0,   439,     0,
       0,     0,   443,   447,   467,   254,   258,   468,   425,   463,
     464,   476,   254,   258,   477,   431,   472,   473,   454,   453,
     213,     0,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   459,   456,
     215,     0,   206,     0,   358,     0,   182,     0,   185,    97,
       0,     0,     0,     0,     0,     0,     0,   211,   210,   344,
     396,   400,   501,   500,   536,   107,   105,   104,    99,     0,
       0,     0,     0,     0,     0,     0,   585,   582,   578,     0,
     560,   569,   558,    17,    19,    20,     0,    63,     0,     0,
      74,     0,     0,     0,     0,    27,   524,   544,     0,   534,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
      38,    36,     0,    84,     0,     0,     0,     0,     0,   239,
       0,   232,   225,   233,   226,   244,   242,   228,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   441,   445,   449,   462,   461,   471,   470,   214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   149,     0,
       0,     0,     0,     0,     0,   137,   133,   216,   183,    96,
      95,     0,     0,     0,     0,     0,     0,     0,     0,   539,
     106,     0,   118,     0,     0,    30,     0,     0,     0,   581,
     577,   574,   568,   566,   557,     0,     0,     0,    64,    59,
      60,    68,    69,   523,     0,   546,     0,   533,   530,     0,
      35,     0,    52,     0,     0,    40,    46,    42,     0,     0,
       0,     0,    88,     0,    87,     0,     0,     0,   227,   241,
     351,   230,     0,     0,     0,     0,   148,     0,     0,     0,
       0,     0,     0,   136,   132,     0,   166,   147,   167,   141,
       0,     0,   145,   153,   157,   135,   131,    94,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
     113,    32,    31,     0,   573,   565,     0,    72,     0,     0,
       0,   545,   532,     0,     0,   529,     0,     0,    48,    44,
       0,     0,     0,     0,     0,    86,     0,     0,     0,    90,
       0,   146,   140,     0,     0,   144,   152,   156,   134,   130,
     169,   139,   161,   165,   143,   151,   155,     0,   112,     0,
       0,     0,     0,    82,     0,    80,     0,     0,   114,     0,
      33,     0,    65,     0,     0,   547,   531,   528,     0,    51,
       0,     0,     0,     0,     0,     0,    39,    37,    85,    89,
       0,   138,   160,   164,   142,   150,   154,   168,   159,   163,
       0,     0,   115,    78,     0,     0,     0,    81,   117,    73,
      58,    67,   527,    53,     0,     0,    41,    47,    43,    83,
     158,   162,   116,     0,    77,    79,     0,    49,    45,   111,
      75
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    34,    35,    36,   315,   698,   699,   316,   538,    37,
     685,    38,    39,    40,    41,   532,   533,    42,   534,   535,
      43,    44,    45,    46,    47,   295,   296,   677,   509,    48,
      49,    50,    51,    52,   196,  1006,  1007,  1008,    53,    54,
      55,   205,   420,   641,   207,    56,    57,    58,   116,    60,
     106,   107,   108,   348,   567,   737,   350,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   252,   253,    74,
      75,    76,    77,    78,    79,    80,   125,   304,   198,   414,
      81,    82,    83,   317,    85,    86,    87,    88,    89,   391,
      90,    91,    92,   284,    93,    94,    95,    96,    97,    98,
     290,   137,   111,   717,   138,    99,   100,   321,   130,   131,
     307,   132,   133,   134
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -711
static const short int yypact[] =
{
    1481,   660,   129,  -711,  -711,   158,  1777,  -711,  1243,   558,
    2776,  3151,   395,    -1,    60,   161,  2776,  1777,   299,   199,
     652,   278,  5096,  -711,  1777,  1481,   628,   766,  1106,  2776,
    1367,   392,  1723,    46,   178,   259,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  -711,    47,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  1640,
     227,  3403,  3541,  3747,   298,  -711,  -711,   880,   350,   562,
     274,   286,  1132,  -711,   646,   347,  -711,  -711,  -711,  -711,
    -711,  -711,  1503,   316,  -711,  -711,  -711,  -711,  2225,   297,
     344,  -711,  4147,  -711,  -711,  -711,  -711,  -711,  -711,  -711,
    -711,   205,   439,  1917,   322,   403,  -711,  -711,  -711,   360,
      12,   430,   289,   244,   474,  3979,   721,   458,  -711,   435,
    -711,   743,   412,  1777,   432,  -711,  -711,   496,    13,  1777,
     464,  -711,  -711,   459,   505,  1623,    60,  -711,   559,   507,
     482,   515,   827,   748,   598,  4048,   925,   403,  -711,   507,
      25,   822,   845,  4073,    26,   600,   582,  1695,  1777,   578,
    3620,   742,  -711,   525,   532,  -711,  -711,   244,   370,  -711,
     244,   370,  -711,   446,  1201,  4095,  2297,   560,   572,   244,
     370,  -711,   743,  1743,   516,  1271,  4104,   551,  1529,    59,
     563,   568,  1889,   944,  1449,  4151,   594,    59,   604,   555,
     607,  2452,  2452,  -711,   610,   612,   605,   615,   623,   620,
    -711,  1481,   678,   688,   694,  -711,   912,  2461,   912,  2452,
     912,   912,   697,  3620,   742,  -711,   643,  2594,   706,  3620,
    2945,  3019,  3067,  2452,  3128,  4025,  2452,  2452,  2452,  2452,
    2452,  2452,  -711,   728,   745,  -711,  -711,  -711,  -711,  -711,
    -711,  2452,  1632,  2452,  1243,  1243,  1243,  -711,    22,  1120,
    4970,  1863,  4212,  -711,  2425,  -711,   676,  -711,   742,   683,
    -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  1777,   951,   424,   454,  -711,   741,   129,
    -711,   700,  1623,   693,   148,   703,   547,   469,   498,  1777,
     702,  1623,  -711,  1777,   701,   705,    32,   711,   717,  -711,
    1777,  1777,   270,   722,   746,   293,   751,   729,  -711,   102,
     787,   732,  1623,  1777,  1082,  1959,  4230,  1250,  1269,  1322,
     732,  1503,    27,  2029,  4256,    39,    41,    68,  1503,  1503,
     234,   747,   244,   370,  -711,  -711,  -711,  4903,   753,   752,
    -711,   -25,   756,   205,   162,  2176,  4274,   322,  -711,   982,
    1777,   742,  -711,   760,   743,  4988,  1099,  2403,  4322,  1529,
     767,   743,  5011,  1301,  2522,  4340,  1529,   769,   742,  -711,
     775,  -711,   244,  2641,  4366,  2371,  5029,   798,  3620,   742,
    -711,   778,  1007,  1475,  -711,   805,  1119,   789,  -711,  -711,
    2671,  4384,  5052,   841,  3620,   742,  -711,   788,   355,   815,
    -711,  -711,  -711,  1503,   792,  -711,   560,  -711,  -711,  2038,
     794,  -711,  1777,  -711,  -711,   624,   854,   671,   205,  2858,
    4432,   322,   244,   370,  -711,   322,   370,  -711,   322,   322,
    -711,   804,    77,   809,   982,   244,   370,  -711,  -711,   810,
      82,   828,   244,   370,  -711,   244,   370,  -711,   244,   370,
    -711,   370,  -711,   244,   370,  -711,   244,   370,  -711,   721,
     880,   721,   880,   350,   350,   562,   274,  -711,  -711,   286,
    2452,   560,    52,   347,  -711,  -711,   316,  -711,  1307,  2885,
    4450,  2740,  1321,  1337,  -711,  -711,   982,   830,  -711,   800,
    -711,   833,    14,  -711,  -711,  -711,   856,   901,   902,     6,
    1623,  1623,   871,  -711,   509,    51,   870,  -711,  -711,   496,
     873,   913,   277,   874,  -711,  -711,   875,  -711,     9,  3359,
     918,   879,    89,  -711,   285,  -711,  -711,  2203,   883,    17,
    -711,   936,  -711,   937,   979,  -711,  1386,  1460,   900,  1503,
      70,    78,  1503,  1503,  1503,   906,   907,    62,   899,   719,
    1777,   920,  -711,  3620,   904,  4929,   279,   905,  -711,  -711,
     912,   552,   346,   424,   454,   205,   166,  3182,  4476,   322,
    -711,   982,  -711,   244,  3334,  4494,  2371,   742,  -711,   916,
    1545,  1758,  -711,  -711,  -711,   244,  3469,  4542,  2371,   742,
    -711,   932,  1236,  1405,  -711,  -711,   982,  2010,  2073,   244,
     370,  -711,  -711,   958,   240,   959,   982,  -711,  -711,  1225,
     179,  1147,  3498,  4560,   251,  1022,  -711,  1581,  1837,   244,
     370,  -711,  -711,   960,   320,   961,   982,  -711,  -711,   968,
    -711,   972,   984,  -711,    59,  1623,   996,   573,   993,   837,
     995,   424,   454,  -711,  4586,  -711,  -711,  4604,  -711,   560,
    1777,  -711,  1343,  1385,  -711,  -711,  -711,  3046,  1777,  -711,
    1038,  -711,  1777,  -711,  -711,  -711,   148,   998,  -711,  -711,
    1623,    63,  1001,  1005,  2776,    55,  1777,  -711,  1006,   496,
    -711,   496,   496,  1055,   159,  1017,  -711,  -711,  2333,  -711,
    1043,  1777,  1623,    29,  1623,  1028,  4947,  1029,  -711,  1040,
    1050,  1045,  -711,  -711,  2203,  1094,  1098,  -711,    11,  -711,
    1066,  1623,  1070,  1503,  1503,  1078,  1080,  1086,  1623,  1623,
    1777,  1623,   115,   127,  1053,  -711,  1777,  1081,   321,  1777,
    1777,  1088,  -711,   337,  1777,   322,   860,  1262,  -711,  3547,
    4665,   990,  1071,  1291,  -711,  3661,  4683,  1164,  -711,   912,
     685,   413,   424,   454,  -711,  2088,  2103,  -711,   982,  -711,
    -711,  -711,  1996,  2196,  -711,   982,  -711,  -711,  -711,  -711,
    -711,  4709,  -711,   253,  1332,  3739,  4727,   325,  1171,  1243,
     335,  3757,  4775,   365,   444,   452,  1243,  1243,  -711,  -711,
    -711,  4795,  -711,  1503,  -711,  2038,  -711,  1777,  -711,  -711,
    1623,  1623,  1102,   853,   139,  1103,   986,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,   833,  -711,  1107,  -711,  -711,  1777,
    1623,   156,  1623,  1114,  1122,  2776,  -711,  1121,  1129,   496,
    -711,  1134,   159,  -711,  -711,  -711,    36,  -711,  1154,  1623,
    -711,  1623,  1623,  1623,  1623,  -711,  1135,  1185,  1193,  -711,
       5,   218,  1623,  1231,  1623,  1149,  1158,  1623,  1623,  1623,
    1244,  1247,  1160,  -711,  1777,  1623,  1777,  1623,   168,  -711,
    3620,  -711,  3620,  -711,  1162,  -711,  1777,  3620,  1167,  1019,
    3911,  4817,  1131,  1183,  1510,  1212,  3933,  4837,  1444,  1652,
    1664,   322,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  1243,
     467,  3953,  4885,   538,   561,   570,  1243,  1243,   884,  1243,
     571,   580,  1243,  1243,  1243,   884,   884,  -711,  -711,  -711,
    -711,  1623,   172,  1166,  1777,  1623,   182,   209,  1176,  -711,
    -711,  1182,  -711,  1777,  1623,  -711,  1623,  1623,  1190,  -711,
    -711,  1188,   159,  1191,  -711,  1249,  1623,  1202,  -711,  1279,
    -711,  1281,  -711,  -711,  1270,  -711,   419,  -711,  -711,  1219,
    -711,  1227,  1314,  1623,  1623,  1319,  1325,  1342,  1260,  1288,
    1623,  1290,  -711,  1292,  -711,  1777,  1623,   354,  -711,  -711,
     368,  -711,  1550,  1792,  1815,  1858,   884,  1243,   591,   593,
    1243,  1243,  1243,   884,   884,  1243,  -711,  -711,  -711,   884,
    1243,  1243,   884,   884,   884,  -711,  -711,  -711,  1777,  1623,
     211,  1299,  -711,  1777,  1623,  1777,  1623,   237,  1623,  1313,
    -711,  -711,  -711,  1623,  -711,   108,  1316,  -711,  1623,  1318,
    1328,  -711,  -711,    53,   485,  -711,  1623,  1333,  1362,  1397,
    1340,  1341,  1352,  1623,  1623,  -711,  1623,  1623,  1355,  -711,
    3620,  -711,   884,  1243,  1243,   884,   884,   884,  -711,  -711,
     884,  -711,   884,   884,  -711,  -711,  -711,  1357,  -711,  1777,
    1623,  1623,  1361,  -711,  1363,  -711,  1777,  1623,  -711,  1623,
    -711,  1623,  -711,  1623,  1623,  -711,  -711,  -711,  1360,  -711,
    1623,  1368,  1370,  1623,  1623,  1623,  -711,  -711,  -711,  -711,
    1623,  -711,   884,   884,  -711,  -711,  -711,  -711,  -711,  -711,
    1623,  1375,  -711,  -711,  1623,  1623,  1376,  -711,  -711,  -711,
    -711,  -711,  -711,  -711,  1623,  1623,  -711,  -711,  -711,  -711,
    -711,  -711,  -711,  1623,  -711,  -711,  1623,  -711,  -711,  -711,
    -711
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -711,    -2,  -711,  -495,  2841,  -711,   638,  -494,  -711,  -711,
    -711,  -711,  1455,  -711,  -711,  -711,   933,  -711,  -711,   938,
    -711,  -711,  -711,  1426,  -711,  -293,  -137,   653,   807,  -711,
    -711,  -711,  -711,  -711,  1452,  -183,    56,  -711,  -711,  -711,
    -711,  -711,   855,  1465,  -711,  -711,  -711,  2942,     0,  3514,
     287,   739,  1047,  -175,  -339,  -118,  -711,  -711,  -711,    49,
    -169,   528,  1264,  1261,  1259,   -12,  -711,  -711,  1267,  -182,
    1266,    16,   869,  -711,  1902,  -711,    21,  -503,   -28,   886,
    2344,  1273,  2857,     4,  -711,  -711,  -711,  -711,  2721,  2255,
    -114,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,  -711,
    -480,    15,  -711,  -710,  1399,  -711,  -711,  1388,  -307,  -658,
    -132,  -305,  -116,  -297
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -486
static const short int yytable[] =
{
      59,   104,   313,   512,    84,   209,   397,   527,   861,   520,
     564,   305,   308,   687,   411,   520,   177,   110,   146,   341,
     154,   669,   671,   166,   118,    59,   168,   171,   176,    84,
     180,   188,   188,   558,   697,   700,   840,   331,   338,   549,
     858,   288,   349,   670,   857,   165,   715,   358,   441,     1,
     437,   552,   126,   553,   449,   683,   660,   212,   848,   834,
     127,   121,   565,    23,   462,   955,     8,   470,   472,   213,
     566,   126,   482,    12,   684,   169,   172,   255,   835,   181,
     554,   395,   723,   519,   214,   121,   135,    23,   264,   128,
     724,   695,   857,   705,   967,   396,   675,   201,   706,   109,
     859,   676,   730,   829,   707,   349,   860,   289,   306,   289,
     358,   349,   716,   159,   222,   159,   849,   160,   223,   160,
     161,   224,   361,   956,    26,    27,   202,   222,    29,   387,
      30,   223,   646,   388,   378,    59,   389,   114,   115,   203,
      33,   539,  1096,   327,   188,   188,   963,   965,   136,   731,
     830,   335,   188,   188,   358,   874,   403,   343,   387,   127,
     404,   357,   388,   405,   565,   587,   403,   876,   109,   565,
     404,   177,   654,   599,   369,   376,   523,   657,   210,   934,
     177,   352,   540,   385,   954,   188,   188,   506,   128,   416,
     177,   789,   385,   541,   188,   188,   943,   112,   126,   507,
     139,   569,   875,   697,   700,   758,   344,   682,   985,   424,
     127,    59,  1018,   613,   877,    84,   431,   433,   435,   436,
     438,   439,  1023,   696,   357,   520,   935,   446,   508,   633,
     453,   456,   459,   461,   464,   467,   469,   471,   149,   128,
     687,   481,   570,   944,   443,   580,   759,   358,   177,  1025,
     451,  1079,   734,   571,   572,   986,  1044,   760,   761,  1019,
     491,   188,   188,   796,   358,   909,   434,   159,   357,  1024,
     349,   160,   484,   126,   161,   358,   447,  1086,   227,   454,
     457,   460,     1,   465,   468,   127,   349,    61,   647,   709,
     650,   358,    59,   159,   710,   157,  1026,   160,  1080,     8,
     711,    59,   530,   548,   502,   500,    12,   968,   531,   126,
     555,   556,    61,   969,   128,   228,   126,   156,   113,   229,
      23,   127,    59,   557,  1087,   369,   376,   565,   692,   211,
     580,  1095,   159,   369,   376,   781,   160,   916,   142,   222,
      23,   159,   815,   223,   939,   160,   224,   919,   161,   230,
     128,   240,   526,   177,   812,   188,   188,    26,    27,   579,
     177,   357,   241,    30,   256,   586,   347,   188,   188,   742,
     114,   115,   598,    33,   188,   188,   292,   922,   357,   143,
     293,   294,   580,   369,   376,   752,   610,    23,   690,   357,
     144,   145,   520,    33,   267,     1,   624,   841,   881,   883,
     369,   376,   630,   688,   883,   357,   386,   565,   565,   615,
     222,   258,     8,   222,   223,   801,   882,   223,    11,    12,
     224,   217,    61,   159,   565,   635,   753,   160,   236,   237,
     361,   182,   887,    23,   126,   611,   754,   755,   756,   268,
      33,   565,     1,   387,   579,   637,   127,   388,   287,   880,
     389,   631,   752,   222,    23,   565,   923,   223,   222,     8,
     378,   808,   223,  1060,   924,    11,    12,   580,   659,   291,
      26,    27,   183,   358,   300,   128,    30,     1,   121,   997,
      23,   184,   129,   185,   186,   358,    33,   687,   299,   369,
     376,   228,   580,   753,     8,   229,   579,   157,    61,   301,
      11,    12,   580,   903,   755,   756,   933,    33,  1042,   938,
      59,    59,   387,   121,  1043,    23,   388,    26,    27,   202,
     386,   722,   580,    30,   725,   726,   727,   303,   285,    59,
     114,   115,   387,    33,   159,   126,   388,    59,   160,   389,
     403,   713,   403,   362,   404,   841,   404,   405,   126,   402,
    1000,   310,    26,    27,   202,   159,   311,   387,    30,   160,
     127,   388,   361,   297,   319,   114,   115,   386,    33,   322,
     745,   751,   757,  1001,  1097,   837,   838,   188,   188,    61,
    1098,   579,  1002,  1010,   369,   376,   403,   357,    61,   128,
     404,   746,  1011,    23,    20,   119,   369,   376,   681,   357,
     312,     1,   320,  1063,   387,  1064,   579,   918,   388,    61,
     323,   389,   339,   390,   925,   926,   579,   346,     8,   787,
     359,   793,   188,   188,    11,    12,   222,   360,   238,   239,
     223,     1,   747,   378,   511,   251,   579,   182,   293,    23,
     394,   748,   381,   749,   750,    59,    33,   527,   883,   387,
     413,   883,   398,   388,   580,   520,   389,   399,   403,   387,
     811,   580,   404,   388,   293,   405,   587,   167,   403,    23,
     254,   255,   404,   340,   294,   599,    26,    27,   183,   387,
      59,   403,    30,   388,   410,   404,   587,   328,   599,   185,
     186,   150,    33,    23,   412,   865,   866,   415,    59,   101,
     419,    23,    59,   417,    59,   418,    26,    27,   421,   953,
     422,   645,    30,   423,    59,   293,   294,   425,   855,   114,
     115,    59,    33,   951,   746,   426,    23,   996,    59,    59,
     696,    59,   151,   427,  1003,  1004,   440,  1009,   444,    62,
    1012,  1013,  1014,   152,   153,   448,    33,   892,   477,   188,
     188,   102,   103,   898,    33,   188,   188,   478,   126,   901,
     751,   757,   649,   294,    62,   747,   473,   474,   579,     1,
     127,   216,   217,   495,   902,   579,   749,   750,   496,    33,
     501,   353,   505,    23,   913,   188,   188,   324,   503,    23,
     510,   369,   376,   514,   157,   158,   517,    61,    61,   128,
     518,   218,   219,   220,   221,   170,   521,    23,   733,   222,
      59,    59,   522,   223,   529,  1062,    61,   528,  1065,  1066,
    1067,   536,   354,  1070,    61,   537,   542,   543,  1072,  1073,
      59,   159,    59,   355,   356,   160,    33,   612,   559,   325,
     326,   619,    33,   562,    26,    27,   568,   563,     1,    59,
      30,    59,    59,    59,    59,   581,   593,   114,   115,   605,
      33,   332,    59,    23,    59,     8,   402,    59,    59,    59,
     606,    11,    12,   616,    62,    59,   126,    59,   626,   122,
     632,  1112,  1113,   636,   182,   140,    23,   640,   127,   643,
     369,   376,   126,   648,   653,   668,   369,   376,   178,   655,
     656,   197,   197,   403,   127,   638,   395,   404,  1005,   255,
     405,   369,   376,   333,   334,   159,    33,   128,   658,   160,
     396,     1,   161,    26,    27,   183,   814,   667,   289,    30,
     231,    59,    61,   128,   336,    59,   185,   186,     8,    33,
     673,   674,   932,   672,    59,    12,    59,    59,   159,   582,
      62,   428,   160,    23,     1,   161,    59,   113,   680,    23,
     232,   233,   234,   235,   691,   686,   704,    61,   689,   693,
     694,     8,   197,    59,    59,   718,   719,    11,    12,   714,
      59,  1015,  1016,   720,   197,    61,    59,   721,   732,    61,
     113,    61,    23,   728,   729,   402,    26,    27,   701,   739,
     744,    61,    30,   429,   430,   702,    33,   736,    61,   114,
     115,   768,    33,   222,   197,    61,    61,   223,    61,    59,
     224,   575,   197,    23,    59,   126,    59,   775,    59,    26,
      27,    62,   403,    59,   797,    30,   404,   127,    59,   405,
      62,   406,   114,   115,   197,    33,    59,    63,   780,   782,
     800,   802,  1061,    59,    59,   197,    59,    59,   386,  1068,
    1069,    62,   576,   803,   197,  1071,   128,   805,  1074,  1075,
    1076,   807,    63,   577,   578,   937,    33,   824,   222,   592,
      59,    59,   223,   810,   813,   224,   816,    59,   827,    59,
     831,    59,   832,    59,    59,   387,   617,    61,    61,   388,
      59,   836,   389,    59,    59,    59,   839,   159,   764,     1,
      59,   160,   842,   845,   361,   851,   852,    61,  1111,    61,
      59,  1114,  1115,  1116,    59,    59,  1117,   853,  1118,  1119,
     701,   197,   854,   856,    59,    59,    61,   857,    61,    61,
      61,    61,   878,    59,   242,   173,    59,    23,   243,    61,
     386,    61,   244,   862,    61,    61,    61,   864,   620,   159,
      23,   594,    61,   160,    61,   867,   161,   868,  1140,  1141,
     159,   157,   158,   869,   160,   886,   880,   361,   245,   246,
     247,   248,    63,   917,    26,    27,   790,   387,    23,   931,
      30,   388,   936,   957,   587,   197,   588,   174,   175,   621,
      33,   946,   676,   197,     1,   249,   250,   251,   159,   947,
     622,   623,   160,    33,   964,   161,   949,   487,    61,   222,
     767,     8,    61,   223,   950,   197,   378,    11,    12,   952,
     716,    61,   966,    61,    61,   971,   973,   197,   791,   792,
     364,    33,    23,    61,   197,   974,     1,   980,   978,    62,
      62,   979,   222,   197,   604,  1020,   223,   988,    63,   224,
      61,    61,   991,     8,   783,  1027,    23,    61,    62,  1028,
     197,   387,   769,    61,     1,   388,    62,  1033,   389,    26,
      27,   365,   113,  1034,    23,    30,  1035,   386,  1036,  1038,
     366,     8,   367,   368,  1039,    33,  1040,    11,    12,   197,
     159,   889,   771,    23,   160,   784,    61,   361,  1045,  1041,
     182,    61,    23,    61,  1046,    61,   785,   786,  1047,    33,
      61,    26,    27,  1050,   387,    61,   776,    30,   388,  1051,
     895,   389,    23,    61,   114,   115,   844,    33,   222,    63,
      61,    61,   223,    61,    61,   378,  1052,  1053,    63,    26,
      27,   183,   402,   890,   891,    30,    33,   387,   157,   197,
     392,   388,   185,   186,   389,    33,  1101,    61,    61,    63,
       1,   910,   386,    23,    61,  1054,    61,  1056,    61,  1057,
      61,    61,   896,   897,    62,    33,  1081,    61,   402,   403,
      61,    61,    61,   404,   386,   159,   599,    61,   600,   160,
    1089,  1102,   361,  1091,   661,  1093,   179,    61,    23,   387,
     403,    61,    61,   388,   404,  1094,   389,   405,   665,    62,
    1100,    61,    61,   911,   912,   403,    33,  1103,  1104,   404,
      61,   387,   405,    61,   666,   388,   402,    62,   587,  1105,
     820,    62,  1110,    62,  1120,    26,    27,   197,  1124,  1132,
    1125,    30,     1,    62,   197,  1134,   402,  1135,   114,   115,
      62,    33,  1143,  1146,   120,   708,   197,    62,    62,     8,
      62,   215,   712,   403,   387,    11,    12,   404,   388,   940,
     599,   587,   821,   826,     1,   204,     2,     3,   182,     4,
      23,     5,   197,   403,     6,   777,   806,   404,   206,     7,
     405,     8,   476,     9,   475,    10,     1,    11,    12,    13,
     479,    14,    15,    16,    17,    18,    19,    20,    21,   480,
      22,   483,    23,     8,    24,   804,   402,    26,    27,   183,
      12,   485,   222,    30,   774,   318,   223,   330,   408,   378,
     185,   186,   121,    33,    23,     0,     0,     0,   403,    62,
      62,    25,   404,   833,     0,   599,     0,    63,    63,    26,
      27,    28,    29,   403,   618,    30,     0,   404,     0,    62,
     405,    62,    31,    32,     0,    33,    63,     0,     0,   216,
     217,    26,    27,   202,    63,     0,     0,    30,    62,     0,
      62,    62,    62,    62,   114,   115,   386,    33,   403,   770,
       0,    62,   404,    62,     0,   405,    62,    62,    62,   218,
     219,   220,   221,     0,    62,     0,    62,   222,     0,   197,
       0,   223,     0,     0,   224,   197,     1,     0,     2,     3,
       0,     4,   386,   387,   769,     0,     6,   388,   387,   904,
     389,     7,   388,     8,   242,   587,     0,     0,   243,    11,
      12,     0,   244,    14,    15,   197,    17,    18,    19,     0,
       0,   197,    22,     0,    23,     0,    24,     0,     0,   387,
      62,   798,     0,   388,    62,     0,   587,     0,   245,   246,
     247,   248,     0,    62,     0,    62,    62,     0,     0,     0,
     216,   217,    63,   314,     0,    62,     0,     0,     1,     0,
       0,    26,    27,    28,   948,   249,   250,    30,     0,     0,
       0,     0,    62,    62,    31,    32,     0,    33,     0,    62,
     218,   219,   220,   221,     0,    62,     1,    63,   222,     0,
       0,     0,   223,     0,   342,   224,    23,   225,     0,     0,
     387,     0,   776,     8,   388,    63,     1,   389,     0,    63,
      12,    63,   403,     0,   777,     0,   404,     0,    62,   405,
     197,    63,   182,    62,    23,    62,   197,    62,    63,     0,
       0,     0,    62,    26,    27,    63,    63,    62,    63,    30,
       1,   197,   382,     0,    23,    62,   114,   115,     0,    33,
       0,     0,    62,    62,     0,    62,    62,     8,     0,     0,
       0,    26,    27,   192,    12,     0,     0,    30,     0,   402,
       0,     0,     0,   193,   194,   195,   113,    33,    23,    62,
      62,    26,    27,     0,     0,     0,    62,    30,    62,     0,
      62,     0,    62,    62,   383,   384,     0,    33,     0,    62,
       0,     0,    62,    62,    62,     0,   403,   770,     0,    62,
     404,     0,     0,   405,     0,    26,    27,    63,    63,    62,
       0,    30,     0,    62,    62,     0,     1,     0,   114,   115,
       0,    33,     0,    62,    62,     0,     0,    63,     0,    63,
     403,   905,    62,     8,   404,    62,     0,   599,   402,    11,
      12,     0,     1,     0,     0,     0,    63,     0,    63,    63,
      63,    63,   182,   387,    23,   906,     0,   388,   117,    63,
     587,    63,     0,   124,    63,    63,    63,     0,     0,   141,
       1,     0,    63,     0,    63,   403,   164,   799,   382,   404,
      23,     0,   599,   189,     0,   208,     0,     8,     0,     0,
       0,    26,    27,   183,    12,     0,   403,    30,   907,     0,
     404,     0,   492,   599,   185,   186,   121,    33,    23,     0,
       0,     0,     1,     0,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,     0,    63,     8,
     400,   401,    63,    33,     0,    11,    12,     0,     0,     0,
       0,    63,     0,    63,    63,    26,    27,   202,   364,     0,
      23,    30,     0,    63,   189,     0,     0,   286,   114,   115,
       0,    33,     0,     0,     0,     0,   189,     0,     0,     0,
      63,    63,     0,     0,     0,   302,     0,    63,     0,     0,
       0,   309,     1,    63,     0,     0,     0,    26,    27,   365,
       0,     1,     0,    30,     0,     0,   189,   386,   546,     8,
     367,   368,     0,    33,   189,    11,    12,     0,     8,     0,
     345,   386,   351,     0,     0,    12,    63,     0,   364,     0,
      23,    63,     0,    63,     0,    63,   189,   113,     0,    23,
      63,     0,     0,     0,   387,    63,   906,   189,   388,   201,
       0,   587,     0,    63,     0,     0,   189,     0,   387,   778,
      63,    63,   388,    63,    63,   587,     0,    26,    27,   365,
       0,     0,     0,    30,     0,     0,    26,    27,   550,     0,
     367,   368,    30,    33,   402,   442,     0,    63,    63,   114,
     115,   450,    33,     0,    63,     0,    63,     0,    63,   386,
      63,    63,     0,     0,     0,     0,     0,    63,     0,     0,
      63,    63,    63,     0,   402,     0,     0,    63,     0,     0,
       0,   403,   779,   189,     0,   404,     0,    63,   599,     0,
       0,    63,    63,     0,     0,     0,   387,   904,     0,     1,
     388,    63,    63,   587,     0,   497,   499,     0,     0,     0,
      63,   403,   905,    63,     0,   404,     8,     0,   599,     0,
       0,   513,    11,    12,     0,   516,     1,     0,     2,     3,
       0,     4,   524,   525,     0,   182,     6,    23,     0,     0,
       0,     7,     0,     8,     0,   545,     0,   189,     1,    11,
      12,     0,     0,    14,    15,   189,    17,    18,    19,     0,
       0,     0,    22,     0,    23,     8,    24,   402,     0,   561,
       0,    11,    12,     0,    26,    27,   183,   189,     0,     0,
      30,     0,   516,     0,   259,   573,    23,   185,   186,   189,
      33,     0,     0,     0,     0,     0,   189,   163,     0,     0,
       0,    26,    27,    28,   403,   189,   907,    30,   404,     0,
     614,   599,     0,     0,    31,    32,     0,    33,     0,     0,
       0,     0,   189,    26,    27,   260,   634,     0,     0,    30,
       0,     0,     0,     0,   226,     0,   261,   262,     0,    33,
       0,   642,     0,     0,   644,     0,     0,     0,     0,     0,
       0,   189,     0,     0,     0,     0,     1,     0,     2,     3,
       0,     4,     0,     5,     0,   269,     6,   216,   217,     0,
       0,     7,     0,     8,     0,     9,     0,    10,     0,    11,
      12,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    22,     0,    23,   190,    24,   218,   219,   220,
     221,     0,     0,     0,     0,   222,     0,     0,     0,   223,
       0,   189,   378,     0,   379,     0,     0,   163,     0,     0,
       0,   226,   843,     0,     0,   163,     1,     0,     0,   226,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,   216,   217,     8,    31,    32,     0,    33,   363,    11,
      12,   380,   703,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   182,   226,    23,     0,   190,     0,   407,     0,
       0,   218,   219,   220,   221,     1,     0,     0,   190,   222,
       0,     0,   735,   223,     1,   738,   378,   741,   743,     0,
       0,     0,     0,     0,     0,   216,   217,     0,     0,   189,
       0,    26,    27,   183,     0,     0,   189,    30,   190,     0,
       0,   113,   590,    23,   185,   186,   190,    33,   189,     0,
     432,     0,    23,     0,     0,   218,   219,   220,   221,     0,
       0,     0,     0,   222,   163,     0,     0,   223,   190,   226,
     224,     0,   494,     0,   189,     1,     0,     0,     0,   190,
      26,    27,     0,     0,     0,     0,    30,     0,   190,    26,
      27,     0,     8,   114,   115,    30,    33,     0,    11,    12,
       0,     0,   114,   115,     0,    33,   743,     0,     0,   743,
       0,   182,   819,    23,     0,     0,     0,     0,     0,     0,
     516,     0,     0,     0,   825,     0,     0,     0,     0,   363,
       0,     0,   380,     0,   407,     0,     0,   363,   516,     0,
     380,     0,   407,     0,     0,     0,     0,     1,     0,     0,
      26,    27,   183,   846,     0,   190,    30,     0,   703,     0,
       0,   602,     0,   185,   186,     0,    33,     0,     0,   163,
       0,   589,     0,     0,   226,     0,   163,     0,   601,     0,
       0,   226,   872,   445,     0,    23,     0,   363,   879,     0,
     380,   884,   885,     0,     1,     0,   888,     0,   407,     0,
       0,   189,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     8,     0,     0,   407,     0,     0,    11,    12,   190,
       0,     0,    26,    27,     1,     0,     0,   190,    30,     0,
     364,     0,    23,   743,     0,   114,   115,   189,    33,     0,
       0,     8,     0,   189,     0,     0,     0,    11,    12,   190,
       0,     0,     0,   743,     0,     0,     0,   642,     0,   928,
     364,   190,    23,     0,     0,     0,     0,     0,   190,    26,
      27,   365,     0,     0,     0,    30,     0,   190,     0,     0,
     607,   941,   367,   368,     0,    33,     0,     0,     0,   148,
       0,   155,     0,   363,   190,     0,   380,     0,   407,    26,
      27,   365,   191,   200,     0,    30,     0,     0,     0,     0,
     627,     0,   367,   368,     0,    33,     0,     0,     0,     0,
       0,     0,     0,   190,     0,     0,   981,     0,   983,     1,
       0,     0,   987,     0,   987,     0,     0,     0,   989,   990,
     216,   217,   189,     0,     0,     0,     8,     0,   189,     0,
       0,   589,   601,    12,     0,   589,   601,     0,     0,   266,
       0,     0,     0,   189,     0,   121,     0,    23,     0,     0,
     218,   219,   220,   221,     0,     0,     0,     0,   222,     0,
       0,     0,   223,   190,     0,   378,  1021,   664,   363,     0,
       0,   380,     0,     0,     0,  1029,   407,     0,     0,     0,
     363,     0,     0,   380,    26,    27,     0,     0,   407,     0,
      30,     1,   589,   601,     0,   191,   200,   114,   115,     0,
      33,     0,     0,   191,   200,   163,     0,     0,     8,   226,
       0,     0,   589,   601,    11,    12,     0,  1058,     1,   199,
     199,     0,     0,     0,     0,   370,   377,   121,     0,    23,
       0,     0,     0,     0,     0,     8,   191,   200,     0,     0,
       0,    11,    12,     0,     0,   191,   200,   589,   601,     0,
    1077,   190,     0,     0,   364,  1082,    23,  1084,   190,     0,
       0,     0,     0,     0,     0,     0,    26,    27,   202,   257,
     190,     0,    30,     0,     0,   265,     0,   651,     1,   114,
     115,     0,    33,     0,     0,     0,     0,     0,     0,     0,
     199,     0,   990,    26,    27,   365,   190,     0,     0,    30,
       0,     0,   199,   187,   662,     0,   367,   368,     0,    33,
       0,  1121,   191,   200,   452,     0,    23,     0,  1126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   199,     0,     0,     0,   226,   163,     0,     0,
     199,   823,   226,     0,     0,     0,     0,     0,     0,     0,
     589,   601,     1,    26,    27,     0,     0,   589,   601,    30,
     263,     0,   199,     0,     0,     0,   114,   115,   163,    33,
       0,     0,   226,   199,   187,   363,   370,   377,   380,     1,
     407,     0,   199,     0,   370,   377,   187,     0,   455,     0,
      23,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       1,     0,    11,    12,     0,     0,   191,   200,     0,     0,
       0,     0,     0,     0,     0,   121,   187,    23,   191,   200,
       0,     0,     0,   190,   187,   191,   200,    26,    27,   190,
       0,     0,     0,    30,   370,   377,   458,     0,    23,     0,
     114,   115,     0,    33,     0,   486,   187,   625,     0,   199,
       0,   370,   377,     0,    26,    27,   202,   187,     0,   190,
      30,     1,     0,   504,     0,   190,   187,   114,   115,     0,
      33,     0,   515,     0,   363,    26,    27,   380,     0,   407,
     363,    30,     0,   380,     1,   407,     0,     0,   114,   115,
       0,    33,     0,   544,     0,   363,     0,   463,   380,    23,
     407,     8,     0,     0,     0,   589,   601,     0,    12,     0,
       0,   123,     0,   199,     0,     1,     0,     0,   199,     0,
     113,   199,    23,     0,     0,   199,   199,     0,     0,     0,
       0,     0,     8,   187,     0,     0,    26,    27,    11,    12,
     370,   377,    30,   199,     0,     0,     0,     0,     0,   114,
     115,   182,    33,    23,     0,   199,   498,     0,     0,    26,
      27,     0,   199,     0,   190,    30,     0,     0,     0,     0,
     190,   199,   114,   115,     0,    33,     0,   589,   601,   589,
     601,     0,     0,   589,   601,   190,     0,     0,   199,     0,
      26,    27,   183,     0,     0,     0,    30,   187,     0,     0,
     639,   762,     0,   185,   186,   187,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,     0,   370,   377,     0,     0,     0,   187,   191,   200,
       0,     0,     0,     0,     0,   370,   377,     0,     0,   187,
       0,     0,     0,     0,     0,     0,   187,   370,   377,     0,
       0,     0,     0,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
     788,     0,   187,   191,   200,     0,     0,   199,     0,     0,
       0,   678,   679,     0,     8,     0,     0,     0,     0,     0,
      11,    12,     1,     0,     2,     3,     0,     4,     0,     5,
       0,   187,     6,   364,     0,    23,     0,     7,     0,     8,
       0,     9,     0,    10,     0,    11,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,     0,
      23,     0,    24,     0,     0,     0,   199,     0,     0,   199,
     199,   199,    26,    27,   365,     0,     0,     0,    30,     0,
       0,     0,     0,   765,     0,   367,   368,     0,    33,     0,
       0,   187,     0,     0,     0,   199,     0,    26,    27,    28,
      29,     0,   199,    30,     0,     0,     0,     0,     0,     0,
      31,    32,     0,    33,   199,     0,  -483,  -483,  -483,  -483,
    -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,     0,
     191,   200,     1,     0,     0,     0,   191,   200,     0,     0,
     199,   370,   377,     0,     0,     0,   809,     0,     0,     8,
    -483,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,     1,     0,     0,     0,     0,   191,   200,   364,     0,
      23,     0,   370,   377,     0,   105,     0,     0,     8,   187,
       0,   828,     0,     0,    11,    12,   187,     0,     0,     0,
       0,     0,   147,     0,   147,     0,     0,   182,   187,    23,
       0,     0,     0,   847,     0,   850,     0,    26,    27,   365,
       1,     0,     0,    30,     0,     0,     0,     0,   772,     0,
     367,   368,   863,    33,   187,     0,     0,     8,     0,   870,
     871,     0,   873,    11,    12,     0,    26,    27,   183,     0,
     199,   199,    30,     0,     0,     0,   182,   794,    23,   185,
     186,     0,    33,     0,  -484,  -484,  -484,  -484,  -484,  -484,
    -484,  -484,  -484,  -484,  -484,  -484,  -484,   199,     0,   822,
       0,   370,   377,   199,     0,     0,     0,   370,   377,     0,
       0,     0,     0,     1,     0,    26,    27,   183,  -484,     0,
       0,    30,   370,   377,     0,     0,   893,     0,   185,   186,
       8,    33,     0,   199,     0,     0,     0,    12,     0,   199,
       0,   929,   930,     0,     0,     0,     0,   147,     0,   113,
     639,    23,     0,     0,     1,   147,     0,     0,     0,     0,
       0,   942,     0,   945,     0,   147,     0,     0,     0,     0,
       0,     8,     0,     0,     0,     0,     0,    11,    12,     0,
     958,   187,   959,   960,   961,   962,     0,   187,    26,    27,
     182,     0,    23,   970,    30,   972,     0,   347,   975,   976,
     977,   114,   115,     0,    33,     0,   982,     0,   984,     0,
       0,     0,     0,     0,     0,     0,     0,   187,     0,     0,
     147,     0,   147,   187,   147,   147,     0,     0,   147,    26,
      27,   183,     1,     0,     0,    30,     0,     0,   199,     0,
     899,     0,   185,   186,   199,    33,     0,     0,     0,     8,
       1,     0,     0,     0,     0,    11,    12,     0,     0,   199,
       0,     0,  1017,     0,     0,     0,  1022,     8,   182,     0,
      23,     0,   147,    11,    12,  1030,     0,  1031,  1032,     0,
       0,     0,     0,     0,     0,     0,   364,  1037,    23,     0,
    -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,  -485,
    -485,  -485,  -485,     0,  1048,  1049,     0,    26,    27,   183,
       0,  1055,     0,    30,     0,     0,     0,  1059,   914,     0,
     185,   186,   187,    33,  -485,    26,    27,   365,   187,     0,
       0,    30,     0,     0,     0,     0,   920,     0,   367,   368,
       0,    33,     0,   187,     0,     0,     0,     0,     0,     0,
    1078,     0,     0,     0,     0,  1083,     0,  1085,     0,  1088,
       0,     0,     0,   147,  1090,   147,     0,     0,     0,  1092,
       0,     0,     0,     0,     0,     0,     0,  1099,     0,     0,
       0,     0,   147,     0,  1106,  1107,     0,  1108,  1109,     0,
       0,     0,     0,   147,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     1,     0,     0,     0,     0,   147,
       0,  1122,  1123,     0,     0,     0,     0,     0,  1127,     0,
    1128,     8,  1129,     0,  1130,  1131,     1,    11,    12,     0,
       0,  1133,     0,     0,  1136,  1137,  1138,     0,     0,     0,
     364,  1139,    23,     8,     0,     0,     1,     0,   147,    11,
      12,  1142,     0,     0,     0,  1144,  1145,     0,     0,     0,
       0,     0,   364,     8,    23,  1147,  1148,     0,     0,    11,
      12,     0,     1,     0,  1149,     0,     0,  1150,     0,    26,
      27,   365,   364,     0,    23,    30,     0,     0,     0,     8,
     992,     0,   367,   368,     0,    33,    12,     0,     0,     0,
     147,    26,    27,   365,     0,     0,     0,    30,   121,     0,
      23,     0,   994,     0,   367,   368,     0,    33,     1,     0,
       0,    26,    27,   365,     0,     0,     0,    30,     0,     0,
       0,     0,   998,     0,   367,   368,     0,    33,     0,     0,
       0,     1,     0,     0,     0,     0,     0,    26,    27,   202,
       0,     0,     0,    30,   466,     0,    23,     0,     8,   298,
     114,   115,     0,    33,     0,    12,     1,     0,     0,     0,
       0,     0,     0,     0,   147,   147,   147,   182,     0,    23,
       0,     0,     0,     8,     0,   147,     0,     0,     1,     0,
      12,   147,     0,    26,    27,     0,     0,     1,     0,    30,
       0,     0,   182,   147,    23,     8,   114,   115,     0,    33,
     147,     0,    12,     0,     8,     0,    26,    27,   192,     0,
     147,    12,    30,   147,   371,   147,    23,     0,   329,   194,
     195,     0,    33,   182,     0,    23,     0,     0,     0,     0,
     147,    26,    27,   192,     1,     0,     0,    30,     0,     0,
       0,     0,     0,   337,   194,   195,     0,    33,     0,     0,
       0,     8,     0,    26,    27,   372,     0,     0,    12,    30,
       0,     0,    26,    27,   192,   373,   374,   375,    30,    33,
     182,     0,    23,     0,   393,   194,   195,     0,    33,     0,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,   192,     8,     1,   283,    30,     0,     0,     0,    12,
       0,   409,   194,   195,     0,    33,     0,     0,     0,     0,
       8,   182,     0,    23,     0,     0,     0,    12,     0,     1,
       0,   147,     0,     0,     0,     0,     0,   147,     0,   371,
       0,    23,     0,   147,   147,   147,     8,     1,     0,     0,
       0,     0,   147,    12,     0,     0,     0,     0,     0,   147,
      26,    27,   192,     0,     8,   371,    30,    23,   147,     0,
       0,    12,   493,   194,   195,     0,    33,     0,    26,    27,
     372,     0,     0,   182,    30,    23,     0,     0,     0,     0,
     547,   374,   375,     0,    33,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,   372,     0,     0,     0,
      30,     0,     8,     1,     0,     0,   551,   374,   375,    12,
      33,     0,    26,    27,   192,     0,     0,     0,    30,     0,
       8,   182,     0,    23,   574,   194,   195,    12,    33,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,    23,     0,     0,     0,     0,     8,     1,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      26,    27,   192,     0,     8,   371,    30,    23,     0,     0,
       0,    12,   591,   194,   195,     0,    33,     0,    26,    27,
     192,     0,     0,   371,    30,    23,     0,     0,     0,     0,
     603,   194,   195,     0,    33,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,   372,     0,     0,     0,
      30,     0,     8,     1,     0,     0,   608,   374,   375,    12,
      33,     0,    26,    27,   372,     0,     0,     0,    30,     0,
       8,   121,     0,    23,   628,   374,   375,    12,    33,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
       0,    23,     0,     0,     0,     0,     8,     1,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      26,    27,   202,     0,     8,   182,    30,    23,     0,     0,
       0,    12,   652,   114,   115,     0,    33,     0,    26,    27,
     372,     0,     0,   371,    30,    23,     0,     0,     0,     0,
     663,   374,   375,     0,    33,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,   192,     0,     0,     0,
      30,     0,     8,     1,     0,     0,   763,   194,   195,    12,
      33,     0,    26,    27,   372,     0,     0,     0,    30,     0,
       8,   371,     0,    23,   766,   374,   375,    12,    33,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   182,
       0,    23,     0,     0,     0,     0,     8,     1,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
      26,    27,   372,     0,     8,   113,    30,    23,     0,     0,
       0,    12,   773,   374,   375,     0,    33,     0,    26,    27,
     192,     0,     0,   113,    30,    23,     0,     0,     0,     0,
     795,   194,   195,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,     0,     0,     1,     0,
      30,     0,     0,   347,     0,     0,   817,   114,   115,     0,
      33,     0,    26,    27,     0,     8,     1,     0,    30,     0,
       0,   347,    12,     0,   818,   114,   115,     0,    33,     0,
       0,     0,     0,     8,   182,     0,    23,     0,     0,     0,
      12,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   182,     0,    23,     0,     0,     0,     0,     8,
       1,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    26,    27,   192,     0,     8,   113,    30,
      23,     0,     0,     0,    12,   894,   194,   195,     0,    33,
       0,    26,    27,   192,     0,     0,   182,    30,    23,     0,
       0,     0,     0,   900,   194,   195,     0,    33,     1,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     8,   347,     0,     1,   908,
     114,   115,    12,    33,     0,    26,    27,   192,     0,     0,
       0,    30,     0,     0,   371,     8,    23,   915,   194,   195,
       1,    33,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,    23,     8,     0,     0,
       1,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,   372,   371,     8,    23,    30,
       0,     0,     0,     0,    12,   921,   374,   375,     0,    33,
       0,     0,     0,    26,    27,     0,   371,     0,    23,    30,
       0,     0,   347,     0,     0,   927,   114,   115,     1,    33,
       0,     0,     0,     0,     0,    26,    27,   372,     0,     0,
       0,    30,     0,     0,     0,     8,     1,   993,   374,   375,
       0,    33,    12,     0,     0,    26,    27,   372,     0,     0,
       0,    30,     0,     8,   371,     0,    23,   995,   374,   375,
      12,    33,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,    23,     0,     0,     0,     0,     8,
       1,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    26,    27,   372,     0,     8,   113,    30,
      23,     0,     0,     1,    12,   999,   374,   375,     0,    33,
       0,    26,    27,     0,     0,     0,   113,    30,    23,     0,
     560,     1,     0,     0,   114,   115,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,   488,
       0,    23,     0,    30,     1,     0,   740,     0,     0,     0,
     114,   115,     0,    33,     0,    26,    27,   583,     0,    23,
       0,    30,     1,     0,   702,     0,     0,     0,   114,   115,
       0,    33,     0,     0,     0,     0,     0,     0,    26,    27,
     595,     0,    23,     0,    30,     1,     0,     0,     0,     0,
       0,   489,   490,     0,    33,     0,    26,    27,   609,     0,
      23,     0,    30,     0,     0,     0,     0,     0,     0,   584,
     585,     0,    33,     0,     0,     0,     0,     0,     0,    26,
      27,   629,     0,    23,     0,    30,     0,     0,     0,     0,
       0,     0,   596,   597,     0,    33,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
     114,   115,     0,    33,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,     0,   114,   115,     0,    33,   157,   158,  -482,
    -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,
    -482,  -482,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -482,   159,     0,     0,     0,   160,     0,
       0,     0,     0,   162
};

static const short int yycheck[] =
{
       0,     1,   134,   296,     0,    33,   189,   312,   718,   306,
     349,   127,   128,   516,   197,   312,    28,     2,    18,   156,
      20,   501,   502,    25,     8,    25,    26,    27,    28,    25,
      30,    31,    32,   340,   529,   529,   694,    12,    12,    12,
      29,    29,   160,    29,    39,    24,    29,   161,   223,     3,
     219,    12,    39,    12,   229,     4,     4,    10,    29,     4,
      51,    39,    87,    41,   233,    29,    20,   236,   237,    22,
      95,    39,   254,    27,    23,    26,    27,    25,    23,    30,
      12,    22,    12,    51,    37,    39,    87,    41,    88,    80,
      12,    82,    39,     4,    89,    36,    90,    51,     9,    39,
      89,    95,    40,    40,    15,   223,    95,    95,    95,    95,
     224,   229,    95,    88,    88,    88,    87,    92,    92,    92,
      95,    95,    95,    87,    78,    79,    80,    88,    81,    88,
      84,    92,   425,    92,    95,   135,    95,    91,    92,    93,
      94,    39,    89,   143,   144,   145,   856,   857,    88,    87,
      87,   151,   152,   153,   268,    40,    88,   157,    88,    51,
      92,   161,    92,    95,    87,    95,    88,    40,    39,    87,
      92,   183,    95,    95,   174,   175,   308,    95,     0,    40,
     192,   160,    80,   183,   842,   185,   186,    39,    80,   201,
     202,    12,   192,    91,   194,   195,    40,    39,    39,    51,
      39,    39,    87,   698,   698,    39,   157,   514,    40,   211,
      51,   211,    40,   388,    87,   211,   216,   217,   218,   219,
     220,   221,    40,   528,   224,   522,    87,   227,    80,   404,
     230,   231,   232,   233,   234,   235,   236,   237,    39,    80,
     743,   253,    80,    87,   223,   359,    80,   361,   260,    40,
     229,    40,   559,    91,    92,    87,   966,    91,    92,    87,
     260,   261,   262,    12,   378,    12,   217,    88,   268,    87,
     388,    92,   256,    39,    95,   389,   227,    40,    51,   230,
     231,   232,     3,   234,   235,    51,   404,     0,   425,     4,
     427,   405,   292,    88,     9,    51,    87,    92,    87,    20,
      15,   301,     9,   331,   289,   284,    27,    89,    15,    39,
     338,   339,    25,    95,    80,    88,    39,    39,    39,    92,
      41,    51,   322,    89,    87,   325,   326,    87,    51,    70,
     444,  1041,    88,   333,   334,    95,    92,    12,    39,    88,
      41,    88,   649,    92,   824,    92,    95,    12,    95,    51,
      80,    77,    82,   365,   647,   355,   356,    78,    79,   359,
     372,   361,    76,    84,    17,   365,    87,   367,   368,    90,
      91,    92,   372,    94,   374,   375,    87,    12,   378,    80,
      91,    92,   496,   383,   384,    39,   386,    41,   520,   389,
      91,    92,   689,    94,    97,     3,   396,   694,   737,   738,
     400,   401,   402,   519,   743,   405,    51,    87,    87,   388,
      88,    95,    20,    88,    92,    95,    95,    92,    26,    27,
      95,    51,   135,    88,    87,   404,    80,    92,    78,    79,
      95,    39,    95,    41,    39,   386,    90,    91,    92,    95,
      94,    87,     3,    88,   444,    90,    51,    92,    88,    95,
      95,   402,    39,    88,    41,    87,    12,    92,    88,    20,
      95,   644,    92,    95,    12,    26,    27,   581,   480,    39,
      78,    79,    80,   587,    39,    80,    84,     3,    39,    12,
      41,    89,    87,    91,    92,   599,    94,   990,    30,   489,
     490,    88,   606,    80,    20,    92,   496,    51,   211,    87,
      26,    27,   616,    90,    91,    92,   813,    94,    89,   816,
     510,   511,    88,    39,    95,    41,    92,    78,    79,    80,
      51,   549,   636,    84,   552,   553,   554,    95,    89,   529,
      91,    92,    88,    94,    88,    39,    92,   537,    92,    95,
      88,   537,    88,    97,    92,   842,    92,    95,    39,    51,
      12,    87,    78,    79,    80,    88,    97,    88,    84,    92,
      51,    92,    95,    89,     5,    91,    92,    51,    94,    87,
     570,   571,   572,    12,    89,   691,   692,   577,   578,   292,
      95,   581,    12,    12,   584,   585,    88,   587,   301,    80,
      92,    39,    12,    41,    36,    37,   596,   597,    89,   599,
      95,     3,    95,    12,    88,    12,   606,   789,    92,   322,
      95,    95,    12,    97,   796,   797,   616,    39,    20,   619,
      95,   621,   622,   623,    26,    27,    88,    95,    66,    67,
      92,     3,    80,    95,    87,    75,   636,    39,    91,    41,
      89,    89,    70,    91,    92,   645,    94,   952,   987,    88,
      95,   990,    89,    92,   768,   952,    95,    89,    88,    88,
      87,   775,    92,    92,    91,    95,    95,    39,    88,    41,
      24,    25,    92,    91,    92,    95,    78,    79,    80,    88,
     680,    88,    84,    92,    90,    92,    95,    89,    95,    91,
      92,    39,    94,    41,    90,   723,   724,    90,   698,    39,
      95,    41,   702,    93,   704,    93,    78,    79,    93,   841,
      87,    87,    84,    93,   714,    91,    92,    39,   714,    91,
      92,   721,    94,   839,    39,    37,    41,   909,   728,   729,
    1035,   731,    80,    39,   916,   917,    39,   919,    95,     0,
     922,   923,   924,    91,    92,    39,    94,   747,    20,   749,
     750,    91,    92,   753,    94,   755,   756,    12,    39,   759,
     760,   761,    91,    92,    25,    80,   238,   239,   768,     3,
      51,    50,    51,    97,    89,   775,    91,    92,    95,    94,
      39,    39,    89,    41,   784,   785,   786,    39,    88,    41,
      87,   791,   792,    91,    51,    52,    95,   510,   511,    80,
      95,    80,    81,    82,    83,    39,    95,    41,    89,    88,
     810,   811,    95,    92,    68,   997,   529,    95,  1000,  1001,
    1002,    70,    80,  1005,   537,    96,    39,    95,  1010,  1011,
     830,    88,   832,    91,    92,    92,    94,    39,    91,    91,
      92,    36,    94,    90,    78,    79,    90,    95,     3,   849,
      84,   851,   852,   853,   854,    95,    89,    91,    92,    90,
      94,    39,   862,    41,   864,    20,    51,   867,   868,   869,
      95,    26,    27,    95,   135,   875,    39,   877,    89,    10,
      39,  1063,  1064,    95,    39,    16,    41,    95,    51,    95,
     890,   891,    39,    39,    90,    95,   896,   897,    29,    90,
      90,    32,    33,    88,    51,    90,    22,    92,    24,    25,
      95,   911,   912,    91,    92,    88,    94,    80,    90,    92,
      36,     3,    95,    78,    79,    80,    89,    97,    95,    84,
      50,   931,   645,    80,    89,   935,    91,    92,    20,    94,
      39,    39,    89,    87,   944,    27,   946,   947,    88,    89,
     211,    39,    92,    41,     3,    95,   956,    39,    87,    41,
      80,    81,    82,    83,    51,    95,    87,   680,    95,    95,
      95,    20,   103,   973,   974,    39,    39,    26,    27,    96,
     980,   925,   926,     4,   115,   698,   986,    87,    89,   702,
      39,   704,    41,    87,    87,    51,    78,    79,    80,    95,
      95,   714,    84,    91,    92,    87,    94,    87,   721,    91,
      92,    95,    94,    88,   145,   728,   729,    92,   731,  1019,
      95,    39,   153,    41,  1024,    39,  1026,    95,  1028,    78,
      79,   292,    88,  1033,    12,    84,    92,    51,  1038,    95,
     301,    97,    91,    92,   175,    94,  1046,     0,    90,    90,
      90,    90,   996,  1053,  1054,   186,  1056,  1057,    51,  1003,
    1004,   322,    80,    95,   195,  1009,    80,    95,  1012,  1013,
    1014,    87,    25,    91,    92,    89,    94,    39,    88,    89,
    1080,  1081,    92,    87,    91,    95,    91,  1087,    90,  1089,
      89,  1091,    87,  1093,  1094,    88,    89,   810,   811,    92,
    1100,    95,    95,  1103,  1104,  1105,    51,    88,    89,     3,
    1110,    92,    95,    70,    95,    87,    87,   830,  1062,   832,
    1120,  1065,  1066,  1067,  1124,  1125,  1070,    87,  1072,  1073,
      80,   262,    87,    39,  1134,  1135,   849,    39,   851,   852,
     853,   854,    89,  1143,    12,    39,  1146,    41,    16,   862,
      51,   864,    20,    87,   867,   868,   869,    87,    39,    88,
      41,    90,   875,    92,   877,    87,    95,    87,  1112,  1113,
      88,    51,    52,    87,    92,    87,    95,    95,    46,    47,
      48,    49,   135,    12,    78,    79,    39,    88,    41,    87,
      84,    92,    89,    39,    95,   326,    97,    91,    92,    80,
      94,    87,    95,   334,     3,    73,    74,    75,    88,    87,
      91,    92,    92,    94,    29,    95,    95,    97,   931,    88,
      89,    20,   935,    92,    95,   356,    95,    26,    27,    95,
      95,   944,    39,   946,   947,     4,    87,   368,    91,    92,
      39,    94,    41,   956,   375,    87,     3,    87,     4,   510,
     511,     4,    88,   384,    90,    89,    92,    95,   211,    95,
     973,   974,    95,    20,    39,    89,    41,   980,   529,    87,
     401,    88,    89,   986,     3,    92,   537,    87,    95,    78,
      79,    80,    39,    95,    41,    84,    95,    51,    39,    87,
      89,    20,    91,    92,    15,    94,    15,    26,    27,   430,
      88,    39,    90,    41,    92,    80,  1019,    95,    89,    39,
      39,  1024,    41,  1026,    87,  1028,    91,    92,     4,    94,
    1033,    78,    79,     4,    88,  1038,    90,    84,    92,     4,
      39,    95,    41,  1046,    91,    92,   698,    94,    88,   292,
    1053,  1054,    92,  1056,  1057,    95,     4,    87,   301,    78,
      79,    80,    51,    91,    92,    84,    94,    88,    51,   490,
      89,    92,    91,    92,    95,    94,     4,  1080,  1081,   322,
       3,    39,    51,    41,  1087,    87,  1089,    87,  1091,    87,
    1093,  1094,    91,    92,   645,    94,    87,  1100,    51,    88,
    1103,  1104,  1105,    92,    51,    88,    95,  1110,    97,    92,
      87,     4,    95,    87,    97,    87,    39,  1120,    41,    88,
      88,  1124,  1125,    92,    92,    87,    95,    95,    97,   680,
      87,  1134,  1135,    91,    92,    88,    94,    87,    87,    92,
    1143,    88,    95,  1146,    97,    92,    51,   698,    95,    87,
      97,   702,    87,   704,    87,    78,    79,   578,    87,    89,
      87,    84,     3,   714,   585,    87,    51,    87,    91,    92,
     721,    94,    87,    87,     9,   532,   597,   728,   729,    20,
     731,    45,   534,    88,    88,    26,    27,    92,    92,   826,
      95,    95,    97,   676,     3,    33,     5,     6,    39,     8,
      41,    10,   623,    88,    13,    90,   641,    92,    33,    18,
      95,    20,   241,    22,   240,    24,     3,    26,    27,    28,
     251,    30,    31,    32,    33,    34,    35,    36,    37,   252,
      39,   255,    41,    20,    43,   639,    51,    78,    79,    80,
      27,   258,    88,    84,    90,   136,    92,   149,    89,    95,
      91,    92,    39,    94,    41,    -1,    -1,    -1,    88,   810,
     811,    70,    92,   684,    -1,    95,    -1,   510,   511,    78,
      79,    80,    81,    88,    89,    84,    -1,    92,    -1,   830,
      95,   832,    91,    92,    -1,    94,   529,    -1,    -1,    50,
      51,    78,    79,    80,   537,    -1,    -1,    84,   849,    -1,
     851,   852,   853,   854,    91,    92,    51,    94,    88,    89,
      -1,   862,    92,   864,    -1,    95,   867,   868,   869,    80,
      81,    82,    83,    -1,   875,    -1,   877,    88,    -1,   750,
      -1,    92,    -1,    -1,    95,   756,     3,    -1,     5,     6,
      -1,     8,    51,    88,    89,    -1,    13,    92,    88,    89,
      95,    18,    92,    20,    12,    95,    -1,    -1,    16,    26,
      27,    -1,    20,    30,    31,   786,    33,    34,    35,    -1,
      -1,   792,    39,    -1,    41,    -1,    43,    -1,    -1,    88,
     931,    90,    -1,    92,   935,    -1,    95,    -1,    46,    47,
      48,    49,    -1,   944,    -1,   946,   947,    -1,    -1,    -1,
      50,    51,   645,    70,    -1,   956,    -1,    -1,     3,    -1,
      -1,    78,    79,    80,   835,    73,    74,    84,    -1,    -1,
      -1,    -1,   973,   974,    91,    92,    -1,    94,    -1,   980,
      80,    81,    82,    83,    -1,   986,     3,   680,    88,    -1,
      -1,    -1,    92,    -1,    39,    95,    41,    97,    -1,    -1,
      88,    -1,    90,    20,    92,   698,     3,    95,    -1,   702,
      27,   704,    88,    -1,    90,    -1,    92,    -1,  1019,    95,
     891,   714,    39,  1024,    41,  1026,   897,  1028,   721,    -1,
      -1,    -1,  1033,    78,    79,   728,   729,  1038,   731,    84,
       3,   912,    39,    -1,    41,  1046,    91,    92,    -1,    94,
      -1,    -1,  1053,  1054,    -1,  1056,  1057,    20,    -1,    -1,
      -1,    78,    79,    80,    27,    -1,    -1,    84,    -1,    51,
      -1,    -1,    -1,    90,    91,    92,    39,    94,    41,  1080,
    1081,    78,    79,    -1,    -1,    -1,  1087,    84,  1089,    -1,
    1091,    -1,  1093,  1094,    91,    92,    -1,    94,    -1,  1100,
      -1,    -1,  1103,  1104,  1105,    -1,    88,    89,    -1,  1110,
      92,    -1,    -1,    95,    -1,    78,    79,   810,   811,  1120,
      -1,    84,    -1,  1124,  1125,    -1,     3,    -1,    91,    92,
      -1,    94,    -1,  1134,  1135,    -1,    -1,   830,    -1,   832,
      88,    89,  1143,    20,    92,  1146,    -1,    95,    51,    26,
      27,    -1,     3,    -1,    -1,    -1,   849,    -1,   851,   852,
     853,   854,    39,    88,    41,    90,    -1,    92,     6,   862,
      95,   864,    -1,    11,   867,   868,   869,    -1,    -1,    17,
       3,    -1,   875,    -1,   877,    88,    24,    90,    39,    92,
      41,    -1,    95,    31,    -1,    33,    -1,    20,    -1,    -1,
      -1,    78,    79,    80,    27,    -1,    88,    84,    90,    -1,
      92,    -1,    89,    95,    91,    92,    39,    94,    41,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,   931,    20,
      91,    92,   935,    94,    -1,    26,    27,    -1,    -1,    -1,
      -1,   944,    -1,   946,   947,    78,    79,    80,    39,    -1,
      41,    84,    -1,   956,   102,    -1,    -1,    90,    91,    92,
      -1,    94,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     973,   974,    -1,    -1,    -1,   123,    -1,   980,    -1,    -1,
      -1,   129,     3,   986,    -1,    -1,    -1,    78,    79,    80,
      -1,     3,    -1,    84,    -1,    -1,   144,    51,    89,    20,
      91,    92,    -1,    94,   152,    26,    27,    -1,    20,    -1,
     158,    51,   160,    -1,    -1,    27,  1019,    -1,    39,    -1,
      41,  1024,    -1,  1026,    -1,  1028,   174,    39,    -1,    41,
    1033,    -1,    -1,    -1,    88,  1038,    90,   185,    92,    51,
      -1,    95,    -1,  1046,    -1,    -1,   194,    -1,    88,    89,
    1053,  1054,    92,  1056,  1057,    95,    -1,    78,    79,    80,
      -1,    -1,    -1,    84,    -1,    -1,    78,    79,    89,    -1,
      91,    92,    84,    94,    51,   223,    -1,  1080,  1081,    91,
      92,   229,    94,    -1,  1087,    -1,  1089,    -1,  1091,    51,
    1093,  1094,    -1,    -1,    -1,    -1,    -1,  1100,    -1,    -1,
    1103,  1104,  1105,    -1,    51,    -1,    -1,  1110,    -1,    -1,
      -1,    88,    89,   261,    -1,    92,    -1,  1120,    95,    -1,
      -1,  1124,  1125,    -1,    -1,    -1,    88,    89,    -1,     3,
      92,  1134,  1135,    95,    -1,   283,   284,    -1,    -1,    -1,
    1143,    88,    89,  1146,    -1,    92,    20,    -1,    95,    -1,
      -1,   299,    26,    27,    -1,   303,     3,    -1,     5,     6,
      -1,     8,   310,   311,    -1,    39,    13,    41,    -1,    -1,
      -1,    18,    -1,    20,    -1,   323,    -1,   325,     3,    26,
      27,    -1,    -1,    30,    31,   333,    33,    34,    35,    -1,
      -1,    -1,    39,    -1,    41,    20,    43,    51,    -1,   347,
      -1,    26,    27,    -1,    78,    79,    80,   355,    -1,    -1,
      84,    -1,   360,    -1,    39,    89,    41,    91,    92,   367,
      94,    -1,    -1,    -1,    -1,    -1,   374,    22,    -1,    -1,
      -1,    78,    79,    80,    88,   383,    90,    84,    92,    -1,
     388,    95,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      -1,    -1,   400,    78,    79,    80,   404,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    59,    -1,    91,    92,    -1,    94,
      -1,   419,    -1,    -1,   422,    -1,    -1,    -1,    -1,    -1,
      -1,   429,    -1,    -1,    -1,    -1,     3,    -1,     5,     6,
      -1,     8,    -1,    10,    -1,    90,    13,    50,    51,    -1,
      -1,    18,    -1,    20,    -1,    22,    -1,    24,    -1,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    -1,    41,    31,    43,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    92,
      -1,   489,    95,    -1,    97,    -1,    -1,   142,    -1,    -1,
      -1,   146,    69,    -1,    -1,   150,     3,    -1,    -1,   154,
      -1,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    50,    51,    20,    91,    92,    -1,    94,   173,    26,
      27,   176,   530,    -1,    -1,    -1,    -1,   182,    -1,    -1,
      -1,    -1,    39,   188,    41,    -1,   102,    -1,   193,    -1,
      -1,    80,    81,    82,    83,     3,    -1,    -1,   114,    88,
      -1,    -1,   560,    92,     3,   563,    95,   565,   566,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,   577,
      -1,    78,    79,    80,    -1,    -1,   584,    84,   144,    -1,
      -1,    39,    89,    41,    91,    92,   152,    94,   596,    -1,
      39,    -1,    41,    -1,    -1,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    88,   259,    -1,    -1,    92,   174,   264,
      95,    -1,    97,    -1,   622,     3,    -1,    -1,    -1,   185,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,   194,    78,
      79,    -1,    20,    91,    92,    84,    94,    -1,    26,    27,
      -1,    -1,    91,    92,    -1,    94,   654,    -1,    -1,   657,
      -1,    39,   660,    41,    -1,    -1,    -1,    -1,    -1,    -1,
     668,    -1,    -1,    -1,   672,    -1,    -1,    -1,    -1,   324,
      -1,    -1,   327,    -1,   329,    -1,    -1,   332,   686,    -1,
     335,    -1,   337,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      78,    79,    80,   701,    -1,   261,    84,    -1,   706,    -1,
      -1,    89,    -1,    91,    92,    -1,    94,    -1,    -1,   364,
      -1,   366,    -1,    -1,   369,    -1,   371,    -1,   373,    -1,
      -1,   376,   730,    39,    -1,    41,    -1,   382,   736,    -1,
     385,   739,   740,    -1,     3,    -1,   744,    -1,   393,    -1,
      -1,   749,    -1,    -1,    -1,    -1,    -1,   755,    -1,    -1,
      -1,    20,    -1,    -1,   409,    -1,    -1,    26,    27,   325,
      -1,    -1,    78,    79,     3,    -1,    -1,   333,    84,    -1,
      39,    -1,    41,   781,    -1,    91,    92,   785,    94,    -1,
      -1,    20,    -1,   791,    -1,    -1,    -1,    26,    27,   355,
      -1,    -1,    -1,   801,    -1,    -1,    -1,   805,    -1,   807,
      39,   367,    41,    -1,    -1,    -1,    -1,    -1,   374,    78,
      79,    80,    -1,    -1,    -1,    84,    -1,   383,    -1,    -1,
      89,   829,    91,    92,    -1,    94,    -1,    -1,    -1,    18,
      -1,    20,    -1,   488,   400,    -1,   491,    -1,   493,    78,
      79,    80,    31,    32,    -1,    84,    -1,    -1,    -1,    -1,
      89,    -1,    91,    92,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   429,    -1,    -1,   874,    -1,   876,     3,
      -1,    -1,   880,    -1,   882,    -1,    -1,    -1,   886,   887,
      50,    51,   890,    -1,    -1,    -1,    20,    -1,   896,    -1,
      -1,   546,   547,    27,    -1,   550,   551,    -1,    -1,    88,
      -1,    -1,    -1,   911,    -1,    39,    -1,    41,    -1,    -1,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,   489,    -1,    95,   934,    97,   583,    -1,
      -1,   586,    -1,    -1,    -1,   943,   591,    -1,    -1,    -1,
     595,    -1,    -1,   598,    78,    79,    -1,    -1,   603,    -1,
      84,     3,   607,   608,    -1,   144,   145,    91,    92,    -1,
      94,    -1,    -1,   152,   153,   620,    -1,    -1,    20,   624,
      -1,    -1,   627,   628,    26,    27,    -1,   985,     3,    32,
      33,    -1,    -1,    -1,    -1,   174,   175,    39,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    20,   185,   186,    -1,    -1,
      -1,    26,    27,    -1,    -1,   194,   195,   662,   663,    -1,
    1018,   577,    -1,    -1,    39,  1023,    41,  1025,   584,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    82,
     596,    -1,    84,    -1,    -1,    88,    -1,    89,     3,    91,
      92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,  1060,    78,    79,    80,   622,    -1,    -1,    84,
      -1,    -1,   115,    31,    89,    -1,    91,    92,    -1,    94,
      -1,  1079,   261,   262,    39,    -1,    41,    -1,  1086,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   746,   145,    -1,    -1,    -1,   751,   752,    -1,    -1,
     153,   667,   757,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     765,   766,     3,    78,    79,    -1,    -1,   772,   773,    84,
      88,    -1,   175,    -1,    -1,    -1,    91,    92,   783,    94,
      -1,    -1,   787,   186,   102,   790,   325,   326,   793,     3,
     795,    -1,   195,    -1,   333,   334,   114,    -1,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
       3,    -1,    26,    27,    -1,    -1,   355,   356,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,   144,    41,   367,   368,
      -1,    -1,    -1,   749,   152,   374,   375,    78,    79,   755,
      -1,    -1,    -1,    84,   383,   384,    39,    -1,    41,    -1,
      91,    92,    -1,    94,    -1,   258,   174,   396,    -1,   262,
      -1,   400,   401,    -1,    78,    79,    80,   185,    -1,   785,
      84,     3,    -1,   292,    -1,   791,   194,    91,    92,    -1,
      94,    -1,   301,    -1,   889,    78,    79,   892,    -1,   894,
     895,    84,    -1,   898,     3,   900,    -1,    -1,    91,    92,
      -1,    94,    -1,   322,    -1,   910,    -1,    39,   913,    41,
     915,    20,    -1,    -1,    -1,   920,   921,    -1,    27,    -1,
      -1,    30,    -1,   326,    -1,     3,    -1,    -1,   331,    -1,
      39,   334,    41,    -1,    -1,   338,   339,    -1,    -1,    -1,
      -1,    -1,    20,   261,    -1,    -1,    78,    79,    26,    27,
     489,   490,    84,   356,    -1,    -1,    -1,    -1,    -1,    91,
      92,    39,    94,    41,    -1,   368,   284,    -1,    -1,    78,
      79,    -1,   375,    -1,   890,    84,    -1,    -1,    -1,    -1,
     896,   384,    91,    92,    -1,    94,    -1,   992,   993,   994,
     995,    -1,    -1,   998,   999,   911,    -1,    -1,   401,    -1,
      78,    79,    80,    -1,    -1,    -1,    84,   325,    -1,    -1,
     413,    89,    -1,    91,    92,   333,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   430,    -1,    -1,
      -1,    -1,   571,   572,    -1,    -1,    -1,   355,   577,   578,
      -1,    -1,    -1,    -1,    -1,   584,   585,    -1,    -1,   367,
      -1,    -1,    -1,    -1,    -1,    -1,   374,   596,   597,    -1,
      -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
     619,    -1,   400,   622,   623,    -1,    -1,   490,    -1,    -1,
      -1,   510,   511,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    27,     3,    -1,     5,     6,    -1,     8,    -1,    10,
      -1,   429,    13,    39,    -1,    41,    -1,    18,    -1,    20,
      -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    -1,
      41,    -1,    43,    -1,    -1,    -1,   549,    -1,    -1,   552,
     553,   554,    78,    79,    80,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    91,    92,    -1,    94,    -1,
      -1,   489,    -1,    -1,    -1,   578,    -1,    78,    79,    80,
      81,    -1,   585,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    94,   597,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    -1,
     749,   750,     3,    -1,    -1,    -1,   755,   756,    -1,    -1,
     623,   760,   761,    -1,    -1,    -1,   645,    -1,    -1,    20,
      87,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,   785,   786,    39,    -1,
      41,    -1,   791,   792,    -1,     1,    -1,    -1,    20,   577,
      -1,   680,    -1,    -1,    26,    27,   584,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    -1,    -1,    39,   596,    41,
      -1,    -1,    -1,   702,    -1,   704,    -1,    78,    79,    80,
       3,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,
      91,    92,   721,    94,   622,    -1,    -1,    20,    -1,   728,
     729,    -1,   731,    26,    27,    -1,    78,    79,    80,    -1,
     723,   724,    84,    -1,    -1,    -1,    39,    89,    41,    91,
      92,    -1,    94,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   750,    -1,   667,
      -1,   890,   891,   756,    -1,    -1,    -1,   896,   897,    -1,
      -1,    -1,    -1,     3,    -1,    78,    79,    80,    87,    -1,
      -1,    84,   911,   912,    -1,    -1,    89,    -1,    91,    92,
      20,    94,    -1,   786,    -1,    -1,    -1,    27,    -1,   792,
      -1,   810,   811,    -1,    -1,    -1,    -1,   143,    -1,    39,
     803,    41,    -1,    -1,     3,   151,    -1,    -1,    -1,    -1,
      -1,   830,    -1,   832,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
     849,   749,   851,   852,   853,   854,    -1,   755,    78,    79,
      39,    -1,    41,   862,    84,   864,    -1,    87,   867,   868,
     869,    91,    92,    -1,    94,    -1,   875,    -1,   877,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   785,    -1,    -1,
     216,    -1,   218,   791,   220,   221,    -1,    -1,   224,    78,
      79,    80,     3,    -1,    -1,    84,    -1,    -1,   891,    -1,
      89,    -1,    91,    92,   897,    94,    -1,    -1,    -1,    20,
       3,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,   912,
      -1,    -1,   931,    -1,    -1,    -1,   935,    20,    39,    -1,
      41,    -1,   268,    26,    27,   944,    -1,   946,   947,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,   956,    41,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,   973,   974,    -1,    78,    79,    80,
      -1,   980,    -1,    84,    -1,    -1,    -1,   986,    89,    -1,
      91,    92,   890,    94,    87,    78,    79,    80,   896,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    91,    92,
      -1,    94,    -1,   911,    -1,    -1,    -1,    -1,    -1,    -1,
    1019,    -1,    -1,    -1,    -1,  1024,    -1,  1026,    -1,  1028,
      -1,    -1,    -1,   359,  1033,   361,    -1,    -1,    -1,  1038,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1046,    -1,    -1,
      -1,    -1,   378,    -1,  1053,  1054,    -1,  1056,  1057,    -1,
      -1,    -1,    -1,   389,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,   405,
      -1,  1080,  1081,    -1,    -1,    -1,    -1,    -1,  1087,    -1,
    1089,    20,  1091,    -1,  1093,  1094,     3,    26,    27,    -1,
      -1,  1100,    -1,    -1,  1103,  1104,  1105,    -1,    -1,    -1,
      39,  1110,    41,    20,    -1,    -1,     3,    -1,   444,    26,
      27,  1120,    -1,    -1,    -1,  1124,  1125,    -1,    -1,    -1,
      -1,    -1,    39,    20,    41,  1134,  1135,    -1,    -1,    26,
      27,    -1,     3,    -1,  1143,    -1,    -1,  1146,    -1,    78,
      79,    80,    39,    -1,    41,    84,    -1,    -1,    -1,    20,
      89,    -1,    91,    92,    -1,    94,    27,    -1,    -1,    -1,
     496,    78,    79,    80,    -1,    -1,    -1,    84,    39,    -1,
      41,    -1,    89,    -1,    91,    92,    -1,    94,     3,    -1,
      -1,    78,    79,    80,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    89,    -1,    91,    92,    -1,    94,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      -1,    -1,    -1,    84,    39,    -1,    41,    -1,    20,    90,
      91,    92,    -1,    94,    -1,    27,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   570,   571,   572,    39,    -1,    41,
      -1,    -1,    -1,    20,    -1,   581,    -1,    -1,     3,    -1,
      27,   587,    -1,    78,    79,    -1,    -1,     3,    -1,    84,
      -1,    -1,    39,   599,    41,    20,    91,    92,    -1,    94,
     606,    -1,    27,    -1,    20,    -1,    78,    79,    80,    -1,
     616,    27,    84,   619,    39,   621,    41,    -1,    90,    91,
      92,    -1,    94,    39,    -1,    41,    -1,    -1,    -1,    -1,
     636,    78,    79,    80,     3,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,    91,    92,    -1,    94,    -1,    -1,
      -1,    20,    -1,    78,    79,    80,    -1,    -1,    27,    84,
      -1,    -1,    78,    79,    80,    90,    91,    92,    84,    94,
      39,    -1,    41,    -1,    90,    91,    92,    -1,    94,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    20,     3,    87,    84,    -1,    -1,    -1,    27,
      -1,    90,    91,    92,    -1,    94,    -1,    -1,    -1,    -1,
      20,    39,    -1,    41,    -1,    -1,    -1,    27,    -1,     3,
      -1,   747,    -1,    -1,    -1,    -1,    -1,   753,    -1,    39,
      -1,    41,    -1,   759,   760,   761,    20,     3,    -1,    -1,
      -1,    -1,   768,    27,    -1,    -1,    -1,    -1,    -1,   775,
      78,    79,    80,    -1,    20,    39,    84,    41,   784,    -1,
      -1,    27,    90,    91,    92,    -1,    94,    -1,    78,    79,
      80,    -1,    -1,    39,    84,    41,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    20,     3,    -1,    -1,    90,    91,    92,    27,
      94,    -1,    78,    79,    80,    -1,    -1,    -1,    84,    -1,
      20,    39,    -1,    41,    90,    91,    92,    27,    94,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    20,     3,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    20,    39,    84,    41,    -1,    -1,
      -1,    27,    90,    91,    92,    -1,    94,    -1,    78,    79,
      80,    -1,    -1,    39,    84,    41,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    20,     3,    -1,    -1,    90,    91,    92,    27,
      94,    -1,    78,    79,    80,    -1,    -1,    -1,    84,    -1,
      20,    39,    -1,    41,    90,    91,    92,    27,    94,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    20,     3,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    20,    39,    84,    41,    -1,    -1,
      -1,    27,    90,    91,    92,    -1,    94,    -1,    78,    79,
      80,    -1,    -1,    39,    84,    41,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,    -1,
      84,    -1,    20,     3,    -1,    -1,    90,    91,    92,    27,
      94,    -1,    78,    79,    80,    -1,    -1,    -1,    84,    -1,
      20,    39,    -1,    41,    90,    91,    92,    27,    94,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    20,     3,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    -1,    20,    39,    84,    41,    -1,    -1,
      -1,    27,    90,    91,    92,    -1,    94,    -1,    78,    79,
      80,    -1,    -1,    39,    84,    41,    -1,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    -1,    -1,     3,    -1,
      84,    -1,    -1,    87,    -1,    -1,    90,    91,    92,    -1,
      94,    -1,    78,    79,    -1,    20,     3,    -1,    84,    -1,
      -1,    87,    27,    -1,    90,    91,    92,    -1,    94,    -1,
      -1,    -1,    -1,    20,    39,    -1,    41,    -1,    -1,    -1,
      27,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    20,
       3,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    -1,    20,    39,    84,
      41,    -1,    -1,    -1,    27,    90,    91,    92,    -1,    94,
      -1,    78,    79,    80,    -1,    -1,    39,    84,    41,    -1,
      -1,    -1,    -1,    90,    91,    92,    -1,    94,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    20,    87,    -1,     3,    90,
      91,    92,    27,    94,    -1,    78,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    39,    20,    41,    90,    91,    92,
       3,    94,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    41,    20,    -1,    -1,
       3,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    39,    20,    41,    84,
      -1,    -1,    -1,    -1,    27,    90,    91,    92,    -1,    94,
      -1,    -1,    -1,    78,    79,    -1,    39,    -1,    41,    84,
      -1,    -1,    87,    -1,    -1,    90,    91,    92,     3,    94,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    20,     3,    90,    91,    92,
      -1,    94,    27,    -1,    -1,    78,    79,    80,    -1,    -1,
      -1,    84,    -1,    20,    39,    -1,    41,    90,    91,    92,
      27,    94,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    20,
       3,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    -1,    20,    39,    84,
      41,    -1,    -1,     3,    27,    90,    91,    92,    -1,    94,
      -1,    78,    79,    -1,    -1,    -1,    39,    84,    41,    -1,
      87,     3,    -1,    -1,    91,    92,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    39,
      -1,    41,    -1,    84,     3,    -1,    87,    -1,    -1,    -1,
      91,    92,    -1,    94,    -1,    78,    79,    39,    -1,    41,
      -1,    84,     3,    -1,    87,    -1,    -1,    -1,    91,    92,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      39,    -1,    41,    -1,    84,     3,    -1,    -1,    -1,    -1,
      -1,    91,    92,    -1,    94,    -1,    78,    79,    39,    -1,
      41,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    39,    -1,    41,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    94,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    -1,    94,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     5,     6,     8,    10,    13,    18,    20,    22,
      24,    26,    27,    28,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    41,    43,    70,    78,    79,    80,    81,
      84,    91,    92,    94,    99,   100,   101,   107,   109,   110,
     111,   112,   115,   118,   119,   120,   121,   122,   127,   128,
     129,   130,   131,   136,   137,   138,   143,   144,   145,   146,
     147,   148,   149,   150,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   167,   168,   169,   170,   171,   172,
     173,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     188,   189,   190,   192,   193,   194,   195,   196,   197,   203,
     204,    39,    91,    92,   146,   147,   148,   149,   150,    39,
     199,   200,    39,    39,    91,    92,   146,   172,   169,    37,
     110,    39,   170,    30,   172,   174,    39,    51,    80,    87,
     206,   207,   209,   210,   211,    87,    88,   199,   202,    39,
     170,   172,    39,    80,    91,    92,   146,   147,   186,    39,
      39,    80,    91,    92,   146,   186,    39,    51,    52,    88,
      92,    95,    97,   187,   172,   174,    99,    39,   146,   157,
      39,   146,   157,    39,    91,    92,   146,   163,   170,    39,
     146,   157,    39,    80,    89,    91,    92,   145,   146,   172,
     178,   186,    80,    90,    91,    92,   132,   170,   176,   180,
     186,    51,    80,    93,   132,   139,   141,   142,   172,   176,
       0,    70,    10,    22,    37,   121,    50,    51,    80,    81,
      82,    83,    88,    92,    95,    97,   187,    51,    88,    92,
      51,    50,    80,    81,    82,    83,    78,    79,    66,    67,
      77,    76,    12,    16,    20,    46,    47,    48,    49,    73,
      74,    75,   165,   166,    24,    25,    17,   180,    95,    39,
      80,    91,    92,   145,   146,   180,   186,    97,    95,   187,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    87,   191,    89,    90,    88,    29,    95,
     198,    39,    87,    91,    92,   123,   124,    89,    90,    30,
      39,    87,   172,    95,   175,   210,    95,   208,   210,   172,
      87,    97,    95,   208,    70,   102,   105,   181,   202,     5,
      95,   205,    87,    95,    39,    91,    92,   146,    89,    90,
     205,    12,    39,    91,    92,   146,    89,    90,    12,    12,
      91,   124,    39,   146,   157,   172,    39,    87,   151,   153,
     154,   172,   174,    39,    80,    91,    92,   146,   188,    95,
      95,    95,    97,   187,    39,    80,    89,    91,    92,   146,
     186,    39,    80,    90,    91,    92,   146,   186,    95,    97,
     187,    70,    39,    91,    92,   146,    51,    88,    92,    95,
      97,   187,    89,    90,    89,    22,    36,   133,    89,    89,
      91,    92,    51,    88,    92,    95,    97,   187,    89,    90,
      90,   133,    90,    95,   177,    90,   163,    93,    93,    95,
     140,    93,    87,    93,    99,    39,    37,    39,    39,    91,
      92,   146,    39,   146,   157,   146,   146,   158,   146,   146,
      39,   151,   172,   174,    95,    39,   146,   157,    39,   151,
     172,   174,    39,   146,   157,    39,   146,   157,    39,   146,
     157,   146,   158,    39,   146,   157,    39,   146,   157,   146,
     158,   146,   158,   159,   159,   160,   161,    20,    12,   162,
     166,   163,   167,   168,   169,   179,   180,    97,    39,    91,
      92,   146,    89,    90,    97,    97,    95,   172,   145,   172,
     174,    39,   199,    88,   102,    89,    39,    51,    80,   126,
      87,    87,   123,   172,    91,   102,   172,    95,    95,    51,
     211,    95,    95,   208,   172,   172,    82,   209,    95,    68,
       9,    15,   113,   114,   116,   117,    70,    96,   106,    39,
      80,    91,    39,    95,   102,   172,    89,    90,   176,    12,
      89,    90,    12,    12,    12,   176,   176,    89,   206,    91,
      87,   172,    90,    95,   152,    87,    95,   152,    90,    39,
      80,    91,    92,    89,    90,    39,    80,    91,    92,   146,
     188,    95,    89,    39,    91,    92,   146,    95,    97,   187,
      89,    90,    89,    89,    90,    39,    91,    92,   146,    95,
      97,   187,    89,    90,    90,    90,    95,    89,    90,    39,
     146,   157,    39,   151,   172,   174,    95,    89,    89,    36,
      39,    80,    91,    92,   146,   186,    89,    89,    90,    39,
     146,   157,    39,   151,   172,   174,    95,    90,    90,   180,
      95,   141,   172,    95,   172,    87,   123,   124,    39,    91,
     124,    89,    90,    90,    95,    90,    90,    95,    90,   163,
       4,    97,    89,    90,    97,    97,    97,    97,    95,   198,
      29,   198,    87,    39,    39,    90,    95,   125,   102,   102,
      87,    89,   206,     4,    23,   108,    95,   175,   210,    95,
     208,    51,    51,    95,    95,    82,   209,   101,   103,   104,
     105,    80,    87,   172,    87,     4,     9,    15,   114,     4,
       9,    15,   117,   181,    96,    29,    95,   201,    39,    39,
       4,    87,   176,    12,    12,   176,   176,   176,    87,    87,
      40,    87,    89,    89,   206,   172,    87,   153,   172,    95,
      87,   172,    90,   172,    95,   146,    39,    80,    89,    91,
      92,   146,    39,    80,    90,    91,    92,   146,    39,    80,
      91,    92,    89,    90,    89,    89,    90,    89,    95,    89,
      89,    90,    89,    90,    90,    95,    90,    90,    89,    89,
      90,    95,    90,    39,    80,    91,    92,   146,   186,    12,
      39,    91,    92,   146,    89,    90,    12,    12,    90,    90,
      90,    95,    90,    95,   177,    95,   140,    87,   133,   102,
      87,    87,   123,    91,    89,   206,    91,    90,    90,   172,
      97,    97,   145,   178,    39,   172,   126,    90,   102,    40,
      87,    89,    87,   170,     4,    23,    95,   210,   210,    51,
     207,   211,    95,    69,   104,    70,   172,   102,    29,    87,
     102,    87,    87,    87,    87,   181,    39,    39,    29,    89,
      95,   201,    87,   102,    87,   176,   176,    87,    87,    87,
     102,   102,   172,   102,    40,    87,    40,    87,    89,   172,
      95,   152,    95,   152,   172,   172,    87,    95,   172,    39,
      91,    92,   146,    89,    90,    39,    91,    92,   146,    89,
      90,   146,    89,    90,    89,    89,    90,    90,    90,    12,
      39,    91,    92,   146,    89,    90,    12,    12,   167,    12,
      89,    90,    12,    12,    12,   167,   167,    90,   172,   102,
     102,    87,    89,   206,    40,    87,    89,    89,   206,   198,
     125,   172,   102,    40,    87,   102,    87,    87,   170,    95,
      95,   210,    95,   208,   207,    29,    87,    39,   102,   102,
     102,   102,   102,   201,    29,   201,    39,    89,    89,    95,
     102,     4,   102,    87,    87,   102,   102,   102,     4,     4,
      87,   172,   102,   172,   102,    40,    87,   172,    95,   172,
     172,    95,    89,    90,    89,    90,   167,    12,    89,    90,
      12,    12,    12,   167,   167,    24,   133,   134,   135,   167,
      12,    12,   167,   167,   167,   134,   134,   102,    40,    87,
      89,   172,   102,    40,    87,    40,    87,    89,    87,   172,
     102,   102,   102,    87,    95,    95,    39,   102,    87,    15,
      15,    39,    89,    95,   201,    89,    87,     4,   102,   102,
       4,     4,     4,    87,    87,   102,    87,    87,   172,   102,
      95,   134,   167,    12,    12,   167,   167,   167,   134,   134,
     167,   134,   167,   167,   134,   134,   134,   172,   102,    40,
      87,    87,   172,   102,   172,   102,    40,    87,   102,    87,
     102,    87,   102,    87,    87,   201,    89,    89,    95,   102,
      87,     4,     4,    87,    87,    87,   102,   102,   102,   102,
      87,   134,   167,   167,   134,   134,   134,   134,   134,   134,
      87,   172,   102,   102,    87,    87,   172,   102,   102,   102,
     102,   102,    89,   102,    87,    87,   102,   102,   102,   102,
     134,   134,   102,    87,   102,   102,    87,   102,   102,   102,
     102
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
        case 3:
#line 44 "index.y"
    {printf("nothing\n"); YYACCEPT;}
    break;

  case 5:
#line 44 "index.y"
    {YYACCEPT;}
    break;

  case 6:
#line 46 "index.y"
    {printf("Base simple\n");}
    break;

  case 7:
#line 47 "index.y"
    {printf("Base compound\n");}
    break;

  case 16:
#line 59 "index.y"
    {printf("59\n");}
    break;

  case 17:
#line 60 "index.y"
    {printf("60\n");}
    break;

  case 18:
#line 61 "index.y"
    {printf("one\n");}
    break;

  case 19:
#line 61 "index.y"
    {printf("more\n");}
    break;

  case 20:
#line 62 "index.y"
    {printf("62\n");}
    break;

  case 21:
#line 62 "index.y"
    {printf("compound\n");}
    break;

  case 22:
#line 63 "index.y"
    {printf("simple\n");}
    break;

  case 24:
#line 65 "index.y"
    {printf("65\n");}
    break;

  case 29:
#line 70 "index.y"
    {printf("66\n");}
    break;

  case 31:
#line 72 "index.y"
    {printf("68\n");}
    break;

  case 88:
#line 119 "index.y"
    {printf("108\n");}
    break;

  case 120:
#line 150 "index.y"
    {printf("number\n");}
    break;

  case 188:
#line 200 "index.y"
    {printf("yield\n");}
    break;

  case 190:
#line 200 "index.y"
    {printf("192\n");}
    break;

  case 367:
#line 330 "index.y"
    {printf("assignment_stmt\n");}
    break;

  case 369:
#line 332 "index.y"
    {printf("augmented_assignment_stmt\n");}
    break;

  case 516:
#line 419 "index.y"
    {printf("raise\n");}
    break;

  case 517:
#line 419 "index.y"
    {printf("394\n");}
    break;

  case 518:
#line 420 "index.y"
    {printf("395\n");}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3305 "y.tab.c"

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


#line 568 "index.y"


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

void yyerror(const char *msg)
    {
        printf(" %s \n", msg);
    }
