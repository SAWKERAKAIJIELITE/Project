/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "y.cpp" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.hpp".  */
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
#line 2 "index.y" /* yacc.c:355  */

    #include <iostream>
    #include <string>
    #include <unistd.h>
    #include "python_ast_node.hpp"

#line 104 "y.cpp" /* yacc.c:355  */

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
#line 9 "index.y" /* yacc.c:355  */

    AstNode* astNode;
    IdentifierNode* idNode;
    int d;

#line 198 "y.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 15 "index.y" /* yacc.c:358  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yydebug=1;
    extern FILE *yyin;
    void yyerror(const char *);
    extern int yylex();
    extern int yyparse();
    AstNode* root = NULL;
    int n_nodes = 0;

#line 225 "y.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  209
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  114
/* YYNRULES -- Number of rules.  */
#define YYNRULES  591
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1150

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    84,    78,     2,
      92,    90,    81,    79,    96,    80,    89,    83,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    97,
      74,    98,    75,     2,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    91,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,    76,    94,    87,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    85,
      86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    81,    87,    92,    98,   103,   108,   113,
     119,   124,   129,   134,   140,   144,   149,   153,   159,   164,
     170,   175,   180,   185,   191,   195,   201,   207,   212,   218,
     226,   231,   238,   243,   250,   256,   263,   269,   276,   282,
     289,   294,   300,   305,   311,   316,   322,   327,   333,   340,
     348,   355,   364,   369,   374,   380,   385,   392,   398,   405,
     409,   415,   420,   425,   433,   438,   445,   451,   458,   462,
     468,   473,   481,   487,   497,   504,   513,   521,   530,   538,
     547,   555,   564,   570,   578,   585,   592,   599,   607,   616,
     620,   626,   631,   640,   648,   656,   663,   670,   678,   685,
     692,   694,   699,   705,   709,   715,   721,   726,   731,   737,
     746,   753,   760,   767,   775,   783,   791,   798,   803,   808,
     814,   817,   820,   823,   826,   829,   833,   838,   844,   850,
     856,   861,   866,   872,   878,   883,   888,   895,   902,   908,
     914,   920,   926,   931,   936,   943,   950,   956,   962,   967,
     972,   977,   982,   987,   992,   997,  1002,  1007,  1012,  1017,
    1022,  1027,  1032,  1037,  1043,  1046,  1050,  1053,  1057,  1061,
    1066,  1070,  1075,  1076,  1080,  1085,  1088,  1091,  1096,  1102,
    1106,  1112,  1117,  1122,  1129,  1135,  1139,  1140,  1144,  1148,
    1152,  1157,  1160,  1163,  1167,  1171,  1177,  1183,  1190,  1195,
    1201,  1206,  1211,  1220,  1225,  1231,  1236,  1241,  1247,  1252,
    1257,  1266,  1270,  1275,  1279,  1285,  1288,  1291,  1296,  1301,
    1305,  1310,  1315,  1320,  1325,  1331,  1337,  1342,  1348,  1355,
    1359,  1364,  1370,  1374,  1375,  1376,  1380,  1384,  1389,  1393,
    1399,  1404,  1409,  1414,  1418,  1423,  1427,  1431,  1436,  1437,
    1439,  1442,  1445,  1446,  1450,  1455,  1459,  1460,  1464,  1469,
    1473,  1478,  1483,  1488,  1494,  1500,  1506,  1512,  1519,  1524,
    1529,  1534,  1541,  1545,  1549,  1553,  1557,  1561,  1565,  1569,
    1574,  1579,  1585,  1589,  1594,  1600,  1605,  1610,  1615,  1620,
    1625,  1630,  1635,  1640,  1645,  1650,  1655,  1660,  1665,  1670,
    1676,  1682,  1688,  1694,  1700,  1704,  1709,  1714,  1718,  1723,
    1729,  1733,  1738,  1744,  1748,  1754,  1758,  1764,  1768,  1774,
    1778,  1784,  1789,  1794,  1794,  1794,  1794,  1794,  1794,  1794,
    1794,  1794,  1794,  1796,  1800,  1806,  1810,  1816,  1820,  1825,
    1831,  1835,  1839,  1846,  1849,  1853,  1857,  1863,  1868,  1874,
    1878,  1884,  1887,  1890,  1895,  1901,  1905,  1911,  1914,  1917,
    1923,  1927,  1933,  1936,  1940,  1943,  1946,  1949,  1952,  1955,
    1956,  1959,  1962,  1965,  1968,  1969,  1970,  1973,  1976,  1980,
    1985,  1990,  1995,  2000,  2006,  2011,  2015,  2020,  2024,  2030,
    2035,  2041,  2046,  2050,  2051,  2055,  2056,  2060,  2061,  2065,
    2066,  2071,  2076,  2079,  2082,  2087,  2092,  2097,  2103,  2109,
    2113,  2118,  2123,  2128,  2134,  2140,  2144,  2149,  2154,  2155,
    2156,  2157,  2158,  2159,  2160,  2161,  2162,  2163,  2164,  2165,
    2167,  2171,  2176,  2180,  2186,  2190,  2195,  2199,  2205,  2209,
    2214,  2217,  2221,  2224,  2228,  2231,  2235,  2238,  2243,  2246,
    2247,  2249,  2251,  2254,  2257,  2258,  2259,  2262,  2265,  2268,
    2269,  2270,  2271,  2272,  2277,  2281,  2286,  2290,  2293,  2294,
    2295,  2296,  2297,  2302,  2306,  2311,  2316,  2322,  2328,  2334,
    2341,  2346,  2350,  2354,  2359,  2359,  2359,  2359,  2359,  2359,
    2359,  2360,  2360,  2360,  2360,  2360,  2360,  2362,  2367,  2373,
    2380,  2384,  2385,  2389,  2394,  2398,  2402,  2407,  2411,  2416,
    2417,  2418,  2419,  2421,  2426,  2427,  2432,  2437,  2444,  2450,
    2455,  2459,  2468,  2476,  2483,  2489,  2498,  2507,  2514,  2521,
    2529,  2537,  2543,  2549,  2554,  2560,  2564,  2569,  2577,  2582,
    2589,  2594,  2601,  2606,  2613,  2619,  2628,  2629,  2630,  2635,
    2640,  2647,  2652,  2659,  2664,  2671,  2677,  2682,  2687,  2692,
    2695,  2698,  2702,  2708,  2713,  2718,  2723,  2726,  2729,  2733,
    2737,  2743,  2749,  2755,  2760,  2765,  2770,  2775,  2778,  2781,
    2786,  2791,  2794,  2797,  2800,  2803,  2804,  2805,  2808,  2812,
    2819,  2823
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AWAIT", "ELSE", "IMPORT", "PASS",
  "NONE", "BREAK", "EXCEPT", "CLASS", "FALSEE", "IN", "RAISE", "TRUEE",
  "FINALLY", "IS", "AND", "CONTINUE", "MATCH", "NOT", "WITH", "ASYNC",
  "ELIF", "IF", "OR", "YIELD", "LAMBDA", "TRY", "AS", "FROM", "NONLOCAL",
  "WHILE", "ASSERT", "DEL", "GLOBAL", "FOR", "DEF", "CASE", "IDENTIFIER",
  "FN", "END", "NUMBER", "STRING", "RETURN", "SINGLESTRING", "ZERO",
  "EQUAL", "NOTEQUAL", "GTE", "SME", "INTDIVIDE", "POWER", "ASSIGN",
  "ASSIGNADD", "ASSIGNMINUS", "ASSIGNMUL", "ASSIGNDIVIDE",
  "ASSIGNINTDIVIDE", "ASSIGNPOWER", "ASSIGNMODULUS", "ASSIGNARRMUL",
  "ASSIGNANDBIT", "ASSIGNRIGHTSHIFT", "ASSIGNLEFTSHIFT", "ASSIGNXORBIT",
  "ASSIGNORBIT", "RIGHTSHIFT", "LEFTSHIFT", "INDENT", "DEDENT", "NEWLINE",
  "NOTIN", "ISNOT", "'<'", "'>'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'",
  "'@'", "'/'", "'%'", "UMINUS", "UADD", "'~'", "':'", "'.'", "')'", "']'",
  "'('", "'['", "'}'", "'{'", "','", "';'", "'='", "$accept", "program",
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
  "mydefparameter", "parameter_list_starargs", "parameter", "defparameter", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,    60,    62,   124,    94,    38,    43,
      45,    42,    64,    47,    37,   329,   330,   126,    58,    46,
      41,    93,    40,    91,   125,   123,    44,    59,    61
};
# endif

#define YYPACT_NINF -715

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-715)))

#define YYTABLE_NINF -484

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1970,    55,    29,  -715,  -715,    41,  2679,  -715,   377,   555,
    5111,  3462,   226,   -27,    18,   126,  5111,  2679,   820,   128,
     840,   150,  5155,  -715,  2679,  -715,   407,   644,  1102,  5111,
    1195,    33,   546,   805,    95,    31,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,    27,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  1252,
     286,  3158,  5168,  5203,   188,  -715,  -715,     1,   653,   667,
     199,   207,   745,  -715,   762,   279,  -715,  -715,  -715,  -715,
    -715,  -715,  4958,   202,  -715,  -715,  -715,  -715,  2296,   203,
     266,  -715,  5216,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,   314,   432,   917,   361,   384,  -715,  -715,  -715,   292,
      12,   283,   614,   607,  1199,  1660,  2079,   402,  -715,   400,
    -715,   504,   360,  2679,   372,  -715,  -715,   457,     8,  2679,
     429,  -715,  -715,   441,   466,  1446,    18,  -715,   548,   483,
     494,   505,   813,   388,  1228,  1669,   858,   384,  -715,   483,
      26,   561,  1343,  1833,    38,   592,   712,  1322,  2679,   571,
    5002,   883,  -715,   532,   538,  -715,   607,   625,  -715,   607,
     625,  -715,    77,  1539,  2461,  1411,   574,   581,   607,   625,
    -715,   504,  1694,  1002,  1560,  4244,   567,  2045,   154,   595,
     618,  1799,  1077,  1642,  4262,   580,   154,   591,   630,   660,
    2028,  2028,  -715,   647,   659,   668,   662,   656,   684,  -715,
    1970,   741,   751,   759,  -715,   650,  2222,   650,  2028,   650,
     650,   767,  5002,   883,  -715,   717,  2271,   794,  5002,  2444,
    2555,  2697,  2028,  2798,  2809,  2028,  2028,  2028,  2028,  2028,
    2028,  -715,   816,   833,  -715,  -715,  -715,  -715,  -715,  -715,
    2028,    42,  2028,   377,   377,   377,  -715,   301,   623,  3104,
    2161,  4306,  -715,  1462,  -715,   756,  -715,   883,   753,  -715,
    -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  2679,  5020,   415,   518,  -715,   817,    29,  -715,
     766,  1446,   770,    24,   776,   525,   686,   725,  2679,   777,
    1446,  -715,  2679,   775,   782,   376,   784,   785,  -715,  2679,
    2679,   464,   787,   803,    62,   822,   808,  -715,    57,   869,
     823,  1446,  2679,   933,  2675,  4324,   953,   989,  1018,   823,
    4958,    43,  2844,  4349,    44,    66,    67,  4958,  4958,   256,
     824,   607,   625,  -715,  -715,  -715,  5029,   827,   832,  -715,
     180,   836,   314,   161,  3083,  4393,   361,  -715,   910,  2679,
     883,  -715,   842,   504,  3208,  1095,  3306,  4411,  2045,   839,
     504,  3257,  1107,  3571,  4436,  2045,   845,   883,  -715,   844,
    -715,   607,  3788,  4480,  2343,  3695,   902,  5002,   883,  -715,
     857,   673,   750,  -715,   925,   982,   872,  -715,  -715,  3862,
    4498,  4015,   924,  5002,   883,  -715,   873,  1019,  1351,  -715,
    -715,  -715,  4958,   878,  -715,   574,  -715,  -715,  5049,   881,
    -715,  2679,  -715,  -715,   719,   926,   724,   314,  3882,  4523,
     361,   607,   625,  -715,   361,   625,  -715,   361,   361,  -715,
     880,   290,   896,   910,   607,   625,  -715,  -715,   903,   365,
     908,   607,   625,  -715,   607,   625,  -715,   607,   625,  -715,
     625,  -715,   607,   625,  -715,   607,   625,  -715,  2079,     1,
    2079,     1,   653,   653,   667,   199,  -715,  -715,   207,  2028,
     574,    61,   279,  -715,  -715,   202,  -715,  1131,  3909,  4567,
    1773,  1264,  1299,  -715,  -715,   910,   913,  -715,   905,  -715,
     920,    14,  -715,  -715,  -715,   931,   974,   981,   110,  1446,
    1446,   940,  -715,   439,    70,   937,  -715,  -715,   457,   943,
     996,   408,   961,  -715,  -715,   964,  -715,   424,  3818,  4585,
     977,   522,  -715,   615,  -715,  -715,  3545,   965,    22,  -715,
    1031,  -715,  1034,  1072,  -715,  1069,  1168,   993,  4958,    99,
     118,  4958,  4958,  4958,   995,  1001,    81,   994,   509,  2679,
    1006,  -715,  5002,  1005,  5084,  2305,  1010,  -715,  -715,   650,
     451,   459,   415,   518,   314,   224,  3944,  4610,   361,  -715,
     910,  -715,   607,  3988,  4654,  2343,   883,  -715,  1017,   954,
    1206,  -715,  -715,  -715,   607,  4006,  4672,  2343,   883,  -715,
    1030,  1479,  1553,  -715,  -715,   910,  1586,  1614,   607,   625,
    -715,  -715,  1039,   427,  1040,   910,  -715,  -715,  1118,   159,
     831,  4032,  4697,   186,  1120,  -715,  1565,  1717,   607,   625,
    -715,  -715,  1045,   467,  1052,   910,  -715,  -715,  1050,  -715,
    1053,  1063,  -715,   154,  1446,  1064,   734,  1086,   542,  1088,
     415,   518,  -715,  2879,  -715,  -715,  3315,  -715,   574,  2679,
    -715,  1393,  1423,  -715,  -715,  -715,  3664,  2679,  -715,  1117,
    -715,  2679,  -715,  -715,  -715,    24,  1078,  -715,  -715,  1446,
     114,  1096,  1097,  5111,   176,  2679,  -715,  1091,   457,  -715,
     457,   457,  1138,   337,  1105,  -715,  -715,  2435,  -715,  1135,
    2679,  1446,    13,  1446,  1116,  5107,  1126,  -715,  1128,  1137,
    1140,  -715,  -715,  3545,  1184,  1197,  -715,    10,  -715,  1156,
    1446,  1157,  4958,  4958,  1163,  1164,  1165,  1446,  1446,  2679,
    1446,   139,   156,  1166,  -715,  2679,  1111,   476,  2679,  2679,
    1174,  -715,   578,  2679,   361,   798,   865,  -715,  4050,  4741,
     893,  1083,   875,  -715,  4094,  4759,  1263,  -715,   650,   570,
     708,   415,   518,  -715,  1686,  1809,  -715,   910,  -715,  -715,
    -715,  1815,  1875,  -715,   910,  -715,  -715,  -715,  -715,  -715,
    3633,  -715,   196,   900,  4112,  4784,   201,  1251,   377,   213,
    4138,  4828,   238,   246,   252,   377,   377,  -715,  -715,  -715,
    4846,  -715,  4958,  -715,  5049,  -715,  2679,  -715,  -715,  1446,
    1446,  1177,   550,   169,  1179,   577,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,   920,  -715,  1175,  -715,  -715,  2679,  1446,
     259,  1446,  1185,  1193,  5111,  -715,  1187,  1188,   457,  -715,
    1202,   337,  -715,  -715,  -715,    15,  -715,  1254,  1446,  -715,
    1446,  1446,  1446,  1446,  -715,  1204,  1272,  1274,  -715,     9,
      68,  1446,  1307,  1446,  1234,  1239,  1446,  1446,  1446,  1324,
    1325,  1242,  -715,  2679,  1446,  2679,  1446,   263,  -715,  5002,
    -715,  5002,  -715,  1235,  -715,  2679,  5002,  1241,   945,  4156,
    4871,  1119,  1150,  1338,  1412,  4200,  4915,  1738,  1876,  1888,
     361,  -715,  -715,  -715,  -715,  -715,  -715,  -715,   377,   260,
    4218,  4933,   276,   298,   316,   377,   377,   648,   377,   324,
     340,   377,   377,   377,   648,   648,  -715,  -715,  -715,  -715,
    1446,   271,  1248,  2679,  1446,   275,   374,  1257,  -715,  -715,
    1256,  -715,  2679,  1446,  -715,  1446,  1446,  1261,  -715,  -715,
    1259,   337,  1262,  -715,  1326,  1446,  1280,  -715,  1356,  -715,
    1357,  -715,  -715,  1335,  -715,   151,  -715,  -715,  1286,  -715,
    1293,  1379,  1446,  1446,  1390,  1394,  1395,  1312,  1316,  1446,
    1317,  -715,  1319,  -715,  2679,  1446,   603,  -715,  -715,   621,
    -715,  1708,  1787,  1922,  1982,   648,   377,   349,   425,   377,
     377,   377,   648,   648,   377,  -715,  -715,  -715,   648,   377,
     377,   648,   648,   648,  -715,  -715,  -715,  2679,  1446,   391,
    1328,  -715,  2679,  1446,  2679,  1446,   404,  1446,  1330,  -715,
    -715,  -715,  1446,  -715,    17,  1337,  -715,  1446,  1358,  1360,
    -715,  -715,    34,   233,  -715,  1446,  1362,  1408,  1409,  1367,
    1368,  1370,  1446,  1446,  -715,  1446,  1446,  1373,  -715,  5002,
    -715,   648,   377,   377,   648,   648,   648,  -715,  -715,   648,
    -715,   648,   648,  -715,  -715,  -715,  1381,  -715,  2679,  1446,
    1446,  1383,  -715,  1386,  -715,  2679,  1446,  -715,  1446,  -715,
    1446,  -715,  1446,  1446,  -715,  -715,  -715,  1336,  -715,  1446,
    1396,  1410,  1446,  1446,  1446,  -715,  -715,  -715,  -715,  1446,
    -715,   648,   648,  -715,  -715,  -715,  -715,  -715,  -715,  1446,
    1414,  -715,  -715,  1446,  1446,  1422,  -715,  -715,  -715,  -715,
    -715,  -715,  -715,  1446,  1446,  -715,  -715,  -715,  -715,  -715,
    -715,  -715,  1446,  -715,  -715,  1446,  -715,  -715,  -715,  -715
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,   369,   374,     0,   514,   375,     0,     0,
       0,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   303,   118,   501,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     8,
       9,    52,    53,    54,    10,     0,    89,    11,    13,    12,
     194,   119,   120,   121,   123,   122,   124,   125,   513,   307,
     251,   191,   192,   193,   250,   272,   282,   304,   310,   313,
     315,   317,   319,   337,   341,   333,   335,   363,   343,   340,
     344,   379,   358,   357,     4,   366,   364,   365,     0,     0,
     402,   367,     0,   368,   371,   370,   372,   373,   376,   378,
     377,   247,     0,     0,   246,   245,   191,   192,   193,   538,
     520,     0,     0,   303,     0,     0,   307,   516,   338,     0,
     117,   303,     0,     0,   189,   187,   589,     0,   586,     0,
       0,   561,   568,   590,   567,     0,   546,   547,     0,   549,
       0,   381,   508,     0,     0,     0,   505,     0,   504,   551,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   391,   407,   502,   500,   280,   277,   274,   279,
     276,   273,   303,     0,     0,   307,   362,     0,   281,   278,
     275,   303,     0,   252,     0,     0,     0,   307,   340,     0,
       0,     0,   256,     0,     0,     0,   363,     0,   351,     0,
       0,     0,   172,     0,     0,   175,     0,   340,     0,     1,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,   415,   387,   416,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   332,   329,     0,   325,   328,   326,   327,   323,   324,
       0,   320,     0,     0,     0,     0,   359,   360,   303,     0,
       0,     0,   383,   307,   382,     0,   385,   403,   404,   484,
     485,   486,   488,   489,   491,   490,   487,   494,   493,   492,
     495,   496,     0,     0,   248,   249,   540,     0,     0,   519,
     539,     0,     0,     0,     0,     0,   252,   256,     0,     0,
       0,   188,   190,   347,   588,   585,   582,   578,   345,     0,
       0,   566,   564,     0,     0,     0,    20,   548,     0,     0,
     550,     0,     0,   506,     0,     0,   507,   509,   510,   552,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   267,   271,   263,   339,   197,   233,     0,   215,   232,
     219,     0,   432,     0,     0,     0,   434,   430,   408,   503,
     412,   389,   413,   303,     0,   252,     0,     0,   307,     0,
     303,     0,   256,     0,     0,   307,     0,   409,   401,   410,
      91,   303,     0,     0,   307,     0,     0,     0,   418,   393,
     419,   252,   256,   185,     0,     0,     0,   126,   448,     0,
       0,     0,     0,     0,   424,   397,   425,   252,   256,   169,
     127,   168,   352,   353,   453,   182,   171,   173,   176,   177,
     174,     0,   170,     3,     0,     0,     0,     0,     0,     0,
     296,   266,   270,   262,   295,   292,   293,   297,   298,   196,
       0,   219,     0,   417,   265,   269,   261,   195,     0,   219,
       0,   264,   268,   260,   299,   289,   285,   300,   288,   283,
     294,   284,   301,   290,   286,   302,   291,   287,   308,   305,
     309,   306,   312,   311,   314,   316,   330,   331,   318,     0,
     322,     0,   334,   336,   361,     0,   390,   303,     0,     0,
     307,   252,   256,   386,   384,   405,   497,   477,   478,   476,
     518,   535,   541,    99,   100,   106,     0,     0,     0,     0,
       0,     0,   515,     0,    27,   349,   348,   587,     0,   569,
     581,   577,   574,   346,   591,   560,   565,   563,     0,     0,
       0,    55,    59,    64,    68,    14,    21,    22,   524,   533,
       0,   553,     0,    32,   380,   511,   512,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   234,
     235,   207,   216,   217,   244,     0,   220,   202,   436,     0,
       0,     0,   440,   444,   433,     0,     0,     0,   435,   431,
     414,   463,   303,     0,     0,   307,   421,   395,   422,   252,
     256,   464,   458,   472,   303,     0,     0,   307,   427,   399,
     428,   252,   256,   473,   467,   411,   252,   256,   254,   255,
     253,   198,     0,   219,     0,   420,   449,   450,     0,     0,
       0,     0,     0,     0,     0,   184,   252,   256,   258,   259,
     257,   199,     0,   219,     0,   426,   455,   456,   355,   354,
     179,     0,   178,   181,     0,     0,     0,     0,     0,     0,
       0,     0,   206,     0,   201,   205,     0,   200,   321,     0,
     388,   252,   256,   400,   392,   396,     0,   479,   517,     0,
     536,     0,   108,   107,   101,     0,     0,    96,    98,     0,
       0,     0,     0,     0,    26,     0,   350,   584,     0,   570,
       0,     0,   573,   559,   557,   562,    19,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,    69,    24,    23,     0,     0,   523,     0,   554,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,   236,   229,   222,   218,   243,
     241,   210,   349,   221,   438,     0,     0,   442,     0,     0,
       0,     0,     0,   446,     0,     0,     0,   437,     0,     0,
       0,   441,   445,   465,   252,   256,   466,   423,   461,   462,
     474,   252,   256,   475,   429,   470,   471,   452,   451,   211,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   457,   454,   213,
       0,   204,     0,   356,     0,   180,     0,   183,    95,     0,
       0,     0,     0,     0,     0,     0,   209,   208,   342,   394,
     398,   499,   498,   534,   105,   103,   102,    97,     0,     0,
       0,     0,     0,     0,     0,   583,   580,   576,     0,   558,
     567,   556,    15,    17,    18,     0,    61,     0,     0,    72,
       0,     0,     0,     0,    25,   522,   542,     0,   532,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,    36,
      34,     0,    82,     0,     0,     0,     0,     0,   237,     0,
     230,   223,   231,   224,   242,   240,   226,   227,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     439,   443,   447,   460,   459,   469,   468,   212,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,     0,     0,
       0,     0,     0,     0,   135,   131,   214,   181,    94,    93,
       0,     0,     0,     0,     0,     0,     0,     0,   537,   104,
       0,   116,     0,     0,    28,     0,     0,     0,   579,   575,
     572,   566,   564,   555,     0,     0,     0,    62,    57,    58,
      66,    67,   521,     0,   544,     0,   531,   528,     0,    33,
       0,    50,     0,     0,    38,    44,    40,     0,     0,     0,
       0,    86,     0,    85,     0,     0,     0,   225,   239,   349,
     228,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,     0,   134,   130,     0,   164,   145,   165,   139,     0,
       0,   143,   151,   155,   133,   129,    92,     0,     0,     0,
       0,    74,     0,     0,     0,     0,     0,     0,     0,   111,
      30,    29,     0,   571,   563,     0,    70,     0,     0,     0,
     543,   530,     0,     0,   527,     0,     0,    46,    42,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    88,     0,
     144,   138,     0,     0,   142,   150,   154,   132,   128,   167,
     137,   159,   163,   141,   149,   153,     0,   110,     0,     0,
       0,     0,    80,     0,    78,     0,     0,   112,     0,    31,
       0,    63,     0,     0,   545,   529,   526,     0,    49,     0,
       0,     0,     0,     0,     0,    37,    35,    83,    87,     0,
     136,   158,   162,   140,   148,   152,   166,   157,   161,     0,
       0,   113,    76,     0,     0,     0,    79,   115,    71,    56,
      65,   525,    51,     0,     0,    39,    45,    41,    81,   156,
     160,   114,     0,    75,    77,     0,    47,    43,   109,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -715,  1229,  -715,  -494,  2662,  -715,   781,  -493,  -715,  -715,
    -715,  -715,  1474,  -715,  -715,  -715,   966,  -715,  -715,   963,
    -715,  -715,  -715,  1466,  -715,  -278,  -143,   693,   847,  -715,
    -715,  -715,  -715,  -715,  1487,  -180,    56,  -715,  -715,  -715,
    -715,  -715,   884,  1490,  -715,  -715,  -715,   282,     0,  2693,
     287,   740,  1087,  -182,  -344,  -141,  -715,  -715,  -715,    40,
     606,   590,  1289,  1290,  1279,   -14,  -715,  -715,  1283,  -228,
    1281,    25,  2257,  -715,  1925,  -715,    21,  -505,   -18,   898,
    1133,  1291,  2947,     2,  -715,  -715,  -715,  -715,  2672,  2236,
      63,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,  -715,
    -479,     5,  -715,  -714,  1401,  -715,  -715,  1391,  -330,  -669,
    -129,  -305,  -116,  -282
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    34,    35,    36,   314,   697,   698,   315,   537,    37,
     684,    38,    39,    40,    41,   531,   532,    42,   533,   534,
      43,    44,    45,    46,    47,   294,   295,   676,   508,    48,
      49,    50,    51,    52,   195,  1005,  1006,  1007,    53,    54,
      55,   204,   419,   640,   206,    56,    57,    58,   116,    60,
     106,   107,   108,   347,   566,   736,   349,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   251,   252,    74,
      75,    76,    77,    78,    79,    80,   125,   303,   197,   413,
      81,    82,    83,   316,    85,    86,    87,    88,    89,   390,
      90,    91,    92,   283,    93,    94,    95,    96,    97,    98,
     289,   137,   111,   716,   138,    99,   100,   320,   130,   131,
     306,   132,   133,   134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,   104,    84,   860,   563,   312,   526,   110,   396,   557,
     686,   304,   307,   340,   176,   208,   410,   511,   146,   348,
     154,   668,   670,   519,   839,   481,   167,   170,   175,   519,
     179,   187,   187,   118,   696,   699,     1,   211,   330,   857,
     440,   287,   847,   669,   954,   165,   448,   126,   856,   212,
     337,   714,   230,     8,   241,   548,   551,   109,   242,    11,
      12,   135,   243,   505,   213,   659,   168,   171,   109,   127,
     180,   529,   181,   856,   682,    23,   506,   530,   552,   553,
     112,   348,   231,   232,   233,   234,   254,   348,   263,   244,
     245,   246,   247,   683,   101,   209,   538,    23,   128,   966,
     858,   848,   210,   955,   305,   507,   859,   136,   288,    29,
     288,   722,    26,    27,   182,   159,   248,   249,   715,   160,
      30,   729,   161,   183,  1095,   184,   185,   221,    33,   157,
     723,   222,   159,   221,   223,    59,   160,   222,   539,   360,
     377,   962,   964,   326,   187,   187,   645,   102,   103,   540,
      33,   334,   187,   187,   828,   386,   402,   342,   967,   387,
     403,   356,   388,   404,   968,   139,   159,   149,   176,   730,
     160,   788,   953,   368,   375,   361,   394,   176,   522,   873,
     833,   351,   384,   681,   187,   187,   415,   176,   386,   156,
     395,   384,   387,   187,   187,   586,   875,   343,   795,   834,
     568,   674,   829,   696,   699,   612,   675,   402,   908,   933,
      59,   403,    84,   915,   598,   430,   432,   434,   435,   437,
     438,   632,   695,   356,   357,   918,   445,   874,   733,   452,
     455,   458,   460,   463,   466,   468,   470,   686,   480,   519,
     229,  1041,   569,   442,   876,   176,   348,  1042,   159,   450,
     921,  1043,   160,   570,   571,   161,   433,   934,   922,   490,
     187,   187,   348,   757,   923,   126,   446,   356,   564,   453,
     456,   459,   996,   464,   467,   221,   565,   239,   127,   222,
     483,   646,   223,   649,   240,   159,   357,    61,   999,   160,
     221,    59,   161,   501,   222,   126,   255,   223,   257,   942,
      59,   266,   159,   984,   499,   758,   160,   128,   127,   360,
    1000,  1017,   547,   186,   129,  1022,   759,   760,   814,   554,
     555,    59,   290,  1096,   368,   375,  1094,   221,  1001,  1097,
     357,   222,   368,   375,   377,   386,  1009,   128,   226,   387,
     121,   402,   388,    23,   938,   403,   556,   943,   404,   159,
     176,   985,  1010,   160,   187,   187,   360,   176,   578,  1018,
     356,  1062,   267,  1023,   585,   221,   187,   187,   811,   222,
     262,   597,   377,   187,   187,   227,   126,   356,   564,   228,
       1,   286,   368,   375,   186,   609,   653,   386,   356,   127,
     689,   387,   880,   882,   388,   623,   186,     8,   882,   368,
     375,   629,   687,   159,   356,   402,   519,   160,   614,   403,
       1,   840,   404,   386,  1024,   126,   113,   387,   128,    23,
     586,   579,    61,   357,   634,   610,   186,   323,   518,   402,
      23,  1078,   298,   403,   186,     1,   598,  1063,   386,   299,
     357,   630,   387,   578,  1085,   586,   166,   126,   300,    23,
     221,   357,     8,   564,   222,   186,    26,    27,    11,    12,
     691,   656,  1025,   807,    30,   658,   186,   357,   302,   114,
     115,   121,    33,   227,    23,   186,   127,   228,   126,  1079,
     324,   325,   932,    33,   686,   937,    26,    27,   368,   375,
     745,   127,  1086,    23,    30,   578,   126,    61,   751,   114,
     115,    23,    33,   126,   386,   128,   579,   694,   387,    59,
      59,    26,    27,   201,   402,   564,   127,   309,   403,    30,
     128,   598,   284,   780,   114,   115,   704,    33,    59,   680,
     721,   705,   746,   724,   725,   726,    59,   706,   712,   310,
     752,   747,   186,   748,   749,   128,    33,   525,   126,     1,
     753,   754,   755,   318,    33,   564,   157,   158,   579,   840,
     917,   127,   311,   800,   564,   497,     8,   924,   925,   744,
     750,   756,   881,    12,   836,   837,   187,   187,    61,   319,
     578,   126,   321,   368,   375,   181,   356,    61,    23,   126,
     128,    20,   119,   159,   127,   368,   375,   160,   356,   732,
     331,   322,   127,    23,   338,   578,   186,   402,    61,   745,
     345,   403,    23,   510,   186,   578,   126,   292,   786,   708,
     792,   187,   187,   128,   709,    26,    27,   191,   358,   127,
     710,   128,   813,    30,   359,   578,   186,   192,   193,   194,
     931,    33,   882,   579,    59,   882,   526,     1,   186,   357,
     250,   746,   380,   332,   333,   186,    33,   393,   128,   157,
     901,   357,   748,   749,   186,    33,   564,   936,   579,   519,
     394,   409,  1004,   254,   886,   157,   158,   216,   579,    59,
     995,   186,   411,   169,   395,   397,    23,  1002,  1003,   427,
    1008,   564,    23,  1011,  1012,  1013,   159,    59,   579,   879,
     160,    59,   291,    59,   864,   865,   292,   293,   398,   564,
     186,   952,   159,    59,   221,   854,   160,  1059,   222,   161,
      59,   486,   950,    26,    27,   385,   412,    59,    59,   695,
      59,    30,   235,   236,   237,   238,   114,   115,   385,    33,
      62,   416,   428,   429,   421,    33,   891,   751,   187,   187,
      23,   414,   897,   417,   187,   187,   420,   241,   900,   750,
     756,   242,   386,   616,   418,   243,   387,   578,  1061,   388,
     186,  1064,  1065,  1066,   578,   386,  1069,   401,   422,   387,
     424,  1071,  1072,   912,   187,   187,   253,   254,   425,   752,
     368,   375,   244,   245,   246,   247,    61,    61,   426,   902,
     754,   755,   401,    33,   339,   293,   439,   644,     1,    59,
      59,   292,   293,   443,   402,    61,   648,   293,   403,   248,
     249,   250,   810,    61,   436,     8,   292,   472,   473,    59,
     579,    59,    12,   447,  1111,  1112,   476,   579,   461,   402,
     617,   469,   471,   403,   121,   477,   404,    23,    59,   495,
      59,    59,    59,    59,   494,   502,   500,   200,   186,   142,
     504,    59,    23,    59,   509,   186,    59,    59,    59,   513,
     789,   516,   528,    23,    59,    62,    59,   186,   517,   150,
     520,   521,    23,   527,    26,    27,   201,   159,   581,   368,
     375,   160,    30,   535,   161,   368,   375,   114,   115,   202,
      33,   143,   159,   186,   888,   536,   160,    23,   541,   161,
     368,   375,   144,   145,   894,    33,   558,    23,   561,   542,
       1,   151,   352,   790,   791,    23,    33,   567,   562,   592,
      59,    61,   152,   153,    59,    33,   604,     8,   580,   909,
     605,   611,    23,    59,    12,    59,    59,   221,   821,   574,
      62,   222,    23,   615,   223,    59,   121,   889,   890,    23,
      33,   618,   625,   631,   353,   647,    61,   895,   896,   635,
      33,   652,    59,    59,   639,   354,   355,   642,    33,    59,
    1014,  1015,   221,   591,    61,    59,   222,   654,    61,   223,
      61,   575,   910,   911,   655,    33,    26,    27,   201,   657,
      61,   667,   576,   577,    30,    33,   385,    61,   285,   114,
     115,   666,    33,   672,    61,    61,   288,    61,    59,   671,
     673,   619,   159,    59,    23,    59,   160,    59,   679,   360,
     186,    62,    59,   685,   159,   763,   186,    59,   160,   688,
      62,   360,   221,   386,   768,    59,   222,   387,   690,   377,
     388,  1060,    59,    59,   385,    59,    59,   692,  1067,  1068,
     693,    62,   713,   620,  1070,   703,   186,  1073,  1074,  1075,
     717,   385,   186,   718,   621,   622,   719,    33,   386,    59,
      59,   720,   387,   727,   731,   388,    59,    63,    59,   728,
      59,   386,    59,    59,   735,   387,    61,    61,   388,    59,
     389,   738,    59,    59,    59,     1,   743,   402,   386,    59,
     636,   403,   387,   767,   404,   388,    61,  1110,    61,    59,
    1113,  1114,  1115,    59,    59,  1116,   774,  1117,  1118,   401,
     779,   781,   796,    59,    59,    61,   799,    61,    61,    61,
      61,   172,    59,   801,    23,    59,   802,   385,    61,   804,
      61,   806,   809,    61,    61,    61,   823,   782,   386,   401,
      23,    61,   387,    61,   189,   586,   402,  1139,  1140,   826,
     403,   186,   159,   404,   593,   405,   160,   186,   812,   161,
     815,    26,    27,   157,   386,   831,   830,   835,   387,    30,
     838,   586,   186,   587,   173,   174,   402,    33,     1,   783,
     403,   841,     1,   598,   850,   599,   844,   879,   221,   766,
     784,   785,   222,    33,   851,   377,   852,    61,   700,     8,
     159,    61,    63,   855,   160,    11,    12,   360,   853,   660,
      61,     1,    61,    61,   178,   189,   856,    23,   121,   386,
     768,    23,    61,   387,   861,   863,   388,   189,     8,    62,
      62,   866,   867,   868,    11,    12,   877,   402,   401,    61,
      61,   403,   885,   916,   598,   930,    61,   181,    62,   935,
      23,   675,    61,   945,    26,    27,    62,   189,    26,    27,
     201,   946,    30,   948,   949,   189,    30,   114,   115,   296,
      33,   114,   115,   956,    33,   402,   769,    63,   951,   403,
     715,   963,   404,   215,   216,    61,   189,    26,    27,   182,
      61,   970,    61,   965,    61,    30,   385,   189,   327,    61,
     184,   185,   972,    33,    61,     1,   189,   973,   977,   978,
     979,   987,    61,   217,   218,   219,   220,   990,  1019,    61,
      61,   221,    61,    61,  1027,   222,     1,  1026,   223,  1032,
     224,   401,   221,   386,   603,  1033,   222,   387,  1034,   223,
     388,   341,   664,     8,    23,  1035,    61,    61,  1037,    11,
      12,  1038,  1039,    61,  1040,    61,  1044,    61,    63,    61,
      61,  1045,   181,  1046,    62,    23,    61,    63,   402,    61,
      61,    61,   403,   189,  1049,   404,    61,   665,  1050,  1051,
    1052,    26,    27,   401,  1053,  1055,    61,  1056,    63,    30,
      61,    61,  1100,  1101,   114,   115,  1080,    33,  1088,    62,
      61,    61,    26,    27,   182,  1090,  1131,   402,   769,    61,
      30,   403,    61,   335,   404,   184,   185,    62,    33,   423,
     402,    62,   637,    62,   403,   385,  1092,   404,  1093,     1,
    1099,     2,     3,    62,     4,  1102,  1103,   189,  1104,     6,
      62,  1109,   215,   216,     7,   189,     8,    62,    62,  1119,
      62,  1123,    11,    12,  1124,   401,    14,    15,   843,    17,
      18,    19,   386,   120,  1133,    22,   387,   189,    23,   586,
      24,   819,   217,   218,   219,   220,   711,   707,  1134,   189,
     221,   159,  1142,   770,   222,   160,   189,   377,   360,   378,
    1145,   214,   402,   215,   216,   189,   403,   313,   939,   598,
     203,   820,   825,   205,   805,    26,    27,    28,   474,   478,
     475,   385,   189,    30,   479,   482,   803,   317,    31,    32,
     329,    33,     1,   217,   218,   219,   220,     0,   484,    62,
      62,   221,     0,     0,     0,   222,     0,     0,   223,     8,
     493,   189,     0,     1,     0,    11,    12,     0,   386,    62,
     775,    62,   387,     0,     0,   388,     0,     0,   363,     0,
       8,    23,     0,     0,     0,     0,    11,    12,    62,     0,
      62,    62,    62,    62,     0,     0,    63,    63,     0,   181,
       0,    62,    23,    62,     0,   401,    62,    62,    62,     0,
       0,     0,     0,     0,    62,    63,    62,   385,    26,    27,
     364,   189,     0,    63,     0,     0,    30,     0,     0,   365,
       0,   366,   367,     0,    33,     0,     0,     0,   385,    26,
      27,   182,   402,     0,   776,     1,   403,    30,     0,   404,
     391,     0,   184,   185,   386,    33,   797,     0,   387,     0,
       0,   586,     8,     1,     0,     0,   401,     0,    11,    12,
      62,     0,     1,     0,    62,   386,   777,     0,     0,   387,
       8,   181,   586,    62,    23,    62,    62,    12,     0,     8,
       0,     0,     0,     0,     0,    62,    12,     1,     0,   121,
       0,     0,    23,   402,   778,     0,     0,   403,   181,   189,
     598,    23,    62,    62,     0,     0,   189,     0,     0,    62,
       0,    26,    27,   182,     0,    62,     0,     0,   189,    30,
       0,    63,   407,   381,   184,   185,    23,    33,   385,    26,
      27,   201,     0,     0,     0,     0,     0,    30,    26,    27,
     191,   297,   114,   115,   189,    33,    30,     0,    62,     0,
     328,   193,   194,    62,    33,    62,    63,    62,     0,   401,
       0,     0,    62,    26,    27,   386,   903,    62,     0,   387,
       0,    30,   586,     0,    63,    62,   382,   383,    63,    33,
      63,     0,    62,    62,     0,    62,    62,   386,   903,   822,
      63,   387,     1,     0,   586,     0,   402,    63,   798,     0,
     403,     0,     0,   598,    63,    63,     0,    63,     0,    62,
      62,     0,     0,     0,   215,   216,    62,   221,    62,   773,
      62,   222,    62,    62,   377,     0,     1,     0,   381,    62,
       0,    23,    62,    62,    62,     0,     0,     0,     0,    62,
       0,     0,     0,     8,   217,   218,   219,   220,     0,    62,
      12,   401,   221,    62,    62,     0,   222,   385,     0,   377,
       0,   663,   181,    62,    62,    23,   402,   904,    26,    27,
     403,   189,    62,   598,     0,    62,    30,   189,     0,     0,
       0,   399,   400,     0,    33,     0,    63,    63,   402,   904,
       0,     0,   403,     0,   386,   598,   905,     0,   387,     0,
       0,   586,    26,    27,   191,     0,    63,   189,    63,     0,
      30,     0,     0,   189,   336,   193,   194,   401,    33,     0,
       0,   117,     0,     0,     0,    63,   124,    63,    63,    63,
      63,     0,   141,     0,     0,     0,     0,     0,    63,   164,
      63,     0,     0,    63,    63,    63,   188,     0,   207,     0,
       0,    63,     0,    63,   402,   386,   906,   775,   403,   387,
       0,   598,   388,     1,     0,     2,     3,   402,     4,   776,
       5,   403,     0,     6,   404,     0,     0,     0,     7,     0,
       8,     0,     9,     0,    10,     0,    11,    12,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,     0,    22,
       0,   386,    23,   905,    24,   387,     0,    63,   586,     0,
       0,    63,   189,     0,     0,     0,     0,   188,   189,     0,
      63,     1,    63,    63,     0,     0,     0,     0,     0,   188,
       0,    25,    63,   189,     0,     0,     0,     0,   301,    26,
      27,    28,    29,     0,   308,     0,     0,    30,     0,    63,
      63,     0,    31,    32,     0,    33,    63,   113,     0,   188,
      23,   402,    63,   906,     0,   403,     0,   188,   598,     0,
       0,     0,     0,   344,     0,   350,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,   216,   188,     0,
       0,     0,     0,     0,     0,    63,     0,    26,    27,   188,
      63,     0,    63,     0,    63,    30,     0,     0,   188,    63,
     114,   115,     0,    33,    63,     0,   217,   218,   219,   220,
     215,   216,    63,     0,   221,     0,     0,     0,   222,    63,
      63,   223,    63,    63,     0,     0,     0,   441,     0,     0,
       0,     0,     0,   449,     0,     0,     0,     0,     0,     0,
     217,   218,   219,   220,     1,     0,    63,    63,   221,     0,
       0,     0,   222,    63,     0,    63,     0,    63,     0,    63,
      63,     8,     0,     0,     0,   188,    63,    11,    12,    63,
      63,    63,     0,     0,     0,     0,    63,     0,     0,     0,
     181,     0,     0,    23,     0,     0,    63,   496,   498,     0,
      63,    63,     0,     0,     0,     0,     0,     0,     0,     0,
      63,    63,     0,   512,     0,     1,     0,   515,     0,    63,
       0,     0,    63,     0,   523,   524,     0,     0,     0,     0,
      26,    27,   182,     0,     0,     0,     0,   544,    30,   188,
       0,   491,     0,   184,   185,     0,    33,   188,   163,     0,
       0,   431,     0,     0,    23,     0,     0,   122,     0,     0,
       0,   560,     0,   140,     1,     0,     0,     0,     0,   188,
       0,     0,     0,     0,   515,     0,   177,     0,     0,   196,
     196,   188,     0,     0,     0,   225,     0,     0,   188,     1,
       0,    26,    27,     0,     0,     0,     0,   188,     1,    30,
     444,     0,   613,    23,   114,   115,     8,    33,     0,     0,
       0,     0,    11,    12,   188,     8,   268,     0,   633,     0,
       0,     0,    12,     0,     0,   258,     0,     0,    23,     0,
       0,     0,     0,   641,   113,     0,   643,    23,     0,     0,
      26,    27,     0,   188,     0,     0,     0,     0,    30,     0,
     196,     0,     0,   114,   115,     0,    33,     0,     0,     0,
       0,     0,   196,     0,     0,    26,    27,   259,   163,     0,
       0,     0,   225,    30,    26,    27,   163,     0,   260,   261,
     225,    33,    30,   346,   215,   216,   741,   114,   115,     0,
      33,     0,   196,     0,     0,     0,     0,     0,   362,     0,
     196,   379,     0,   188,     0,     0,     0,   163,     0,     0,
       0,     0,     0,   225,   217,   218,   219,   220,   406,     0,
       0,   196,   221,     0,     0,     0,   222,     0,     1,   377,
       2,     3,   196,     4,     0,     5,     0,     1,     6,     0,
       0,   196,     0,     7,   702,     8,     0,     9,     0,    10,
       0,    11,    12,    13,     1,    14,    15,    16,    17,    18,
      19,    20,    21,     0,    22,     0,     0,    23,     0,    24,
       0,     8,     0,   451,   734,     0,    23,   737,    12,   740,
     742,     0,     0,     0,   163,     0,     0,     0,     0,   225,
     370,   188,     0,    23,     0,   842,     0,     0,   188,     0,
       0,     0,     0,     0,    26,    27,    28,    29,   196,     0,
     188,     0,    30,    26,    27,     0,     0,    31,    32,     0,
      33,    30,     0,     0,     0,     0,   114,   115,     0,    33,
      26,    27,   371,     0,     0,     0,   188,     0,    30,     0,
       0,     0,   372,   373,   374,     0,    33,     0,     1,   362,
       0,     0,   379,     0,   406,     0,     0,   362,     0,     0,
     379,     0,   406,     0,     0,     0,     0,     0,   742,     0,
       0,   742,   196,     0,   818,     0,     0,     0,     0,     0,
     196,     0,   515,     0,   454,     0,   824,    23,     0,   163,
       0,   588,     0,     0,   225,     0,   163,     0,   600,     0,
     515,   225,   196,     0,     0,     0,     0,   362,     0,     0,
     379,     0,     0,     0,   196,   845,     0,     0,   406,     0,
     702,   196,     0,     0,    26,    27,     0,     0,     0,     0,
     196,     0,    30,     0,   406,     0,     0,   114,   115,     0,
      33,     0,     0,     0,   871,     0,     0,   196,     0,     0,
     878,     0,     0,   883,   884,     0,     0,     0,   887,     0,
       0,     0,     0,   188,     0,     0,     0,     0,     1,   188,
       0,     0,     1,     0,     0,     0,   196,     0,     0,     0,
     148,     0,   155,     0,   105,     8,     0,     0,     0,     8,
       1,    11,    12,   190,   199,   742,    12,     0,     0,   188,
       0,   147,     0,   147,   363,   188,     0,    23,   113,     0,
       0,    23,     0,   362,     0,   742,   379,     0,   406,   641,
       0,   927,     0,     0,     0,     0,   457,     0,     0,    23,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,   940,    26,    27,   364,     0,    26,    27,
     265,     0,    30,     0,     0,   545,    30,   366,   367,     0,
      33,   114,   115,     0,    33,     0,    26,    27,     0,     0,
       0,   588,   600,     0,    30,   588,   600,     0,     0,   114,
     115,     0,    33,     0,     0,     0,     0,     0,   980,     0,
     982,     1,     0,     0,   986,     0,   986,     0,     0,     0,
     988,   989,     1,     0,   188,     0,   190,   199,   362,     0,
     188,   379,     0,     0,   190,   199,   406,     0,     0,     0,
     362,     0,     0,   379,   196,   188,   147,   462,   406,     0,
      23,   196,   588,   600,   147,   369,   376,     1,   465,     0,
       0,    23,     0,   196,   147,   163,   190,   199,  1020,   225,
       0,     0,   588,   600,     8,   190,   199,  1028,     0,     0,
      11,    12,     0,     0,     0,     0,     0,    26,    27,   196,
       0,     0,     1,   363,     0,    30,    23,     0,    26,    27,
     114,   115,     0,    33,     0,     0,    30,   588,   600,     8,
       0,   114,   115,     0,    33,     0,    12,     0,   147,  1057,
     147,     0,   147,   147,     0,     0,   147,     0,   113,     0,
       0,    23,     0,    26,    27,   364,     0,     0,     0,     0,
       0,    30,   190,   199,   549,     0,   366,   367,     0,    33,
     832,     0,  1076,     0,     0,     0,     0,  1081,     0,  1083,
       0,     0,     0,   503,     0,     0,     0,     0,    26,    27,
     147,     0,   514,     0,     0,     0,    30,   346,     0,     0,
     816,   114,   115,     0,    33,     0,     0,     0,     0,   198,
     198,   163,     0,   543,   989,     0,   225,   163,     0,     0,
       0,     0,   225,     0,     0,     0,   369,   376,     0,     0,
     588,   600,     0,  1120,   369,   376,   196,   588,   600,     0,
    1125,     0,   196,     0,     0,     0,     0,     0,   163,     0,
       0,     0,   225,     0,     0,   362,   190,   199,   379,   256,
     406,     0,     0,     0,     0,   264,     0,     0,   190,   199,
       0,     0,   196,     0,     0,   190,   199,     0,   196,     0,
     198,   147,     0,   147,   369,   376,     0,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,   624,     0,     0,
     147,   369,   376,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,     0,     0,     1,     0,   147,     0,
       0,   947,   198,     0,     0,     0,     0,   147,     0,     0,
     198,     0,     0,     8,     0,     0,     0,     1,     0,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   198,   181,     0,   362,    23,     0,   379,     0,   406,
     362,     0,   198,   379,     0,   406,   147,     0,     0,     0,
       0,   198,     0,   487,     0,   362,    23,   196,   379,     0,
     406,     0,     0,   196,     0,   588,   600,     0,     0,     0,
     369,   376,    26,    27,   182,     0,     0,     0,   196,     0,
      30,   677,   678,   572,     0,   184,   185,     0,    33,     0,
       0,     0,     0,    26,    27,     0,     0,     0,   147,     0,
       0,    30,     0,     0,     0,     0,   488,   489,     0,    33,
       0,     0,     0,     0,   485,     0,     0,     0,   198,     0,
       0,     1,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,  -481,  -481,  -481,  -481,     0,     0,   588,   600,   588,
     600,     0,     0,   588,   600,     0,     0,     0,     0,     0,
       0,     0,   369,   376,     0,     0,  -481,   582,   190,   199,
      23,     0,     0,     0,     0,   369,   376,     0,     0,     0,
       1,     0,   147,   147,   147,     0,     0,   369,   376,     0,
       0,     0,   198,   147,     0,     0,     0,   198,     0,   147,
     198,     0,     0,     0,   198,   198,     0,    26,    27,     0,
     787,   147,     0,   190,   199,    30,   594,     0,   147,    23,
     583,   584,   198,    33,     0,     0,   808,     0,   147,     1,
       0,   147,     0,   147,   198,     0,     0,     0,     1,     0,
       0,   198,     0,     0,     0,     0,     8,     0,   147,     0,
     198,     0,    11,    12,     0,     8,    26,    27,     0,     0,
       0,   827,    12,     0,    30,   181,     0,   198,    23,   595,
     596,     0,    33,     0,   113,     0,     0,    23,     0,   638,
       0,     0,     0,   846,     0,   849,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,   862,     0,     0,    26,    27,   182,     0,   869,
     870,     0,   872,    30,    26,    27,   589,     0,   184,   185,
       0,    33,    30,   346,     0,     0,   817,   114,   115,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,   199,     0,     0,     0,     0,   190,   199,     0,     0,
       0,   369,   376,     0,     0,     0,   198,     0,     0,   147,
       0,     0,     0,     0,     0,   147,     0,     0,     0,     0,
       0,   147,   147,   147,     0,     0,   190,   199,     0,     0,
     147,     0,   369,   376,     0,     1,     0,   147,     0,     0,
       0,   928,   929,     0,     0,     0,   147,     0,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,    12,
       0,   941,   123,   944,     0,   198,     0,     0,   198,   198,
     198,   113,     0,     0,    23,     0,     0,     0,     0,     0,
     957,     0,   958,   959,   960,   961,     0,     0,     0,     0,
       0,     0,     0,   969,   198,   971,     0,     0,   974,   975,
     976,   198,     0,     0,     0,     0,   981,     0,   983,     0,
       0,    26,    27,   198,     0,     0,     0,     0,     1,    30,
       2,     3,     0,     4,   114,   115,     0,    33,     6,     0,
       0,   369,   376,     7,     0,     8,     0,   369,   376,   198,
       0,    11,    12,     0,     1,    14,    15,     0,    17,    18,
      19,     0,   369,   376,    22,     0,     0,    23,     0,    24,
       0,     8,  1016,     0,     0,     0,  1021,    11,    12,     0,
       0,     0,     0,     0,     0,  1029,     0,  1030,  1031,     0,
     181,     0,     0,    23,     0,     0,     0,  1036,     0,     0,
       0,     0,     0,     0,    26,    27,    28,     0,     0,     0,
       0,     0,    30,     0,  1047,  1048,     1,    31,    32,     0,
      33,  1054,     0,     0,     0,     0,     0,  1058,     0,     0,
      26,    27,   182,     8,     0,     0,     0,     0,    30,     0,
      12,   601,     0,   184,   185,     0,    33,     1,     0,   198,
     198,     0,   113,     0,     0,    23,     0,     0,     0,     0,
    1077,     0,     0,     0,     8,  1082,     0,  1084,     0,  1087,
      11,    12,     0,     0,  1089,     0,   198,     0,     1,  1091,
       0,     0,   198,   121,     0,     0,    23,  1098,     0,     0,
       0,     0,    26,    27,  1105,  1106,     0,  1107,  1108,     0,
      30,   346,     0,     0,   907,   114,   115,     0,    33,     0,
       0,     0,   198,     0,   608,     0,     0,    23,   198,     0,
       0,  1121,  1122,    26,    27,   201,     0,     0,  1126,   638,
    1127,    30,  1128,     0,  1129,  1130,   114,   115,     0,    33,
       0,  1132,     0,     0,  1135,  1136,  1137,     0,     0,     0,
       0,  1138,     0,     0,    26,    27,     0,     0,     0,     0,
       0,  1141,    30,     0,     0,  1143,  1144,   114,   115,     0,
      33,     1,     0,     0,     0,  1146,  1147,     0,     0,     0,
       0,     0,     0,     0,  1148,     0,     0,  1149,     8,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
       0,     1,     0,     2,     3,     0,     4,   363,     5,     0,
      23,     6,     0,     0,     0,     0,     7,   198,     8,     0,
       9,     0,    10,   198,    11,    12,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,     0,    22,   198,     0,
      23,     0,    24,     0,     0,     1,     0,    26,    27,   364,
       0,     0,     0,     0,     0,    30,     0,     0,   606,     0,
     366,   367,     8,    33,     0,     1,     0,     0,    11,    12,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,   363,     8,     0,    23,    30,     0,     0,    11,    12,
      31,    32,     1,    33,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,    23,     0,     0,     0,     0,     8,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    26,    27,   364,     0,     0,     0,     1,   363,    30,
       0,    23,   626,     0,   366,   367,     0,    33,     0,     0,
       0,    26,    27,   201,     8,     0,     0,     0,     0,    30,
      11,    12,   650,     0,   114,   115,     0,    33,     0,     0,
       0,     0,     0,   181,     0,     0,    23,     0,    26,    27,
     364,     1,     0,     0,     0,     0,    30,     0,     0,   661,
       0,   366,   367,     0,    33,     0,     0,     0,     8,     1,
       0,     0,     0,     0,    11,    12,     0,     0,     1,     0,
       0,     0,     0,    26,    27,   182,     8,   363,     0,     0,
      23,    30,    11,    12,   761,     1,   184,   185,     0,    33,
       0,     0,     0,     0,     0,   363,     0,     0,    23,     0,
       0,     0,     8,     1,   628,     0,     0,    23,    11,    12,
       0,     0,     0,     0,     0,     0,     0,    26,    27,   364,
       8,   181,     0,     0,    23,    30,    11,    12,   764,     0,
     366,   367,     0,    33,     0,    26,    27,   364,     0,   181,
       0,     0,    23,    30,    26,    27,   771,     1,   366,   367,
       0,    33,    30,     0,     0,     0,     0,   114,   115,     0,
      33,    26,    27,   182,     8,     1,     0,     0,     0,    30,
      11,    12,   793,     0,   184,   185,     0,    33,     0,    26,
      27,   182,     8,   181,     0,     0,    23,    30,    11,    12,
     892,     1,   184,   185,     0,    33,     0,     0,     0,     0,
       0,   181,     0,     0,    23,     0,     0,     0,     8,     1,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
       0,     0,     0,    26,    27,   182,     8,   363,     0,     0,
      23,    30,    11,    12,   898,     0,   184,   185,     0,    33,
       0,    26,    27,   182,     0,   363,     0,     0,    23,    30,
       0,     0,   913,     1,   184,   185,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,   364,
       8,     1,     0,     0,     0,    30,    11,    12,   919,     0,
     366,   367,     0,    33,     0,    26,    27,   364,     8,   363,
       0,     0,    23,    30,    11,    12,   991,     1,   366,   367,
       0,    33,     0,     0,     0,     0,     0,   363,     0,     0,
      23,     0,     0,     0,     8,     1,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,     0,    26,
      27,   364,     8,   181,     0,     0,    23,    30,     0,    12,
     993,     0,   366,   367,     0,    33,     0,    26,    27,   364,
       0,   181,     0,     0,    23,    30,     0,     0,   997,     1,
     366,   367,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,   191,     8,     1,     0,     0,
       0,    30,     0,    12,     0,   392,   193,   194,     0,    33,
       0,    26,    27,   191,     8,   181,     0,     0,    23,    30,
       0,    12,     1,   408,   193,   194,     0,    33,     0,     0,
       0,     0,     0,   370,     0,     0,    23,     0,     0,     8,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,   191,   370,     0,
       0,    23,     0,    30,     0,     0,     1,   492,   193,   194,
       0,    33,     0,    26,    27,   371,     0,     0,     0,     0,
       0,    30,     0,     8,     1,   546,   373,   374,     0,    33,
      12,     0,     0,     0,     0,     0,     0,     0,    26,    27,
     371,     8,   181,     0,     0,    23,    30,     0,    12,     1,
     550,   373,   374,     0,    33,     0,     0,     0,     0,     0,
     181,     0,     0,    23,     0,     0,     8,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,   191,   181,     0,     0,    23,     0,
      30,     0,     0,     1,   573,   193,   194,     0,    33,     0,
      26,    27,   191,     0,     0,     0,     0,     0,    30,     0,
       8,     1,   590,   193,   194,     0,    33,    12,     0,     0,
       0,     0,     0,     0,     0,    26,    27,   191,     8,   370,
       0,     0,    23,    30,     0,    12,     1,   602,   193,   194,
       0,    33,     0,     0,     0,     0,     0,   370,     0,     0,
      23,     0,     0,     8,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,   371,   121,     0,     0,    23,     0,    30,     0,     0,
       1,   607,   373,   374,     0,    33,     0,    26,    27,   371,
       0,     0,     0,     0,     0,    30,     0,     8,     1,   627,
     373,   374,     0,    33,    12,     0,     0,     0,     0,     0,
       0,     0,    26,    27,   201,     8,   370,     0,     0,    23,
      30,     0,    12,     1,   651,   114,   115,     0,    33,     0,
       0,     0,     0,     0,   113,     0,     0,    23,     0,     0,
       8,     0,     0,     0,     0,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,   371,   181,
       0,     0,    23,     0,    30,     0,     0,     1,   662,   373,
     374,     0,    33,     0,    26,    27,   700,     0,     0,     0,
       0,     0,    30,   701,     8,     1,     0,   114,   115,     0,
      33,    12,     0,     0,     0,     0,     0,     0,     0,    26,
      27,   191,     8,   370,     0,     0,    23,    30,     0,    12,
       1,   762,   193,   194,     0,    33,     0,     0,     0,     0,
       0,   370,     0,     0,    23,     0,     0,     8,     0,     0,
       0,     0,     0,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,   371,   181,     0,     0,    23,
       0,    30,     0,     0,     1,   765,   373,   374,     0,    33,
       0,    26,    27,   371,     0,     0,     0,     0,     0,    30,
       0,     8,     1,   772,   373,   374,     0,    33,    12,     0,
       0,     0,     0,     0,     0,     0,    26,    27,   191,     8,
     181,     0,     0,    23,    30,     0,    12,     1,   794,   193,
     194,     0,    33,     0,     0,     0,     0,     0,   181,     0,
       0,    23,     0,     0,     8,     0,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,   191,   181,     0,     0,    23,     0,    30,     0,
       0,     1,   893,   193,   194,     0,    33,     0,    26,    27,
     191,     0,     0,     0,     0,     0,    30,     0,     8,     1,
     899,   193,   194,     0,    33,    12,     0,     0,     0,     0,
       0,     0,     0,    26,    27,   191,     8,   370,     0,     0,
      23,    30,     0,    12,     1,   914,   193,   194,     0,    33,
       0,     0,     0,     0,     0,   113,     0,     0,    23,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,   371,
     370,     0,     0,    23,     0,    30,     0,     0,     1,   920,
     373,   374,     0,    33,     0,    26,    27,     0,     0,     0,
       0,     0,     0,    30,   346,     8,     1,   926,   114,   115,
       0,    33,    12,     0,     0,     0,     0,     0,     0,     0,
      26,    27,   371,     8,   370,     0,     0,    23,    30,     0,
      12,     1,   992,   373,   374,     0,    33,     0,     0,     0,
       0,     0,   370,     0,     0,    23,     0,     0,     8,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,   371,   121,     0,     0,
      23,     0,    30,     0,     0,     1,   994,   373,   374,     0,
      33,     0,    26,    27,   371,     0,     0,     0,     0,     0,
      30,     0,     8,     1,   998,   373,   374,     0,    33,    12,
       0,     0,     1,     0,     0,     0,     0,    26,    27,   201,
       8,   113,     0,     0,    23,    30,    11,    12,     0,     8,
     114,   115,     1,    33,     0,     0,    12,     0,     0,   113,
       0,     0,    23,     0,     0,     0,     0,     0,   113,     8,
       0,    23,     0,     0,     0,     0,    12,     0,     0,     0,
       0,    26,    27,     0,     0,     0,     0,     1,   113,    30,
     346,    23,     0,     0,   114,   115,     0,    33,     0,    26,
      27,   200,     0,     0,     8,     0,     0,    30,    26,    27,
       1,    12,   114,   115,     1,    33,    30,   559,     0,     0,
       0,   114,   115,   113,    33,     0,    23,     8,    26,    27,
       0,     8,     0,     0,    12,     0,    30,     0,    12,     0,
       0,   114,   115,     0,    33,     0,   113,     0,     0,    23,
     121,     0,     0,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,     0,     0,     0,     0,     0,
       0,    30,   739,     0,     0,     0,   114,   115,     0,    33,
       0,     0,     0,     0,     0,     0,    26,    27,     0,     0,
      26,    27,     0,     0,    30,   701,     0,     0,    30,   114,
     115,     0,    33,   114,   115,     0,    33,   157,   158,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -482,  -482,  -482,  -482,  -482,  -482,  -482,  -482,
    -482,  -482,  -482,  -482,  -482,     0,     0,     0,     0,     0,
       0,     0,     0,  -480,   159,     0,     0,     0,   160,     0,
       0,     0,     0,   162,     0,     0,  -482,  -483,  -483,  -483,
    -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,  -483,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,     0,     0,     0,     0,     0,     0,     0,
       0,  -483,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282
};

static const yytype_int16 yycheck[] =
{
       0,     1,     0,   717,   348,   134,   311,     2,   188,   339,
     515,   127,   128,   156,    28,    33,   196,   295,    18,   160,
      20,   500,   501,   305,   693,   253,    26,    27,    28,   311,
      30,    31,    32,     8,   528,   528,     3,    10,    12,    29,
     222,    29,    29,    29,    29,    24,   228,    39,    39,    22,
      12,    29,    51,    20,    12,    12,    12,    39,    16,    26,
      27,    88,    20,    39,    37,     4,    26,    27,    39,    52,
      30,     9,    39,    39,     4,    42,    52,    15,    12,    12,
      39,   222,    81,    82,    83,    84,    25,   228,    88,    47,
      48,    49,    50,    23,    39,     0,    39,    42,    81,    90,
      90,    88,    71,    88,    96,    81,    96,    89,    96,    82,
      96,    12,    79,    80,    81,    89,    74,    75,    96,    93,
      87,    40,    96,    90,    90,    92,    93,    89,    95,    52,
      12,    93,    89,    89,    96,   135,    93,    93,    81,    96,
      96,   855,   856,   143,   144,   145,   424,    92,    93,    92,
      95,   151,   152,   153,    40,    89,    89,   157,    90,    93,
      93,   161,    96,    96,    96,    39,    89,    39,   182,    88,
      93,    12,   841,   173,   174,    98,    22,   191,   307,    40,
       4,   160,   182,   513,   184,   185,   200,   201,    89,    39,
      36,   191,    93,   193,   194,    96,    40,   157,    12,    23,
      39,    91,    88,   697,   697,   387,    96,    89,    12,    40,
     210,    93,   210,    12,    96,   215,   216,   217,   218,   219,
     220,   403,   527,   223,   161,    12,   226,    88,   558,   229,
     230,   231,   232,   233,   234,   235,   236,   742,   252,   521,
      52,    90,    81,   222,    88,   259,   387,    96,    89,   228,
      12,   965,    93,    92,    93,    96,   216,    88,    12,   259,
     260,   261,   403,    39,    12,    39,   226,   267,    88,   229,
     230,   231,    12,   233,   234,    89,    96,    78,    52,    93,
     255,   424,    96,   426,    77,    89,   223,     0,    12,    93,
      89,   291,    96,   288,    93,    39,    17,    96,    96,    40,
     300,    98,    89,    40,   283,    81,    93,    81,    52,    96,
      12,    40,   330,    31,    88,    40,    92,    93,   648,   337,
     338,   321,    39,    90,   324,   325,  1040,    89,    12,    96,
     267,    93,   332,   333,    96,    89,    12,    81,    52,    93,
      39,    89,    96,    42,   823,    93,    90,    88,    96,    89,
     364,    88,    12,    93,   354,   355,    96,   371,   358,    88,
     360,    12,    96,    88,   364,    89,   366,   367,   646,    93,
      88,   371,    96,   373,   374,    89,    39,   377,    88,    93,
       3,    89,   382,   383,   102,   385,    96,    89,   388,    52,
     519,    93,   736,   737,    96,   395,   114,    20,   742,   399,
     400,   401,   518,    89,   404,    89,   688,    93,   387,    93,
       3,   693,    96,    89,    40,    39,    39,    93,    81,    42,
      96,   358,   135,   360,   403,   385,   144,    39,    52,    89,
      42,    40,    30,    93,   152,     3,    96,    12,    89,    39,
     377,   401,    93,   443,    40,    96,    39,    39,    88,    42,
      89,   388,    20,    88,    93,   173,    79,    80,    26,    27,
      52,    96,    88,   643,    87,   479,   184,   404,    96,    92,
      93,    39,    95,    89,    42,   193,    52,    93,    39,    88,
      92,    93,   812,    95,   989,   815,    79,    80,   488,   489,
      39,    52,    88,    42,    87,   495,    39,   210,    39,    92,
      93,    42,    95,    39,    89,    81,   443,    83,    93,   509,
     510,    79,    80,    81,    89,    88,    52,    88,    93,    87,
      81,    96,    90,    96,    92,    93,     4,    95,   528,    90,
     548,     9,    81,   551,   552,   553,   536,    15,   536,    98,
      81,    90,   260,    92,    93,    81,    95,    83,    39,     3,
      91,    92,    93,     5,    95,    88,    52,    53,   495,   841,
     788,    52,    96,    96,    88,   283,    20,   795,   796,   569,
     570,   571,    96,    27,   690,   691,   576,   577,   291,    96,
     580,    39,    88,   583,   584,    39,   586,   300,    42,    39,
      81,    36,    37,    89,    52,   595,   596,    93,   598,    90,
      39,    96,    52,    42,    12,   605,   324,    89,   321,    39,
      39,    93,    42,    88,   332,   615,    39,    92,   618,     4,
     620,   621,   622,    81,     9,    79,    80,    81,    96,    52,
      15,    81,    90,    87,    96,   635,   354,    91,    92,    93,
      90,    95,   986,   580,   644,   989,   951,     3,   366,   586,
      76,    81,    71,    92,    93,   373,    95,    90,    81,    52,
      90,   598,    92,    93,   382,    95,    88,    90,   605,   951,
      22,    91,    24,    25,    96,    52,    53,    52,   615,   679,
     908,   399,    91,    39,    36,    90,    42,   915,   916,    39,
     918,    88,    42,   921,   922,   923,    89,   697,   635,    96,
      93,   701,    88,   703,   722,   723,    92,    93,    90,    88,
     428,   840,    89,   713,    89,   713,    93,    96,    93,    96,
     720,    98,   838,    79,    80,    52,    96,   727,   728,  1034,
     730,    87,    79,    80,    67,    68,    92,    93,    52,    95,
       0,    94,    92,    93,    88,    95,   746,    39,   748,   749,
      42,    91,   752,    94,   754,   755,    94,    12,   758,   759,
     760,    16,    89,    90,    96,    20,    93,   767,   996,    96,
     488,   999,  1000,  1001,   774,    89,  1004,    52,    94,    93,
      39,  1009,  1010,   783,   784,   785,    24,    25,    37,    81,
     790,   791,    47,    48,    49,    50,   509,   510,    39,    91,
      92,    93,    52,    95,    92,    93,    39,    88,     3,   809,
     810,    92,    93,    96,    89,   528,    92,    93,    93,    74,
      75,    76,    88,   536,   218,    20,    92,   237,   238,   829,
     767,   831,    27,    39,  1062,  1063,    20,   774,   232,    89,
      90,   235,   236,    93,    39,    12,    96,    42,   848,    96,
     850,   851,   852,   853,    98,    89,    39,    52,   576,    39,
      90,   861,    42,   863,    88,   583,   866,   867,   868,    92,
      39,    96,    69,    42,   874,   135,   876,   595,    96,    39,
      96,    96,    42,    96,    79,    80,    81,    89,    90,   889,
     890,    93,    87,    71,    96,   895,   896,    92,    93,    94,
      95,    81,    89,   621,    39,    97,    93,    42,    39,    96,
     910,   911,    92,    93,    39,    95,    92,    42,    91,    96,
       3,    81,    39,    92,    93,    42,    95,    91,    96,    90,
     930,   644,    92,    93,   934,    95,    91,    20,    96,    39,
      96,    39,    42,   943,    27,   945,   946,    89,   666,    39,
     210,    93,    42,    96,    96,   955,    39,    92,    93,    42,
      95,    36,    90,    39,    81,    39,   679,    92,    93,    96,
      95,    91,   972,   973,    96,    92,    93,    96,    95,   979,
     924,   925,    89,    90,   697,   985,    93,    91,   701,    96,
     703,    81,    92,    93,    91,    95,    79,    80,    81,    91,
     713,    96,    92,    93,    87,    95,    52,   720,    91,    92,
      93,    98,    95,    39,   727,   728,    96,   730,  1018,    88,
      39,    39,    89,  1023,    42,  1025,    93,  1027,    88,    96,
     748,   291,  1032,    96,    89,    90,   754,  1037,    93,    96,
     300,    96,    89,    89,    90,  1045,    93,    93,    52,    96,
      96,   995,  1052,  1053,    52,  1055,  1056,    96,  1002,  1003,
      96,   321,    97,    81,  1008,    88,   784,  1011,  1012,  1013,
      39,    52,   790,    39,    92,    93,     4,    95,    89,  1079,
    1080,    88,    93,    88,    90,    96,  1086,     0,  1088,    88,
    1090,    89,  1092,  1093,    88,    93,   809,   810,    96,  1099,
      98,    96,  1102,  1103,  1104,     3,    96,    89,    89,  1109,
      91,    93,    93,    96,    96,    96,   829,  1061,   831,  1119,
    1064,  1065,  1066,  1123,  1124,  1069,    96,  1071,  1072,    52,
      91,    91,    12,  1133,  1134,   848,    91,   850,   851,   852,
     853,    39,  1142,    91,    42,  1145,    96,    52,   861,    96,
     863,    88,    88,   866,   867,   868,    39,    39,    89,    52,
      42,   874,    93,   876,    31,    96,    89,  1111,  1112,    91,
      93,   889,    89,    96,    91,    98,    93,   895,    92,    96,
      92,    79,    80,    52,    89,    88,    90,    96,    93,    87,
      52,    96,   910,    98,    92,    93,    89,    95,     3,    81,
      93,    96,     3,    96,    88,    98,    71,    96,    89,    90,
      92,    93,    93,    95,    88,    96,    88,   930,    81,    20,
      89,   934,   135,    39,    93,    26,    27,    96,    88,    98,
     943,     3,   945,   946,    39,   102,    39,    42,    39,    89,
      90,    42,   955,    93,    88,    88,    96,   114,    20,   509,
     510,    88,    88,    88,    26,    27,    90,    89,    52,   972,
     973,    93,    88,    12,    96,    88,   979,    39,   528,    90,
      42,    96,   985,    88,    79,    80,   536,   144,    79,    80,
      81,    88,    87,    96,    96,   152,    87,    92,    93,    90,
      95,    92,    93,    39,    95,    89,    90,   210,    96,    93,
      96,    29,    96,    51,    52,  1018,   173,    79,    80,    81,
    1023,     4,  1025,    39,  1027,    87,    52,   184,    90,  1032,
      92,    93,    88,    95,  1037,     3,   193,    88,     4,     4,
      88,    96,  1045,    81,    82,    83,    84,    96,    90,  1052,
    1053,    89,  1055,  1056,    88,    93,     3,    90,    96,    88,
      98,    52,    89,    89,    91,    96,    93,    93,    96,    96,
      96,    39,    98,    20,    42,    39,  1079,  1080,    88,    26,
      27,    15,    15,  1086,    39,  1088,    90,  1090,   291,  1092,
    1093,    88,    39,     4,   644,    42,  1099,   300,    89,  1102,
    1103,  1104,    93,   260,     4,    96,  1109,    98,     4,     4,
      88,    79,    80,    52,    88,    88,  1119,    88,   321,    87,
    1123,  1124,     4,     4,    92,    93,    88,    95,    88,   679,
    1133,  1134,    79,    80,    81,    88,    90,    89,    90,  1142,
      87,    93,  1145,    90,    96,    92,    93,   697,    95,   210,
      89,   701,    91,   703,    93,    52,    88,    96,    88,     3,
      88,     5,     6,   713,     8,    88,    88,   324,    88,    13,
     720,    88,    51,    52,    18,   332,    20,   727,   728,    88,
     730,    88,    26,    27,    88,    52,    30,    31,   697,    33,
      34,    35,    89,     9,    88,    39,    93,   354,    42,    96,
      44,    98,    81,    82,    83,    84,   533,   531,    88,   366,
      89,    89,    88,    91,    93,    93,   373,    96,    96,    98,
      88,    45,    89,    51,    52,   382,    93,    71,   825,    96,
      33,    98,   675,    33,   640,    79,    80,    81,   239,   250,
     240,    52,   399,    87,   251,   254,   638,   136,    92,    93,
     149,    95,     3,    81,    82,    83,    84,    -1,   257,   809,
     810,    89,    -1,    -1,    -1,    93,    -1,    -1,    96,    20,
      98,   428,    -1,     3,    -1,    26,    27,    -1,    89,   829,
      91,   831,    93,    -1,    -1,    96,    -1,    -1,    39,    -1,
      20,    42,    -1,    -1,    -1,    -1,    26,    27,   848,    -1,
     850,   851,   852,   853,    -1,    -1,   509,   510,    -1,    39,
      -1,   861,    42,   863,    -1,    52,   866,   867,   868,    -1,
      -1,    -1,    -1,    -1,   874,   528,   876,    52,    79,    80,
      81,   488,    -1,   536,    -1,    -1,    87,    -1,    -1,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    -1,    52,    79,
      80,    81,    89,    -1,    91,     3,    93,    87,    -1,    96,
      90,    -1,    92,    93,    89,    95,    91,    -1,    93,    -1,
      -1,    96,    20,     3,    -1,    -1,    52,    -1,    26,    27,
     930,    -1,     3,    -1,   934,    89,    90,    -1,    -1,    93,
      20,    39,    96,   943,    42,   945,   946,    27,    -1,    20,
      -1,    -1,    -1,    -1,    -1,   955,    27,     3,    -1,    39,
      -1,    -1,    42,    89,    90,    -1,    -1,    93,    39,   576,
      96,    42,   972,   973,    -1,    -1,   583,    -1,    -1,   979,
      -1,    79,    80,    81,    -1,   985,    -1,    -1,   595,    87,
      -1,   644,    90,    39,    92,    93,    42,    95,    52,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    87,    79,    80,
      81,    91,    92,    93,   621,    95,    87,    -1,  1018,    -1,
      91,    92,    93,  1023,    95,  1025,   679,  1027,    -1,    52,
      -1,    -1,  1032,    79,    80,    89,    90,  1037,    -1,    93,
      -1,    87,    96,    -1,   697,  1045,    92,    93,   701,    95,
     703,    -1,  1052,  1053,    -1,  1055,  1056,    89,    90,   666,
     713,    93,     3,    -1,    96,    -1,    89,   720,    91,    -1,
      93,    -1,    -1,    96,   727,   728,    -1,   730,    -1,  1079,
    1080,    -1,    -1,    -1,    51,    52,  1086,    89,  1088,    91,
    1090,    93,  1092,  1093,    96,    -1,     3,    -1,    39,  1099,
      -1,    42,  1102,  1103,  1104,    -1,    -1,    -1,    -1,  1109,
      -1,    -1,    -1,    20,    81,    82,    83,    84,    -1,  1119,
      27,    52,    89,  1123,  1124,    -1,    93,    52,    -1,    96,
      -1,    98,    39,  1133,  1134,    42,    89,    90,    79,    80,
      93,   748,  1142,    96,    -1,  1145,    87,   754,    -1,    -1,
      -1,    92,    93,    -1,    95,    -1,   809,   810,    89,    90,
      -1,    -1,    93,    -1,    89,    96,    91,    -1,    93,    -1,
      -1,    96,    79,    80,    81,    -1,   829,   784,   831,    -1,
      87,    -1,    -1,   790,    91,    92,    93,    52,    95,    -1,
      -1,     6,    -1,    -1,    -1,   848,    11,   850,   851,   852,
     853,    -1,    17,    -1,    -1,    -1,    -1,    -1,   861,    24,
     863,    -1,    -1,   866,   867,   868,    31,    -1,    33,    -1,
      -1,   874,    -1,   876,    89,    89,    91,    91,    93,    93,
      -1,    96,    96,     3,    -1,     5,     6,    89,     8,    91,
      10,    93,    -1,    13,    96,    -1,    -1,    -1,    18,    -1,
      20,    -1,    22,    -1,    24,    -1,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    89,    42,    91,    44,    93,    -1,   930,    96,    -1,
      -1,   934,   889,    -1,    -1,    -1,    -1,   102,   895,    -1,
     943,     3,   945,   946,    -1,    -1,    -1,    -1,    -1,   114,
      -1,    71,   955,   910,    -1,    -1,    -1,    -1,   123,    79,
      80,    81,    82,    -1,   129,    -1,    -1,    87,    -1,   972,
     973,    -1,    92,    93,    -1,    95,   979,    39,    -1,   144,
      42,    89,   985,    91,    -1,    93,    -1,   152,    96,    -1,
      -1,    -1,    -1,   158,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,   173,    -1,
      -1,    -1,    -1,    -1,    -1,  1018,    -1,    79,    80,   184,
    1023,    -1,  1025,    -1,  1027,    87,    -1,    -1,   193,  1032,
      92,    93,    -1,    95,  1037,    -1,    81,    82,    83,    84,
      51,    52,  1045,    -1,    89,    -1,    -1,    -1,    93,  1052,
    1053,    96,  1055,  1056,    -1,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,     3,    -1,  1079,  1080,    89,    -1,
      -1,    -1,    93,  1086,    -1,  1088,    -1,  1090,    -1,  1092,
    1093,    20,    -1,    -1,    -1,   260,  1099,    26,    27,  1102,
    1103,  1104,    -1,    -1,    -1,    -1,  1109,    -1,    -1,    -1,
      39,    -1,    -1,    42,    -1,    -1,  1119,   282,   283,    -1,
    1123,  1124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1133,  1134,    -1,   298,    -1,     3,    -1,   302,    -1,  1142,
      -1,    -1,  1145,    -1,   309,   310,    -1,    -1,    -1,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,   322,    87,   324,
      -1,    90,    -1,    92,    93,    -1,    95,   332,    22,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    10,    -1,    -1,
      -1,   346,    -1,    16,     3,    -1,    -1,    -1,    -1,   354,
      -1,    -1,    -1,    -1,   359,    -1,    29,    -1,    -1,    32,
      33,   366,    -1,    -1,    -1,    59,    -1,    -1,   373,     3,
      -1,    79,    80,    -1,    -1,    -1,    -1,   382,     3,    87,
      39,    -1,   387,    42,    92,    93,    20,    95,    -1,    -1,
      -1,    -1,    26,    27,   399,    20,    90,    -1,   403,    -1,
      -1,    -1,    27,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,   418,    39,    -1,   421,    42,    -1,    -1,
      79,    80,    -1,   428,    -1,    -1,    -1,    -1,    87,    -1,
     103,    -1,    -1,    92,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    79,    80,    81,   142,    -1,
      -1,    -1,   146,    87,    79,    80,   150,    -1,    92,    93,
     154,    95,    87,    88,    51,    52,    91,    92,    93,    -1,
      95,    -1,   145,    -1,    -1,    -1,    -1,    -1,   172,    -1,
     153,   175,    -1,   488,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    -1,   187,    81,    82,    83,    84,   192,    -1,
      -1,   174,    89,    -1,    -1,    -1,    93,    -1,     3,    96,
       5,     6,   185,     8,    -1,    10,    -1,     3,    13,    -1,
      -1,   194,    -1,    18,   529,    20,    -1,    22,    -1,    24,
      -1,    26,    27,    28,     3,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    -1,    -1,    42,    -1,    44,
      -1,    20,    -1,    39,   559,    -1,    42,   562,    27,   564,
     565,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,   263,
      39,   576,    -1,    42,    -1,    70,    -1,    -1,   583,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,   261,    -1,
     595,    -1,    87,    79,    80,    -1,    -1,    92,    93,    -1,
      95,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    95,
      79,    80,    81,    -1,    -1,    -1,   621,    -1,    87,    -1,
      -1,    -1,    91,    92,    93,    -1,    95,    -1,     3,   323,
      -1,    -1,   326,    -1,   328,    -1,    -1,   331,    -1,    -1,
     334,    -1,   336,    -1,    -1,    -1,    -1,    -1,   653,    -1,
      -1,   656,   325,    -1,   659,    -1,    -1,    -1,    -1,    -1,
     333,    -1,   667,    -1,    39,    -1,   671,    42,    -1,   363,
      -1,   365,    -1,    -1,   368,    -1,   370,    -1,   372,    -1,
     685,   375,   355,    -1,    -1,    -1,    -1,   381,    -1,    -1,
     384,    -1,    -1,    -1,   367,   700,    -1,    -1,   392,    -1,
     705,   374,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
     383,    -1,    87,    -1,   408,    -1,    -1,    92,    93,    -1,
      95,    -1,    -1,    -1,   729,    -1,    -1,   400,    -1,    -1,
     735,    -1,    -1,   738,   739,    -1,    -1,    -1,   743,    -1,
      -1,    -1,    -1,   748,    -1,    -1,    -1,    -1,     3,   754,
      -1,    -1,     3,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      18,    -1,    20,    -1,     1,    20,    -1,    -1,    -1,    20,
       3,    26,    27,    31,    32,   780,    27,    -1,    -1,   784,
      -1,    18,    -1,    20,    39,   790,    -1,    42,    39,    -1,
      -1,    42,    -1,   487,    -1,   800,   490,    -1,   492,   804,
      -1,   806,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,
      -1,    -1,    -1,   828,    79,    80,    81,    -1,    79,    80,
      88,    -1,    87,    -1,    -1,    90,    87,    92,    93,    -1,
      95,    92,    93,    -1,    95,    -1,    79,    80,    -1,    -1,
      -1,   545,   546,    -1,    87,   549,   550,    -1,    -1,    92,
      93,    -1,    95,    -1,    -1,    -1,    -1,    -1,   873,    -1,
     875,     3,    -1,    -1,   879,    -1,   881,    -1,    -1,    -1,
     885,   886,     3,    -1,   889,    -1,   144,   145,   582,    -1,
     895,   585,    -1,    -1,   152,   153,   590,    -1,    -1,    -1,
     594,    -1,    -1,   597,   577,   910,   143,    39,   602,    -1,
      42,   584,   606,   607,   151,   173,   174,     3,    39,    -1,
      -1,    42,    -1,   596,   161,   619,   184,   185,   933,   623,
      -1,    -1,   626,   627,    20,   193,   194,   942,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    -1,    79,    80,   622,
      -1,    -1,     3,    39,    -1,    87,    42,    -1,    79,    80,
      92,    93,    -1,    95,    -1,    -1,    87,   661,   662,    20,
      -1,    92,    93,    -1,    95,    -1,    27,    -1,   215,   984,
     217,    -1,   219,   220,    -1,    -1,   223,    -1,    39,    -1,
      -1,    42,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    87,   260,   261,    90,    -1,    92,    93,    -1,    95,
     683,    -1,  1017,    -1,    -1,    -1,    -1,  1022,    -1,  1024,
      -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    79,    80,
     267,    -1,   300,    -1,    -1,    -1,    87,    88,    -1,    -1,
      91,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,    32,
      33,   745,    -1,   321,  1059,    -1,   750,   751,    -1,    -1,
      -1,    -1,   756,    -1,    -1,    -1,   324,   325,    -1,    -1,
     764,   765,    -1,  1078,   332,   333,   749,   771,   772,    -1,
    1085,    -1,   755,    -1,    -1,    -1,    -1,    -1,   782,    -1,
      -1,    -1,   786,    -1,    -1,   789,   354,   355,   792,    82,
     794,    -1,    -1,    -1,    -1,    88,    -1,    -1,   366,   367,
      -1,    -1,   785,    -1,    -1,   373,   374,    -1,   791,    -1,
     103,   358,    -1,   360,   382,   383,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,    -1,   395,    -1,    -1,
     377,   399,   400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   388,    -1,    -1,    -1,    -1,     3,    -1,   395,    -1,
      -1,   834,   145,    -1,    -1,    -1,    -1,   404,    -1,    -1,
     153,    -1,    -1,    20,    -1,    -1,    -1,     3,    -1,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    39,    -1,   888,    42,    -1,   891,    -1,   893,
     894,    -1,   185,   897,    -1,   899,   443,    -1,    -1,    -1,
      -1,   194,    -1,    39,    -1,   909,    42,   890,   912,    -1,
     914,    -1,    -1,   896,    -1,   919,   920,    -1,    -1,    -1,
     488,   489,    79,    80,    81,    -1,    -1,    -1,   911,    -1,
      87,   509,   510,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,   495,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,    -1,
      -1,     3,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,   991,   992,   993,
     994,    -1,    -1,   997,   998,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   570,   571,    -1,    -1,    88,    39,   576,   577,
      42,    -1,    -1,    -1,    -1,   583,   584,    -1,    -1,    -1,
       3,    -1,   569,   570,   571,    -1,    -1,   595,   596,    -1,
      -1,    -1,   325,   580,    -1,    -1,    -1,   330,    -1,   586,
     333,    -1,    -1,    -1,   337,   338,    -1,    79,    80,    -1,
     618,   598,    -1,   621,   622,    87,    39,    -1,   605,    42,
      92,    93,   355,    95,    -1,    -1,   644,    -1,   615,     3,
      -1,   618,    -1,   620,   367,    -1,    -1,    -1,     3,    -1,
      -1,   374,    -1,    -1,    -1,    -1,    20,    -1,   635,    -1,
     383,    -1,    26,    27,    -1,    20,    79,    80,    -1,    -1,
      -1,   679,    27,    -1,    87,    39,    -1,   400,    42,    92,
      93,    -1,    95,    -1,    39,    -1,    -1,    42,    -1,   412,
      -1,    -1,    -1,   701,    -1,   703,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,    -1,   720,    -1,    -1,    79,    80,    81,    -1,   727,
     728,    -1,   730,    87,    79,    80,    90,    -1,    92,    93,
      -1,    95,    87,    88,    -1,    -1,    91,    92,    93,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     748,   749,    -1,    -1,    -1,    -1,   754,   755,    -1,    -1,
      -1,   759,   760,    -1,    -1,    -1,   489,    -1,    -1,   746,
      -1,    -1,    -1,    -1,    -1,   752,    -1,    -1,    -1,    -1,
      -1,   758,   759,   760,    -1,    -1,   784,   785,    -1,    -1,
     767,    -1,   790,   791,    -1,     3,    -1,   774,    -1,    -1,
      -1,   809,   810,    -1,    -1,    -1,   783,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,   829,    30,   831,    -1,   548,    -1,    -1,   551,   552,
     553,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
     848,    -1,   850,   851,   852,   853,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   861,   577,   863,    -1,    -1,   866,   867,
     868,   584,    -1,    -1,    -1,    -1,   874,    -1,   876,    -1,
      -1,    79,    80,   596,    -1,    -1,    -1,    -1,     3,    87,
       5,     6,    -1,     8,    92,    93,    -1,    95,    13,    -1,
      -1,   889,   890,    18,    -1,    20,    -1,   895,   896,   622,
      -1,    26,    27,    -1,     3,    30,    31,    -1,    33,    34,
      35,    -1,   910,   911,    39,    -1,    -1,    42,    -1,    44,
      -1,    20,   930,    -1,    -1,    -1,   934,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,   943,    -1,   945,   946,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,   955,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    87,    -1,   972,   973,     3,    92,    93,    -1,
      95,   979,    -1,    -1,    -1,    -1,    -1,   985,    -1,    -1,
      79,    80,    81,    20,    -1,    -1,    -1,    -1,    87,    -1,
      27,    90,    -1,    92,    93,    -1,    95,     3,    -1,   722,
     723,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
    1018,    -1,    -1,    -1,    20,  1023,    -1,  1025,    -1,  1027,
      26,    27,    -1,    -1,  1032,    -1,   749,    -1,     3,  1037,
      -1,    -1,   755,    39,    -1,    -1,    42,  1045,    -1,    -1,
      -1,    -1,    79,    80,  1052,  1053,    -1,  1055,  1056,    -1,
      87,    88,    -1,    -1,    91,    92,    93,    -1,    95,    -1,
      -1,    -1,   785,    -1,    39,    -1,    -1,    42,   791,    -1,
      -1,  1079,  1080,    79,    80,    81,    -1,    -1,  1086,   802,
    1088,    87,  1090,    -1,  1092,  1093,    92,    93,    -1,    95,
      -1,  1099,    -1,    -1,  1102,  1103,  1104,    -1,    -1,    -1,
      -1,  1109,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,  1119,    87,    -1,    -1,  1123,  1124,    92,    93,    -1,
      95,     3,    -1,    -1,    -1,  1133,  1134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1142,    -1,    -1,  1145,    20,    -1,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,     6,    -1,     8,    39,    10,    -1,
      42,    13,    -1,    -1,    -1,    -1,    18,   890,    20,    -1,
      22,    -1,    24,   896,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,   911,    -1,
      42,    -1,    44,    -1,    -1,     3,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,    -1,
      92,    93,    20,    95,    -1,     3,    -1,    -1,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    39,    20,    -1,    42,    87,    -1,    -1,    26,    27,
      92,    93,     3,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,     3,    39,    87,
      -1,    42,    90,    -1,    92,    93,    -1,    95,    -1,    -1,
      -1,    79,    80,    81,    20,    -1,    -1,    -1,    -1,    87,
      26,    27,    90,    -1,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    79,    80,
      81,     3,    -1,    -1,    -1,    -1,    87,    -1,    -1,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    -1,    20,     3,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    79,    80,    81,    20,    39,    -1,    -1,
      42,    87,    26,    27,    90,     3,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    -1,    20,     3,    39,    -1,    -1,    42,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      20,    39,    -1,    -1,    42,    87,    26,    27,    90,    -1,
      92,    93,    -1,    95,    -1,    79,    80,    81,    -1,    39,
      -1,    -1,    42,    87,    79,    80,    90,     3,    92,    93,
      -1,    95,    87,    -1,    -1,    -1,    -1,    92,    93,    -1,
      95,    79,    80,    81,    20,     3,    -1,    -1,    -1,    87,
      26,    27,    90,    -1,    92,    93,    -1,    95,    -1,    79,
      80,    81,    20,    39,    -1,    -1,    42,    87,    26,    27,
      90,     3,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    20,     3,
      -1,    -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    20,    39,    -1,    -1,
      42,    87,    26,    27,    90,    -1,    92,    93,    -1,    95,
      -1,    79,    80,    81,    -1,    39,    -1,    -1,    42,    87,
      -1,    -1,    90,     3,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      20,     3,    -1,    -1,    -1,    87,    26,    27,    90,    -1,
      92,    93,    -1,    95,    -1,    79,    80,    81,    20,    39,
      -1,    -1,    42,    87,    26,    27,    90,     3,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    20,     3,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    20,    39,    -1,    -1,    42,    87,    -1,    27,
      90,    -1,    92,    93,    -1,    95,    -1,    79,    80,    81,
      -1,    39,    -1,    -1,    42,    87,    -1,    -1,    90,     3,
      92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    20,     3,    -1,    -1,
      -1,    87,    -1,    27,    -1,    91,    92,    93,    -1,    95,
      -1,    79,    80,    81,    20,    39,    -1,    -1,    42,    87,
      -1,    27,     3,    91,    92,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    39,    -1,
      -1,    42,    -1,    87,    -1,    -1,     3,    91,    92,    93,
      -1,    95,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    20,     3,    91,    92,    93,    -1,    95,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    20,    39,    -1,    -1,    42,    87,    -1,    27,     3,
      91,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    42,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    39,    -1,    -1,    42,    -1,
      87,    -1,    -1,     3,    91,    92,    93,    -1,    95,    -1,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      20,     3,    91,    92,    93,    -1,    95,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    20,    39,
      -1,    -1,    42,    87,    -1,    27,     3,    91,    92,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      42,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    39,    -1,    -1,    42,    -1,    87,    -1,    -1,
       3,    91,    92,    93,    -1,    95,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    20,     3,    91,
      92,    93,    -1,    95,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    20,    39,    -1,    -1,    42,
      87,    -1,    27,     3,    91,    92,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    39,
      -1,    -1,    42,    -1,    87,    -1,    -1,     3,    91,    92,
      93,    -1,    95,    -1,    79,    80,    81,    -1,    -1,    -1,
      -1,    -1,    87,    88,    20,     3,    -1,    92,    93,    -1,
      95,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    20,    39,    -1,    -1,    42,    87,    -1,    27,
       3,    91,    92,    93,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    42,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    39,    -1,    -1,    42,
      -1,    87,    -1,    -1,     3,    91,    92,    93,    -1,    95,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    20,     3,    91,    92,    93,    -1,    95,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    20,
      39,    -1,    -1,    42,    87,    -1,    27,     3,    91,    92,
      93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    42,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    39,    -1,    -1,    42,    -1,    87,    -1,
      -1,     3,    91,    92,    93,    -1,    95,    -1,    79,    80,
      81,    -1,    -1,    -1,    -1,    -1,    87,    -1,    20,     3,
      91,    92,    93,    -1,    95,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    20,    39,    -1,    -1,
      42,    87,    -1,    27,     3,    91,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    42,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      39,    -1,    -1,    42,    -1,    87,    -1,    -1,     3,    91,
      92,    93,    -1,    95,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    20,     3,    91,    92,    93,
      -1,    95,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    20,    39,    -1,    -1,    42,    87,    -1,
      27,     3,    91,    92,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    42,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    39,    -1,    -1,
      42,    -1,    87,    -1,    -1,     3,    91,    92,    93,    -1,
      95,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    20,     3,    91,    92,    93,    -1,    95,    27,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    79,    80,    81,
      20,    39,    -1,    -1,    42,    87,    26,    27,    -1,    20,
      92,    93,     3,    95,    -1,    -1,    27,    -1,    -1,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    39,    20,
      -1,    42,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    79,    80,    -1,    -1,    -1,    -1,     3,    39,    87,
      88,    42,    -1,    -1,    92,    93,    -1,    95,    -1,    79,
      80,    52,    -1,    -1,    20,    -1,    -1,    87,    79,    80,
       3,    27,    92,    93,     3,    95,    87,    88,    -1,    -1,
      -1,    92,    93,    39,    95,    -1,    42,    20,    79,    80,
      -1,    20,    -1,    -1,    27,    -1,    87,    -1,    27,    -1,
      -1,    92,    93,    -1,    95,    -1,    39,    -1,    -1,    42,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    -1,    92,    93,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      79,    80,    -1,    -1,    87,    88,    -1,    -1,    87,    92,
      93,    -1,    95,    92,    93,    -1,    95,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    88,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,    10,    13,    18,    20,    22,
      24,    26,    27,    28,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    42,    44,    71,    79,    80,    81,    82,
      87,    92,    93,    95,   100,   101,   102,   108,   110,   111,
     112,   113,   116,   119,   120,   121,   122,   123,   128,   129,
     130,   131,   132,   137,   138,   139,   144,   145,   146,   147,
     148,   149,   150,   151,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   168,   169,   170,   171,   172,   173,
     174,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     189,   190,   191,   193,   194,   195,   196,   197,   198,   204,
     205,    39,    92,    93,   147,   148,   149,   150,   151,    39,
     200,   201,    39,    39,    92,    93,   147,   173,   170,    37,
     111,    39,   171,    30,   173,   175,    39,    52,    81,    88,
     207,   208,   210,   211,   212,    88,    89,   200,   203,    39,
     171,   173,    39,    81,    92,    93,   147,   148,   187,    39,
      39,    81,    92,    93,   147,   187,    39,    52,    53,    89,
      93,    96,    98,   188,   173,   175,    39,   147,   158,    39,
     147,   158,    39,    92,    93,   147,   164,   171,    39,   147,
     158,    39,    81,    90,    92,    93,   146,   147,   173,   179,
     187,    81,    91,    92,    93,   133,   171,   177,   181,   187,
      52,    81,    94,   133,   140,   142,   143,   173,   177,     0,
      71,    10,    22,    37,   122,    51,    52,    81,    82,    83,
      84,    89,    93,    96,    98,   188,    52,    89,    93,    52,
      51,    81,    82,    83,    84,    79,    80,    67,    68,    78,
      77,    12,    16,    20,    47,    48,    49,    50,    74,    75,
      76,   166,   167,    24,    25,    17,   181,    96,    39,    81,
      92,    93,   146,   147,   181,   187,    98,    96,   188,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    88,   192,    90,    91,    89,    29,    96,   199,
      39,    88,    92,    93,   124,   125,    90,    91,    30,    39,
      88,   173,    96,   176,   211,    96,   209,   211,   173,    88,
      98,    96,   209,    71,   103,   106,   182,   203,     5,    96,
     206,    88,    96,    39,    92,    93,   147,    90,    91,   206,
      12,    39,    92,    93,   147,    90,    91,    12,    12,    92,
     125,    39,   147,   158,   173,    39,    88,   152,   154,   155,
     173,   175,    39,    81,    92,    93,   147,   189,    96,    96,
      96,    98,   188,    39,    81,    90,    92,    93,   147,   187,
      39,    81,    91,    92,    93,   147,   187,    96,    98,   188,
      71,    39,    92,    93,   147,    52,    89,    93,    96,    98,
     188,    90,    91,    90,    22,    36,   134,    90,    90,    92,
      93,    52,    89,    93,    96,    98,   188,    90,    91,    91,
     134,    91,    96,   178,    91,   164,    94,    94,    96,   141,
      94,    88,    94,   100,    39,    37,    39,    39,    92,    93,
     147,    39,   147,   158,   147,   147,   159,   147,   147,    39,
     152,   173,   175,    96,    39,   147,   158,    39,   152,   173,
     175,    39,   147,   158,    39,   147,   158,    39,   147,   158,
     147,   159,    39,   147,   158,    39,   147,   158,   147,   159,
     147,   159,   160,   160,   161,   162,    20,    12,   163,   167,
     164,   168,   169,   170,   180,   181,    98,    39,    92,    93,
     147,    90,    91,    98,    98,    96,   173,   146,   173,   175,
      39,   200,    89,   103,    90,    39,    52,    81,   127,    88,
      88,   124,   173,    92,   103,   173,    96,    96,    52,   212,
      96,    96,   209,   173,   173,    83,   210,    96,    69,     9,
      15,   114,   115,   117,   118,    71,    97,   107,    39,    81,
      92,    39,    96,   103,   173,    90,    91,   177,    12,    90,
      91,    12,    12,    12,   177,   177,    90,   207,    92,    88,
     173,    91,    96,   153,    88,    96,   153,    91,    39,    81,
      92,    93,    90,    91,    39,    81,    92,    93,   147,   189,
      96,    90,    39,    92,    93,   147,    96,    98,   188,    90,
      91,    90,    90,    91,    39,    92,    93,   147,    96,    98,
     188,    90,    91,    91,    91,    96,    90,    91,    39,   147,
     158,    39,   152,   173,   175,    96,    90,    90,    36,    39,
      81,    92,    93,   147,   187,    90,    90,    91,    39,   147,
     158,    39,   152,   173,   175,    96,    91,    91,   181,    96,
     142,   173,    96,   173,    88,   124,   125,    39,    92,   125,
      90,    91,    91,    96,    91,    91,    96,    91,   164,     4,
      98,    90,    91,    98,    98,    98,    98,    96,   199,    29,
     199,    88,    39,    39,    91,    96,   126,   103,   103,    88,
      90,   207,     4,    23,   109,    96,   176,   211,    96,   209,
      52,    52,    96,    96,    83,   210,   102,   104,   105,   106,
      81,    88,   173,    88,     4,     9,    15,   115,     4,     9,
      15,   118,   182,    97,    29,    96,   202,    39,    39,     4,
      88,   177,    12,    12,   177,   177,   177,    88,    88,    40,
      88,    90,    90,   207,   173,    88,   154,   173,    96,    88,
     173,    91,   173,    96,   147,    39,    81,    90,    92,    93,
     147,    39,    81,    91,    92,    93,   147,    39,    81,    92,
      93,    90,    91,    90,    90,    91,    90,    96,    90,    90,
      91,    90,    91,    91,    96,    91,    91,    90,    90,    91,
      96,    91,    39,    81,    92,    93,   147,   187,    12,    39,
      92,    93,   147,    90,    91,    12,    12,    91,    91,    91,
      96,    91,    96,   178,    96,   141,    88,   134,   103,    88,
      88,   124,    92,    90,   207,    92,    91,    91,   173,    98,
      98,   146,   179,    39,   173,   127,    91,   103,    40,    88,
      90,    88,   171,     4,    23,    96,   211,   211,    52,   208,
     212,    96,    70,   105,    71,   173,   103,    29,    88,   103,
      88,    88,    88,    88,   182,    39,    39,    29,    90,    96,
     202,    88,   103,    88,   177,   177,    88,    88,    88,   103,
     103,   173,   103,    40,    88,    40,    88,    90,   173,    96,
     153,    96,   153,   173,   173,    88,    96,   173,    39,    92,
      93,   147,    90,    91,    39,    92,    93,   147,    90,    91,
     147,    90,    91,    90,    90,    91,    91,    91,    12,    39,
      92,    93,   147,    90,    91,    12,    12,   168,    12,    90,
      91,    12,    12,    12,   168,   168,    91,   173,   103,   103,
      88,    90,   207,    40,    88,    90,    90,   207,   199,   126,
     173,   103,    40,    88,   103,    88,    88,   171,    96,    96,
     211,    96,   209,   208,    29,    88,    39,   103,   103,   103,
     103,   103,   202,    29,   202,    39,    90,    90,    96,   103,
       4,   103,    88,    88,   103,   103,   103,     4,     4,    88,
     173,   103,   173,   103,    40,    88,   173,    96,   173,   173,
      96,    90,    91,    90,    91,   168,    12,    90,    91,    12,
      12,    12,   168,   168,    24,   134,   135,   136,   168,    12,
      12,   168,   168,   168,   135,   135,   103,    40,    88,    90,
     173,   103,    40,    88,    40,    88,    90,    88,   173,   103,
     103,   103,    88,    96,    96,    39,   103,    88,    15,    15,
      39,    90,    96,   202,    90,    88,     4,   103,   103,     4,
       4,     4,    88,    88,   103,    88,    88,   173,   103,    96,
     135,   168,    12,    12,   168,   168,   168,   135,   135,   168,
     135,   168,   168,   135,   135,   135,   173,   103,    40,    88,
      88,   173,   103,   173,   103,    40,    88,   103,    88,   103,
      88,   103,    88,    88,   202,    90,    90,    96,   103,    88,
       4,     4,    88,    88,    88,   103,   103,   103,   103,    88,
     135,   168,   168,   135,   135,   135,   135,   135,   135,    88,
     173,   103,   103,    88,    88,   173,   103,   103,   103,   103,
     103,    90,   103,    88,    88,   103,   103,   103,   103,   135,
     135,   103,    88,   103,   103,    88,   103,   103,   103,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   125,   125,   126,   126,   127,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   129,   130,   130,
     131,   131,   131,   131,   131,   131,   132,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   140,   140,   140,   140,   141,
     141,   142,   142,   143,   144,   145,   146,   146,   146,   146,
     146,   147,   147,   147,   148,   149,   149,   149,   149,   149,
     150,   150,   150,   150,   150,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   153,
     153,   153,   154,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   156,   156,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   176,
     176,   177,   177,   177,   177,   178,   178,   179,   179,   179,
     180,   180,   181,   181,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,   182,   182,   183,
     184,   184,   185,   185,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     191,   191,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   193,   193,   193,
     194,   194,   194,   194,   195,   195,   195,   195,   195,   195,
     195,   195,   195,   196,   197,   197,   197,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   199,   199,   199,   199,   200,   200,
     201,   201,   202,   202,   202,   202,   203,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   207,   207,   207,
     207,   207,   208,   208,   208,   208,   208,   208,   208,   209,
     209,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   211,
     212,   212
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     1,     2,     2,     1,
       1,     2,     2,     3,     2,     3,     5,     4,     7,     8,
       4,     5,     4,     7,     6,     9,     6,     9,     7,    10,
       7,    10,     8,    11,     7,    10,     8,    11,     6,     9,
       7,    10,     1,     1,     1,     4,    10,     7,     7,     1,
       2,     3,     4,     6,     4,    10,     7,     7,     1,     2,
       5,     7,     6,    11,     7,    10,     9,    10,     8,     9,
       8,    10,     6,     9,     8,     7,     7,     9,     8,     1,
       2,     3,     7,     6,     6,     5,     5,     6,     5,     4,
       2,     3,     4,     2,     3,     3,     1,     2,     2,    11,
       8,     8,     9,     9,    10,    10,     7,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     6,     5,
       5,     4,     6,     5,     5,     4,     7,     6,     6,     5,
       7,     6,     6,     5,     6,     5,     5,     4,     7,     6,
       6,     5,     7,     6,     6,     5,     8,     7,     7,     6,
       8,     7,     7,     6,     1,     1,     3,     2,     3,     3,
       3,     3,     2,     3,     3,     1,     2,     2,     3,     2,
       3,     3,     2,     4,     4,     3,     1,     2,     3,     2,
       3,     1,     1,     1,     1,     3,     3,     3,     4,     4,
       4,     4,     4,     5,     5,     4,     4,     4,     5,     5,
       5,     5,     6,     5,     6,     1,     2,     2,     3,     1,
       2,     3,     3,     4,     4,     5,     4,     4,     5,     2,
       3,     3,     1,     1,     2,     2,     3,     4,     3,     5,
       4,     3,     4,     3,     2,     2,     2,     2,     3,     3,
       1,     1,     2,     4,     4,     4,     2,     4,     4,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     3,     1,     3,     1,     2,     3,
       1,     1,     5,     1,     1,     3,     4,     2,     3,     2,
       3,     1,     2,     2,     3,     2,     3,     1,     1,     2,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     2,     2,     3,     2,     3,     2,     4,     3,
       3,     2,     4,     3,     5,     4,     4,     3,     5,     4,
       4,     3,     1,     2,     2,     3,     2,     2,     3,     3,
       3,     4,     3,     3,     4,     2,     2,     3,     3,     3,
       4,     4,     4,     5,     3,     3,     4,     4,     4,     5,
       2,     3,     2,     3,     2,     3,     3,     4,     4,     5,
       3,     4,     4,     5,     3,     4,     4,     5,     3,     4,
       4,     5,     5,     3,     5,     4,     4,     5,     4,     6,
       6,     5,     5,     4,     4,     5,     5,     4,     6,     6,
       5,     5,     4,     4,     5,     5,     3,     3,     3,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     5,     5,
       2,     1,     2,     3,     2,     2,     3,     3,     2,     3,
       3,     4,     4,     1,     1,     4,     2,     5,     4,     3,
       2,     7,     6,     5,     4,    10,     9,     8,     7,     9,
       8,     7,     6,     4,     4,     2,     3,     5,     1,     2,
       2,     3,     2,     4,     3,     5,     1,     1,     2,     2,
       3,     2,     3,     2,     3,     6,     5,     4,     5,     4,
       3,     1,     4,     3,     2,     3,     2,     1,     1,     2,
       3,     7,     6,     4,     3,     6,     5,     3,     2,     6,
       5,     3,     2,     5,     4,     2,     1,     3,     2,     1,
       1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

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
#line 76 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new program("Program" + std::to_string(++n_nodes));
        root = (yyval.astNode);
        // YYACCEPT;
        }
#line 2930 "y.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 81 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new program ("program" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 2940 "y.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 87 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new statements("statemnts\n" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                printf("Base simple\n");
            }
#line 2950 "y.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 92 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new statements("statemnts\n" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                printf("Base compound\n");
            }
#line 2960 "y.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 2970 "y.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 2980 "y.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 108 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 2990 "y.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 3000 "y.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 119 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 3010 "y.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 124 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 3020 "y.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 129 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 3030 "y.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 134 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 3040 "y.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 140 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new suite("suite" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
            // $$ = $1;
        }
#line 3049 "y.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 144 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new suite("suite" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
            // $$ = $3;
        }
#line 3058 "y.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 149 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mystatement("mystatement" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3067 "y.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 153 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mystatement("mystatement" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 3077 "y.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 159 "index.y" /* yacc.c:1646  */
    {
                // $$ = new statement("statement" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 3087 "y.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 164 "index.y" /* yacc.c:1646  */
    {
                // $$ = new statement("statement" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 3097 "y.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 170 "index.y" /* yacc.c:1646  */
    {
                // $$ = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 3107 "y.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 175 "index.y" /* yacc.c:1646  */
    {
                // $$ = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 3117 "y.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 180 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3127 "y.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 185 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 3137 "y.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 191 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mysimplestmt("mysimplestmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3146 "y.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 195 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mysimplestmt("mysimplestmt" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 3156 "y.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 201 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[-1].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3167 "y.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 207 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3177 "y.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 212 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3188 "y.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 218 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-6].astNode));
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3200 "y.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 226 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myelifstmt("myelifstmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3210 "y.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 231 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myelifstmt("myelifstmt" + std::to_string(++n_nodes));
                (yyvsp[-4].astNode)->add((yyvsp[-2].astNode));
                (yyvsp[-4].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-4].astNode);
            }
#line 3221 "y.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 238 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new while_stmt("while_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3231 "y.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 243 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new while_stmt("while_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3242 "y.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 250 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3253 "y.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 256 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-7].astNode));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3265 "y.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 263 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3276 "y.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 269 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-7].astNode));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3288 "y.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 276 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3299 "y.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 282 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-7].astNode));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3311 "y.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 289 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3321 "y.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 294 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3332 "y.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 300 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3342 "y.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 305 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3353 "y.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 311 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3363 "y.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 316 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3374 "y.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 322 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3384 "y.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 327 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3395 "y.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 333 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3407 "y.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 340 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-7].astNode));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3420 "y.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 348 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-4].astNode));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3432 "y.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 355 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-7].astNode));
            (yyval.astNode)->add((yyvsp[-5].astNode));
            (yyval.astNode)->add((yyvsp[-3].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3445 "y.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 364 "index.y" /* yacc.c:1646  */
    {
                // $$ = new try_stmt("try_stmt" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 3455 "y.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 369 "index.y" /* yacc.c:1646  */
    {
                // $$ = new try_stmt("try_stmt" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 3465 "y.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 374 "index.y" /* yacc.c:1646  */
    {
                // $$ = new try_stmt("try_stmt" + std::to_string(++n_nodes));
                // $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 3475 "y.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 380 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3485 "y.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 385 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3497 "y.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 392 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3508 "y.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 398 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3519 "y.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 405 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new mytry1("mytry1" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3528 "y.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 409 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new mytry1("mytry1" + std::to_string(++n_nodes));
            (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-1].astNode);
        }
#line 3538 "y.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 415 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myexcept1("myexcept1" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $3;
            }
#line 3548 "y.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 420 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myexcept1("myexcept1" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3558 "y.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 425 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myexcept1("myexcept1" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3570 "y.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 433 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3580 "y.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 438 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3592 "y.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 445 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3603 "y.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 451 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3614 "y.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 458 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new mytry2("mytry2" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 3623 "y.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 462 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new mytry2("mytry2" + std::to_string(++n_nodes));
            (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-1].astNode);
        }
#line 3633 "y.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 468 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myexcept2("myexcept2" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3643 "y.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 473 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myexcept2("myexcept2" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3655 "y.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 481 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new try3_stmt("try3_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3665 "y.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 487 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-10].astNode));
                (yyvsp[-8].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-8].astNode));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3680 "y.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 497 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3692 "y.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 504 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-9].astNode));
                (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3706 "y.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 513 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-8].astNode));
                (yyvsp[-6].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3719 "y.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 521 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-9].astNode));
                (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3733 "y.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 530 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3746 "y.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 538 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-8].astNode));
                (yyvsp[-6].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3760 "y.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 547 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3773 "y.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 555 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-8].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-8].astNode));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3787 "y.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 564 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3798 "y.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 570 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3811 "y.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 578 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-6].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3823 "y.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 585 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3835 "y.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 592 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3847 "y.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 599 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3860 "y.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 607 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new funcdef("funcdef" + std::to_string(++n_nodes));
                (yyvsp[-6].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3873 "y.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 616 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new decorators("decorators" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3882 "y.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 620 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new decorators("decorators" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-1].astNode);
            }
#line 3892 "y.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 626 "index.y" /* yacc.c:1646  */
    {
    (yyval.astNode) = new decorator("decorator" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
    // $$ = $2;
}
#line 3901 "y.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 631 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3915 "y.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 640 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3928 "y.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 648 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3941 "y.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 656 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3953 "y.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 663 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3965 "y.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 670 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3978 "y.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 678 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 3990 "y.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 685 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new classdef("classdef" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4001 "y.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 692 "index.y" /* yacc.c:1646  */
    { (yyval.astNode) = new inheritance("inheritance" + std::to_string(++n_nodes)); }
#line 4007 "y.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 694 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new type_params("type_params" + std::to_string(++n_nodes));
                    // $$->add($2);
                    (yyval.astNode) = (yyvsp[-1].astNode);
                }
#line 4017 "y.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 699 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new type_params("type_params" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-2].astNode));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 4027 "y.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 705 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytypeparam("mytypeparam" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4036 "y.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 709 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytypeparam("mytypeparam" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 4046 "y.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 715 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new type_param("type_param" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4057 "y.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 721 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new type_param("type_param" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4067 "y.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 726 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new type_param("type_param" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4077 "y.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 731 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new type_param("type_param" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4087 "y.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 737 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-10].astNode));
                (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4101 "y.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 746 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4113 "y.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 753 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4125 "y.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 760 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyvsp[-6].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4137 "y.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 767 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-8].astNode));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4150 "y.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 775 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-9].astNode));
                (yyvsp[-6].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4163 "y.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 783 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyvsp[-7].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4176 "y.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 791 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4187 "y.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 798 "index.y" /* yacc.c:1646  */
    {
    (yyval.astNode) = new async_for_stmt("async_for_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
    // $$ = $2;
}
#line 4196 "y.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 803 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new atom("Atom" + std::to_string(++n_nodes));
        (yyvsp[0].astNode)->name = "number" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 4206 "y.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 808 "index.y" /* yacc.c:1646  */
    {
        // $$ = new atom("Atom" + std::to_string(++n_nodes));
        // $$->add($1);
        (yyval.astNode) = (yyvsp[0].astNode);
    }
#line 4216 "y.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 814 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4224 "y.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 817 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4232 "y.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 820 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4240 "y.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 823 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4248 "y.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 826 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4256 "y.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 829 "index.y" /* yacc.c:1646  */
    {
            // $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4264 "y.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 833 "index.y" /* yacc.c:1646  */
    {
    (yyval.astNode) = new parenth_form("parenth_form" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
    // $$ = $2;
}
#line 4273 "y.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 838 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new comprehension("comprehension" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 4283 "y.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 844 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4294 "y.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 850 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4305 "y.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 856 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4315 "y.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 861 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4325 "y.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 866 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4336 "y.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 872 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4347 "y.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 878 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4357 "y.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 883 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4367 "y.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 888 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4379 "y.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 895 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4391 "y.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 902 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4402 "y.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 908 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4413 "y.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 914 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4424 "y.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 920 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4435 "y.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 926 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4445 "y.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 931 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4455 "y.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 936 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4467 "y.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 943 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4479 "y.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 950 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4490 "y.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 956 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4501 "y.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 962 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4511 "y.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 967 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4521 "y.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 972 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $6;
            }
#line 4531 "y.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 977 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $5;
            }
#line 4541 "y.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 982 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4551 "y.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 987 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4561 "y.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 992 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $6;
            }
#line 4571 "y.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 997 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $5;
            }
#line 4581 "y.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1002 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4591 "y.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1007 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4601 "y.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1012 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $7;
            }
#line 4611 "y.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1017 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $6;
            }
#line 4621 "y.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1022 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4631 "y.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1027 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4641 "y.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1032 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $7;
            }
#line 4651 "y.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1037 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comp_for("comp_for" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $6;
            }
#line 4661 "y.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1043 "index.y" /* yacc.c:1646  */
    {
                // $$ = new comp_iter("comp_iter" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 4669 "y.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1046 "index.y" /* yacc.c:1646  */
    {
                // $$ = new comp_iter("comp_iter" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 4677 "y.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1050 "index.y" /* yacc.c:1646  */
    { (yyval.astNode) = new comp_if("comp_if" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 4686 "y.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1053 "index.y" /* yacc.c:1646  */
    { (yyval.astNode) = new comp_if("comp_if" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
            // $$ = $2;
        }
#line 4694 "y.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1057 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new list_display("list_display" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 4703 "y.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1061 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new list_display("list_display" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 4712 "y.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1066 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new set_display("set_display" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 4721 "y.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1070 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new set_display("set_display" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 4730 "y.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1075 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new dict_display("dict_display" + std::to_string(++n_nodes));}
#line 4736 "y.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1076 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new dict_display("dict_display" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 4745 "y.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1080 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new dict_display("dict_display" + std::to_string(++n_nodes));(yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 4754 "y.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1085 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new dict_item_list("dict_item_list" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);}
#line 4762 "y.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1088 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new dict_item_list("dict_item_list" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[-1].astNode);}
#line 4770 "y.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1091 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new dict_item_list("dict_item_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 4780 "y.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1096 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new dict_item_list("dict_item_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-2].astNode));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 4790 "y.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1102 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mydictitem("mydictitem" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 4799 "y.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1106 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mydictitem("mydictitem" + std::to_string(++n_nodes));
                    (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 4809 "y.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1112 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new dict_item("dict_item" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 4819 "y.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1117 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new dict_item("dict_item" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
            // $$ = $2;
        }
#line 4828 "y.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1122 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new dict_comprehension("dict_comprehension" + std::to_string(++n_nodes));
                        (yyval.astNode)->add((yyvsp[-3].astNode));
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                    }
#line 4839 "y.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1129 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new generator_expression("generator_expression" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                        }
#line 4849 "y.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1135 "index.y" /* yacc.c:1646  */
    {
    // $$ = new yield_atom("yield_atom" + std::to_string(++n_nodes)); $$->add($2);
    (yyval.astNode) = (yyvsp[-1].astNode);}
#line 4857 "y.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1139 "index.y" /* yacc.c:1646  */
    { (yyval.astNode) = new yield_expression("yield_expression" + std::to_string(++n_nodes)); }
#line 4863 "y.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1140 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new yield_expression("yield_expression" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                    // $$ = $2;
                }
#line 4872 "y.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1144 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new yield_expression("yield_expression" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                    // $$ = $3;
                }
#line 4881 "y.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1148 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new yield_expression("yield_expression" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                    // $$ = $2;
                }
#line 4890 "y.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1152 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new yield_expression("yield_expression" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode)); 
                    // $$ = $2;
                }
#line 4899 "y.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1157 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new myreduce("myreduce" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4907 "y.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1160 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new myreduce("myreduce" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4915 "y.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1163 "index.y" /* yacc.c:1646  */
    {
            //  $$ = new myreduce("myreduce" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4923 "y.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1167 "index.y" /* yacc.c:1646  */
    {
            // $$ = new primary("primary" + std::to_string(++n_nodes)); $$->add($1);
            (yyval.astNode) = (yyvsp[0].astNode);}
#line 4931 "y.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1171 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new attributeref("attributeref" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4942 "y.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1177 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new attributeref("attributeref" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4953 "y.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1183 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new attributeref("attributeref" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4965 "y.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1190 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new attributeref("attributeref" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4975 "y.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1195 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new attributeref("attributeref" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 4985 "y.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1201 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new subscription("subscription" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 4995 "y.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1206 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new subscription("subscription" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5005 "y.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1211 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new subscription("subscription" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5016 "y.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1220 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new subscription("subscription" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $4;
            }
#line 5025 "y.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1225 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new subscription("subscription" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $4;
            }
#line 5034 "y.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1231 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5044 "y.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1236 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5054 "y.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1241 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5065 "y.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1247 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 5075 "y.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1252 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 5085 "y.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1257 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 5096 "y.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1266 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $4;
            }
#line 5105 "y.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1270 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));(yyval.astNode)->add((yyvsp[-2].astNode));
                // $$ = $4;
            }
#line 5114 "y.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1275 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));(yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $4;
            }
#line 5123 "y.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1279 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slicing("slicing" + std::to_string(++n_nodes));(yyval.astNode)->add((yyvsp[-2].astNode));
                // $$ = $4;
            }
#line 5132 "y.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1285 "index.y" /* yacc.c:1646  */
    {
                // $$ = new slice_list("slice_list" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 5140 "y.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1288 "index.y" /* yacc.c:1646  */
    {
                // $$ = new slice_list("slice_list" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[-1].astNode);}
#line 5148 "y.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1291 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5158 "y.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1296 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5168 "y.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1301 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $1;
            }
#line 5177 "y.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1305 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5187 "y.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1310 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5197 "y.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1315 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5207 "y.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1320 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5217 "y.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1325 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5228 "y.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1331 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5239 "y.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1337 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5249 "y.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1342 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5260 "y.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1348 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new slice_list("slice_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5271 "y.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1355 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mysliceitem("mysliceitem" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5280 "y.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1359 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mysliceitem("mysliceitem" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 5290 "y.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1364 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mysliceitem("mysliceitem" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 5300 "y.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1370 "index.y" /* yacc.c:1646  */
    {
    // $$ = new slice_item("slice_item" + std::to_string(++n_nodes)); $$->add($1);
    (yyval.astNode) = (yyvsp[0].astNode);}
#line 5308 "y.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1374 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));}
#line 5314 "y.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1375 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));}
#line 5320 "y.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1376 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 5329 "y.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1380 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 5338 "y.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1384 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5348 "y.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1389 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $3;
            }
#line 5357 "y.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1393 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5368 "y.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1399 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 5378 "y.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1404 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5388 "y.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1409 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5398 "y.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1414 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-2].astNode));
                // $$ = $1;
            }
#line 5407 "y.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1418 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new proper_slice("proper_slice" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $1;
            }
#line 5416 "y.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1423 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new await_expr("await_expr" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 5425 "y.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1427 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new await_expr("await_expr" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 5434 "y.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1431 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new await_expr("await_expr" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 5444 "y.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1436 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new await_expr("await_expr" + std::to_string(++n_nodes));}
#line 5450 "y.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1437 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new await_expr("await_expr" + std::to_string(++n_nodes));}
#line 5456 "y.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1439 "index.y" /* yacc.c:1646  */
    {
        // $$ = new power("power" + std::to_string(++n_nodes)); $$->add($1);
        (yyval.astNode) = (yyvsp[0].astNode);}
#line 5464 "y.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1442 "index.y" /* yacc.c:1646  */
    {
        // $$ = new power("power" + std::to_string(++n_nodes));$$->add($1);
        (yyval.astNode) = (yyvsp[0].astNode);}
#line 5472 "y.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1445 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new power("power" + std::to_string(++n_nodes));}
#line 5478 "y.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1446 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
        // $$ = $4;
    }
#line 5487 "y.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1450 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5497 "y.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1455 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
        // $$ = $4;
    }
#line 5506 "y.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1459 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new power("power" + std::to_string(++n_nodes));}
#line 5512 "y.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1460 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
        // $$ = $4;
    }
#line 5521 "y.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1464 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5531 "y.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1469 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
        // $$ = $4;
    }
#line 5540 "y.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1473 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5550 "y.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1478 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5560 "y.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1483 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5570 "y.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1488 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5581 "y.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1494 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5592 "y.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1500 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5603 "y.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1506 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5614 "y.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1512 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5626 "y.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1519 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5636 "y.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1524 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5646 "y.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1529 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5656 "y.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1534 "index.y" /* yacc.c:1646  */
    {
        (yyval.astNode) = new power("power" + std::to_string(++n_nodes));
        (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
        (yyval.astNode)->add((yyvsp[-2].astNode));
        (yyval.astNode)->add((yyvsp[0].astNode));
    }
#line 5667 "y.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1541 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5676 "y.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1545 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 5685 "y.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1549 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 5694 "y.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1553 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode) = (yyvsp[0].astNode);
        }
#line 5703 "y.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1557 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5712 "y.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1561 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5721 "y.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1565 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5730 "y.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1569 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5740 "y.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1574 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5750 "y.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1579 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new u_expr("u_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5760 "y.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1585 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5769 "y.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1589 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5779 "y.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1594 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            // $$->add($1);
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5790 "y.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1600 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5800 "y.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1605 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5810 "y.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1610 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5820 "y.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1615 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5830 "y.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1620 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5840 "y.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1625 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5850 "y.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1630 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5860 "y.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1635 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5870 "y.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1640 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5880 "y.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1645 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5890 "y.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1650 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5900 "y.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1655 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5910 "y.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1660 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5920 "y.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1665 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[-2].astNode));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5930 "y.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1670 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5941 "y.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1676 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5952 "y.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1682 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5963 "y.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1688 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 5974 "y.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1694 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new m_expr("m_expr" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5984 "y.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1700 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new a_expr("a_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 5993 "y.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1704 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new a_expr("a_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6003 "y.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1709 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new a_expr("a_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6013 "y.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1714 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new a_expr("a_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 6022 "y.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1718 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new a_expr("a_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6032 "y.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1723 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new a_expr("a_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6042 "y.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1729 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new shift_expr("shift_expr" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6051 "y.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1733 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new shift_expr("shift_expr" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 6061 "y.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1738 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new shift_expr("shift_expr" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 6071 "y.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1744 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new and_expr("and_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 6080 "y.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1748 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new and_expr("and_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6090 "y.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1754 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new xor_expr("xor_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 6099 "y.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1758 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new xor_expr("xor_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6109 "y.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1764 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new or_expr("or_expr" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 6118 "y.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1768 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new or_expr("or_expr" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6128 "y.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1774 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comparison("comparison" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $1;
            }
#line 6137 "y.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1778 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new comparison("comparison" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6147 "y.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1784 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mycomparison("mycomparison" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 6157 "y.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1789 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mycomparison("mycomparison" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6166 "y.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1796 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new or_test("or_test" + std::to_string(++n_nodes));
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 6175 "y.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1800 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new or_test("or_test" + std::to_string(++n_nodes));
            (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
            (yyval.astNode) = (yyvsp[-2].astNode);
        }
#line 6185 "y.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1806 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new and_test("and_test" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6194 "y.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1810 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new and_test("and_test" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 6204 "y.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1816 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new not_test("not_test" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6213 "y.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1820 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new not_test("not_test" + std::to_string(++n_nodes));
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 6222 "y.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1825 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new assignment_expression("assignment_expression" + std::to_string(++n_nodes));
                            (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 6233 "y.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1831 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new assignment_expression("assignment_expression" + std::to_string(++n_nodes)); $$->add($1);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 6241 "y.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1835 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new conditional_expression("conditional_expression" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                        // $$ = $1;
                        }
#line 6250 "y.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1839 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new conditional_expression("conditional_expression" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 6261 "y.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1846 "index.y" /* yacc.c:1646  */
    {
                // $$ = new expression("expression" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6269 "y.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1849 "index.y" /* yacc.c:1646  */
    {
                // $$ = new expression("expression" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6277 "y.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1853 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new lambda_expr("lambda_expr" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $3;
            }
#line 6286 "y.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1857 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new lambda_expr("lambda_expr"  + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6296 "y.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1863 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new expression_list("expression_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 6306 "y.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1868 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new expression_list("expression_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-2].astNode));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6316 "y.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1874 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new myexpression("myexpression" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 6325 "y.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1878 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new myexpression("myexpression" + std::to_string(++n_nodes));
                    (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 6335 "y.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1884 "index.y" /* yacc.c:1646  */
    {
                // $$ = new starred_list("starred_list" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6343 "y.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1887 "index.y" /* yacc.c:1646  */
    {
                // $$ = new starred_list("starred_list" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[-1].astNode);}
#line 6351 "y.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1890 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new starred_list("starred_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6361 "y.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1895 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new starred_list("starred_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6371 "y.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1901 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mystarreditem("mystarreditem" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 6380 "y.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1905 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mystarreditem("mystarreditem" + std::to_string(++n_nodes));
                    (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 6390 "y.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1911 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new starred_expression("starred_expression" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);}
#line 6398 "y.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1914 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new starred_expression("starred_expression" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);}
#line 6406 "y.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1917 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new starred_expression("starred_expression" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 6416 "y.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1923 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mystarredexpression("mystarredexpression" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6425 "y.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1927 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mystarredexpression("mystarredexpression" + std::to_string(++n_nodes));
                    (yyvsp[0].astNode)->add((yyvsp[-2].astNode));
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 6435 "y.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1933 "index.y" /* yacc.c:1646  */
    {
                // $$ = new starred_item("starred_item" + std::to_string(++n_nodes)); $$->add($2);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6443 "y.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1936 "index.y" /* yacc.c:1646  */
    {
                // $$ = new starred_item("starred_item" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6451 "y.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1940 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6459 "y.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1943 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6467 "y.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1946 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6475 "y.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1949 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6483 "y.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1952 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6491 "y.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 1955 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new simple_stmt("simple_stmt" + std::to_string(++n_nodes));}
#line 6497 "y.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1956 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6505 "y.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1959 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6513 "y.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1962 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6521 "y.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1965 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6529 "y.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1968 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new simple_stmt("simple_stmt" + std::to_string(++n_nodes));}
#line 6535 "y.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1969 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new simple_stmt("simple_stmt" + std::to_string(++n_nodes));}
#line 6541 "y.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1970 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6549 "y.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1973 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6557 "y.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1976 "index.y" /* yacc.c:1646  */
    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);}
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6565 "y.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1980 "index.y" /* yacc.c:1646  */
    {
    (yyval.astNode) = new expression_stmt("expression_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
    // $$ = $1;
}
#line 6574 "y.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1985 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new assert_stmt("assert_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6584 "y.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1990 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new assert_stmt("assert_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 6593 "y.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 1995 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new assignment_stmt("assignment_stmt" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 6603 "y.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2000 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new assignment_stmt("assignment_stmt" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 6613 "y.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2006 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[-2].astNode);
                }
#line 6623 "y.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2011 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6632 "y.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2015 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[-2].astNode);
                }
#line 6642 "y.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2020 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6651 "y.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2024 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                    (yyvsp[-3].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[-3].astNode);
                }
#line 6662 "y.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2030 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6672 "y.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2035 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                    (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[-2].astNode);
                }
#line 6683 "y.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2041 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6693 "y.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2046 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode) = (yyvsp[-3].astNode);
                }
#line 6702 "y.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2050 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
#line 6708 "y.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2051 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode) = (yyvsp[-4].astNode);
                }
#line 6717 "y.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2055 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
#line 6723 "y.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2056 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode) = (yyvsp[-3].astNode);
                }
#line 6732 "y.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2060 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
#line 6738 "y.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2061 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode) = (yyvsp[-4].astNode);
                }
#line 6747 "y.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2065 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
#line 6753 "y.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2066 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyvsp[-3].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[-3].astNode);
                }
#line 6763 "y.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2071 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-1].astNode));
                }
#line 6772 "y.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2076 "index.y" /* yacc.c:1646  */
    {
                // $$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);}
#line 6780 "y.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2079 "index.y" /* yacc.c:1646  */
    {
                // $$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[-1].astNode);}
#line 6788 "y.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2082 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6798 "y.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2087 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6808 "y.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2092 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6818 "y.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2097 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6829 "y.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2103 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6840 "y.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2109 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 6849 "y.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2113 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6859 "y.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2118 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6869 "y.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2123 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6879 "y.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2128 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6890 "y.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2134 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6901 "y.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2140 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $1;
            }
#line 6910 "y.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2144 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 6920 "y.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2149 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 6930 "y.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2154 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));}
#line 6936 "y.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2155 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 6942 "y.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2156 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));}
#line 6948 "y.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2157 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));}
#line 6954 "y.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2158 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 6960 "y.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2159 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));}
#line 6966 "y.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2160 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));}
#line 6972 "y.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2161 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 6978 "y.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2162 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));}
#line 6984 "y.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2163 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes));}
#line 6990 "y.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2164 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 6996 "y.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2165 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target_list("target_list" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));}
#line 7002 "y.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2167 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7011 "y.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2171 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 7021 "y.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2176 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7030 "y.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2180 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 7041 "y.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2186 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7050 "y.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2190 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 7060 "y.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2195 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7069 "y.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2199 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-3].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-3].astNode);
            }
#line 7080 "y.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2205 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7089 "y.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2209 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyvsp[-4].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-4].astNode);
            }
#line 7099 "y.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2214 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
#line 7107 "y.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2217 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode) = (yyvsp[-3].astNode);
            }
#line 7116 "y.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2221 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
#line 7124 "y.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2224 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode) = (yyvsp[-4].astNode);
            }
#line 7133 "y.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2228 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
#line 7141 "y.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2231 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode) = (yyvsp[-3].astNode);
            }
#line 7150 "y.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2235 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
#line 7158 "y.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2238 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mytarget("mytarget" + std::to_string(++n_nodes));
                (yyval.astNode) = (yyvsp[-4].astNode);
            }
#line 7167 "y.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2243 "index.y" /* yacc.c:1646  */
    {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($2);
            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 7175 "y.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2246 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7181 "y.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2247 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7187 "y.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2249 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7193 "y.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2251 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7199 "y.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2254 "index.y" /* yacc.c:1646  */
    {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($2);
            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 7207 "y.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2257 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7213 "y.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2258 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7219 "y.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2259 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7225 "y.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2262 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7231 "y.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2265 "index.y" /* yacc.c:1646  */
    {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($3);
            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 7239 "y.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2268 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7245 "y.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2269 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7251 "y.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2270 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7257 "y.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2271 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7263 "y.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2272 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes));
            (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 7273 "y.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2277 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
            // $$ = $3;
        }
#line 7282 "y.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2281 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes));
            (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 7292 "y.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2286 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
            // $$ = $4;
        }
#line 7301 "y.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2290 "index.y" /* yacc.c:1646  */
    {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($3);
            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 7309 "y.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 2293 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7315 "y.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2294 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7321 "y.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2295 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7327 "y.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2296 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new target("target" + std::to_string(++n_nodes));}
#line 7333 "y.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2297 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes));
            (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 7343 "y.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2302 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
            // $$ = $3;
        }
#line 7352 "y.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 2306 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes));
            (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[-1].astNode));
        }
#line 7362 "y.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2311 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new target("target" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
            // $$ = $4;
        }
#line 7371 "y.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2316 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            // $$->add($2);
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 7382 "y.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2322 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            // $$->add($2);
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 7393 "y.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 2328 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            // $$->add($2);
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 7404 "y.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2334 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-3].astNode));
                            // $$->add($2);
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                        }
#line 7415 "y.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2341 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new augtarget("augtarget" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7425 "y.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2346 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new augtarget("augtarget" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $1;
            }
#line 7434 "y.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 2350 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new augtarget("augtarget" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $1;
            }
#line 7443 "y.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2354 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new augtarget("augtarget" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $1;
            }
#line 7452 "y.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 2362 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new annotated_assignment_stmt("annotated_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 7462 "y.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 2367 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new annotated_assignment_stmt("annotated_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 7473 "y.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 2373 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new annotated_assignment_stmt("annotated_assignment_stmt" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 7484 "y.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 2380 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new return_stmt("return_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 7493 "y.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 2384 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new return_stmt("return_stmt" + std::to_string(++n_nodes));}
#line 7499 "y.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 2385 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new return_stmt("return_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 7508 "y.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 2389 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new return_stmt("return_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-1].astNode));
                // $$ = $2;
            }
#line 7517 "y.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 2394 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
            // $$ = $2;
        }
#line 7526 "y.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 2398 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
            // $$ = $2;
        }
#line 7535 "y.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 2402 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 7545 "y.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 2407 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
            // $$ = $3;
        }
#line 7554 "y.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 2411 "index.y" /* yacc.c:1646  */
    {
            (yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes));
            (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
            (yyval.astNode)->add((yyvsp[0].astNode));
        }
#line 7564 "y.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 2416 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
#line 7570 "y.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 2417 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
#line 7576 "y.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 2418 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
#line 7582 "y.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 2419 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
#line 7588 "y.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 2421 "index.y" /* yacc.c:1646  */
    {
    (yyval.astNode) = new yield_stmt("yield_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
    // $$ = $1;
    }
#line 7597 "y.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 2426 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new raise_stmt("raise_stmt" + std::to_string(++n_nodes));}
#line 7603 "y.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 2427 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new raise_stmt("raise_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7613 "y.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 2432 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new raise_stmt("raise_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 7622 "y.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 2437 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7634 "y.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 2444 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7645 "y.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 2450 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7655 "y.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 2455 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));
                // $$ = $2;
            }
#line 7664 "y.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 2459 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7678 "y.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2468 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7691 "y.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 2476 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7703 "y.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 2483 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7714 "y.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 2489 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-8].astNode));
                (yyvsp[-5].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 7728 "y.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 2498 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 7742 "y.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 2507 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 7754 "y.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 2514 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 7766 "y.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2521 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-7].astNode));
                (yyvsp[-4].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 7779 "y.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 2529 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-6].astNode));
                (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-3].astNode));
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 7792 "y.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 2537 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-5].astNode));
                (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-2].astNode));
            }
#line 7803 "y.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 2543 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-4].astNode));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
            }
#line 7814 "y.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 2549 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new import_stmt("import_stmt" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[-2].astNode));
                // $$ = $2;
            }
#line 7823 "y.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 2554 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mymodule("mymodule" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7834 "y.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 2560 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mymodule("mymodule" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7843 "y.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 2564 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mymodule("mymodule" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 7853 "y.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 2569 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new mymodule("mymodule" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->add((yyvsp[-3].astNode));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 7865 "y.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 2577 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new module("module" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7875 "y.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 2582 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new module("module" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7886 "y.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2589 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new identifiermodule("identifiermodule" + std::to_string(++n_nodes));
                        (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyval.astNode)->add((yyvsp[-1].astNode));
                    }
#line 7896 "y.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2594 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new identifiermodule("identifiermodule" + std::to_string(++n_nodes));
                        (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyvsp[-2].astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode) = (yyvsp[-2].astNode);
                    }
#line 7907 "y.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 2601 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyval.astNode)->add((yyvsp[0].astNode));
                    }
#line 7917 "y.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 2606 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        (yyvsp[-2].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyval.astNode)->add((yyvsp[-2].astNode));
                        (yyval.astNode)->add((yyvsp[0].astNode));
                    }
#line 7929 "y.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 2613 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode) = (yyvsp[0].astNode);
                    }
#line 7940 "y.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 2619 "index.y" /* yacc.c:1646  */
    {
                        (yyval.astNode) = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        (yyvsp[-3].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                        (yyvsp[0].astNode)->add((yyvsp[-3].astNode));
                        (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                        (yyval.astNode) = (yyvsp[0].astNode);
                    }
#line 7953 "y.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 2628 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new relative_module("relative_module" + std::to_string(++n_nodes));}
#line 7959 "y.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 2629 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new relative_module("relative_module" + std::to_string(++n_nodes)); (yyval.astNode)->add((yyvsp[0].astNode));}
#line 7965 "y.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 2630 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new relative_module("relative_module" + std::to_string(++n_nodes));
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 7974 "y.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 2635 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new nonlocal_stmt("nonlocal_stmt" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7984 "y.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 2640 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new nonlocal_stmt("nonlocal_stmt" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 7995 "y.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 2647 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new global_stmt("global_stmt" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 8005 "y.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 2652 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new global_stmt("global_stmt" + std::to_string(++n_nodes));
                (yyvsp[-1].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[-1].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 8016 "y.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 2659 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myidentifier("myidentifier");
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 8026 "y.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 2664 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new myidentifier("myidentifier" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyvsp[-2].astNode)->add((yyvsp[0].astNode));
                (yyval.astNode) = (yyvsp[-2].astNode);
            }
#line 8037 "y.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 2671 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-5].astNode));
                    (yyval.astNode)->add((yyvsp[-4].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 8048 "y.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 2677 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-4].astNode));
                    (yyval.astNode)->add((yyvsp[-3].astNode));
                }
#line 8058 "y.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 2682 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-3].astNode));
                    (yyval.astNode)->add((yyvsp[-2].astNode));
                }
#line 8068 "y.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 2687 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[-4].astNode));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 8078 "y.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 2692 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[-3].astNode);}
#line 8086 "y.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 2695 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[-2].astNode);}
#line 8094 "y.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 2698 "index.y" /* yacc.c:1646  */
    {
                    // $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes)); $$->add($1);
                    (yyval.astNode) = (yyvsp[0].astNode);}
#line 8102 "y.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 2702 "index.y" /* yacc.c:1646  */
    {
                                (yyval.astNode) = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                (yyval.astNode)->add((yyvsp[-3].astNode));
                                (yyval.astNode)->add((yyvsp[-2].astNode));
                                (yyval.astNode)->add((yyvsp[0].astNode));
                            }
#line 8113 "y.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 2708 "index.y" /* yacc.c:1646  */
    {
                                (yyval.astNode) = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                (yyval.astNode)->add((yyvsp[-2].astNode));
                                (yyval.astNode)->add((yyvsp[-1].astNode));
                            }
#line 8123 "y.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 2713 "index.y" /* yacc.c:1646  */
    {
                                (yyval.astNode) = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                (yyval.astNode)->add((yyvsp[-1].astNode));
                                (yyval.astNode)->add((yyvsp[0].astNode));
                            }
#line 8133 "y.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 2718 "index.y" /* yacc.c:1646  */
    {
                                (yyval.astNode) = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                (yyval.astNode)->add((yyvsp[-2].astNode));
                                (yyval.astNode)->add((yyvsp[0].astNode));
                            }
#line 8143 "y.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 2723 "index.y" /* yacc.c:1646  */
    {
                                // $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes)); $$->add($1);
                            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 8151 "y.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 2726 "index.y" /* yacc.c:1646  */
    {
                                // $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes)); $$->add($1);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 8159 "y.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 2729 "index.y" /* yacc.c:1646  */
    {
                                // $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes)); $$->add($1);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 8167 "y.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 2733 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mydefparameter("mydefparameter" + std::to_string(++n_nodes));
                    (yyval.astNode)->add((yyvsp[0].astNode));
                }
#line 8176 "y.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 2737 "index.y" /* yacc.c:1646  */
    {
                    (yyval.astNode) = new mydefparameter("mydefparameter" + std::to_string(++n_nodes));
                    (yyvsp[0].astNode)->add((yyvsp[-1].astNode));
                    (yyval.astNode) = (yyvsp[0].astNode);
                }
#line 8186 "y.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 2743 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-5].astNode));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                        }
#line 8197 "y.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 2749 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-3].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 8208 "y.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 2755 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-2].astNode));
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                        }
#line 8218 "y.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 2760 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 8228 "y.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 2765 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                        }
#line 8238 "y.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 2770 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-3].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 8248 "y.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 2775 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 8256 "y.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 2778 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 8264 "y.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 2781 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-4].astNode));
                            (yyval.astNode)->add((yyvsp[-1].astNode));
                        }
#line 8274 "y.cpp" /* yacc.c:1646  */
    break;

  case 580:
#line 2786 "index.y" /* yacc.c:1646  */
    {
                            (yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            (yyval.astNode)->add((yyvsp[-3].astNode));
                            (yyval.astNode)->add((yyvsp[0].astNode));
                        }
#line 8284 "y.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 2791 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 8292 "y.cpp" /* yacc.c:1646  */
    break;

  case 582:
#line 2794 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 8300 "y.cpp" /* yacc.c:1646  */
    break;

  case 583:
#line 2797 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($4);
                            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 8308 "y.cpp" /* yacc.c:1646  */
    break;

  case 584:
#line 2800 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($4);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 8316 "y.cpp" /* yacc.c:1646  */
    break;

  case 585:
#line 2803 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));}
#line 8322 "y.cpp" /* yacc.c:1646  */
    break;

  case 586:
#line 2804 "index.y" /* yacc.c:1646  */
    {(yyval.astNode) = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));}
#line 8328 "y.cpp" /* yacc.c:1646  */
    break;

  case 587:
#line 2805 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            (yyval.astNode) = (yyvsp[-1].astNode);}
#line 8336 "y.cpp" /* yacc.c:1646  */
    break;

  case 588:
#line 2808 "index.y" /* yacc.c:1646  */
    {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            (yyval.astNode) = (yyvsp[0].astNode);}
#line 8344 "y.cpp" /* yacc.c:1646  */
    break;

  case 589:
#line 2812 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new parameter("parameter" + std::to_string(++n_nodes));
                (yyvsp[0].astNode)->name = "identifier" + std::to_string(++n_nodes);
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 8354 "y.cpp" /* yacc.c:1646  */
    break;

  case 590:
#line 2819 "index.y" /* yacc.c:1646  */
    {
                // $$ = new defparameter("defparameter" + std::to_string(++n_nodes)); $$->add($1);
                (yyval.astNode) = (yyvsp[0].astNode);
            }
#line 8363 "y.cpp" /* yacc.c:1646  */
    break;

  case 591:
#line 2823 "index.y" /* yacc.c:1646  */
    {
                (yyval.astNode) = new defparameter("defparameter" + std::to_string(++n_nodes));
                (yyval.astNode)->add((yyvsp[-2].astNode));
                (yyval.astNode)->add((yyvsp[0].astNode));
            }
#line 8373 "y.cpp" /* yacc.c:1646  */
    break;


#line 8377 "y.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 2896 "index.y" /* yacc.c:1906  */


int main(int argc, char **argv)
{
    if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
    yyparse();

    if (root != NULL) {
        AST ast(root);
        ast.Print();
    }
    return 0;
}

void yyerror(const char *msg)
    {
        printf(" %s \n", msg);
    }
