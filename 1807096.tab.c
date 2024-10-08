
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
#line 1 "1807096.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	int data[60];
	void yyerror(char *s);
	int yylex(void);
	


/* Line 189 of yacc.c  */
#line 85 "1807096.tab.c"

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
     MAIN = 258,
     START = 259,
     END = 260,
     NUM = 261,
     VAR = 262,
     IF = 263,
     SWITCH = 264,
     CASE = 265,
     DEFAULT = 266,
     BREAK = 267,
     FOR = 268,
     WHILE = 269,
     VALUE = 270,
     FACTORIAL = 271,
     ODD_EVEN = 272,
     BIGMOD = 273,
     ASSIGN = 274,
     DEFINE = 275,
     EOL = 276,
     ARRAY = 277,
     CLASS = 278,
     INT = 279,
     FLOAT = 280,
     CHAR = 281,
     IFX = 282,
     ELSE = 283,
     LOG10 = 284,
     LOG = 285,
     SEC = 286,
     COT = 287,
     COSEC = 288,
     TAN = 289,
     COS = 290,
     SIN = 291,
     EQ = 292,
     GTE = 293,
     LTE = 294,
     GT = 295,
     LT = 296,
     MINUS = 297,
     PLUS = 298,
     BitAND = 299,
     BitOR = 300,
     BitXOR = 301,
     DIV = 302,
     MUL = 303,
     MOD = 304,
     POW = 305,
     BitNOT = 306,
     INC = 307,
     DEC = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "1807096.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   711

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,    57,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    54,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    15,    18,    21,    26,
      38,    48,    54,    60,    68,    74,    82,    91,    99,   108,
     122,   128,   130,   133,   137,   145,   152,   155,   157,   159,
     161,   165,   167,   169,   171,   175,   179,   183,   186,   190,
     194,   198,   202,   205,   208,   212,   216,   220,   224,   228,
     232,   236,   240,   243,   246,   249,   252,   255,   258,   261,
     264
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,     3,    54,     4,    60,     5,    -1,    -1,
      60,    61,    -1,    21,    -1,    65,    21,    -1,    68,    21,
      -1,     7,    19,    68,    21,    -1,    13,    55,     6,    56,
       6,    56,     6,    57,     4,    60,     5,    -1,    14,    55,
       6,    56,     6,    57,     4,    60,     5,    -1,    16,    55,
       6,    57,    21,    -1,    17,    55,     6,    57,    21,    -1,
       9,    55,     6,    57,     4,    62,     5,    -1,    23,     7,
       4,    60,     5,    -1,    23,     7,    54,     7,     4,    60,
       5,    -1,    20,     7,    55,    65,    57,     4,    60,     5,
      -1,    22,    66,     7,    55,     6,    57,    21,    -1,     8,
      55,    68,    57,     4,    68,    21,     5,    -1,     8,    55,
      68,    57,     4,    68,    21,     5,    28,     4,    68,    21,
       5,    -1,    15,    55,    68,    57,    21,    -1,    63,    -1,
      63,    64,    -1,    63,    43,    63,    -1,    10,     6,    54,
      68,    21,    12,    21,    -1,    11,    54,    68,    21,    12,
      21,    -1,    66,    67,    -1,    24,    -1,    25,    -1,    26,
      -1,    67,    56,     7,    -1,     7,    -1,     6,    -1,     7,
      -1,    68,    46,    68,    -1,    68,    45,    68,    -1,    68,
      44,    68,    -1,    51,    68,    -1,    68,    43,    68,    -1,
      68,    42,    68,    -1,    68,    48,    68,    -1,    68,    47,
      68,    -1,    68,    52,    -1,    68,    53,    -1,    68,    49,
      68,    -1,    68,    50,    68,    -1,    68,    41,    68,    -1,
      68,    40,    68,    -1,    68,    39,    68,    -1,    68,    38,
      68,    -1,    68,    37,    68,    -1,    55,    68,    57,    -1,
      36,    68,    -1,    35,    68,    -1,    34,    68,    -1,    33,
      68,    -1,    31,    68,    -1,    32,    68,    -1,    29,    68,
      -1,    30,    68,    -1,    18,    55,    68,    56,    68,    56,
      68,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    42,    44,    47,    48,    50,    52,    58,
      66,    71,    82,    92,    97,   103,   109,   115,   121,   130,
     138,   141,   142,   144,   145,   147,   149,   153,   154,   155,
     160,   161,   164,   166,   168,   170,   172,   174,   176,   178,
     180,   182,   191,   195,   199,   208,   209,   218,   227,   236,
     245,   256,   257,   259,   261,   263,   265,   267,   269,   270,
     271
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "START", "END", "NUM", "VAR",
  "IF", "SWITCH", "CASE", "DEFAULT", "BREAK", "FOR", "WHILE", "VALUE",
  "FACTORIAL", "ODD_EVEN", "BIGMOD", "ASSIGN", "DEFINE", "EOL", "ARRAY",
  "CLASS", "INT", "FLOAT", "CHAR", "IFX", "ELSE", "LOG10", "LOG", "SEC",
  "COT", "COSEC", "TAN", "COS", "SIN", "EQ", "GTE", "LTE", "GT", "LT",
  "MINUS", "PLUS", "BitAND", "BitOR", "BitXOR", "DIV", "MUL", "MOD", "POW",
  "BitNOT", "INC", "DEC", "':'", "'('", "','", "')'", "$accept", "program",
  "cstatement", "statement", "B", "C", "D", "declaration", "TYPE", "ID1",
  "expression", 0
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
     305,   306,   307,   308,    58,    40,    44,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    63,    64,    65,    66,    66,    66,
      67,    67,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     1,     2,     2,     4,    11,
       9,     5,     5,     7,     5,     7,     8,     7,     8,    13,
       5,     1,     2,     3,     7,     6,     2,     1,     1,     1,
       3,     1,     1,     1,     3,     3,     3,     2,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       8
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,     2,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    58,    59,    56,    57,    55,    54,    53,    52,
      37,     0,     6,    31,    26,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,    51,     0,    50,    49,    48,
      47,    46,    39,    38,    36,    35,    34,    41,    40,    44,
      45,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,     0,    20,
      11,    12,     0,     0,     0,    14,     3,     0,     0,     0,
      21,     0,     0,     0,     3,     0,     0,     0,     0,    13,
       0,     0,    22,     0,     3,     0,     0,    17,    15,    18,
       0,     0,    23,     0,     0,    60,    16,     0,     0,     0,
       3,    10,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    24,    25,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    35,   139,   140,   152,    36,    37,    64,
      38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int16 yypact[] =
{
       8,   -41,    23,    30,   -82,   -82,    90,   -82,   -82,    18,
       2,     3,     7,    16,    19,    37,    46,    47,    54,   -82,
      14,    61,   -82,   -82,   -82,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   -82,    51,    86,    38,   378,
     378,   103,   111,   121,   378,   122,   123,   378,    75,   124,
       6,   -82,   658,   658,   658,   658,   658,   658,   658,   658,
     -82,   534,   -82,   -82,    76,   -82,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     -82,   -82,   397,   555,    77,    81,    82,   576,    83,    85,
     618,    14,    78,   -82,   132,   -82,   136,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,    17,    17,    17,    17,    17,   -32,
     -36,   -82,   140,   142,   147,   148,   134,   141,   149,   378,
     114,   174,   143,   177,   -82,   378,   172,   127,   128,   -82,
     -82,   -82,   638,   180,   129,   -82,   -82,   427,   181,   183,
      13,   184,   185,   378,   -82,   170,   194,   187,   139,   -82,
     150,   172,   -82,   138,   -82,   597,   245,   -82,   -82,   168,
     378,   378,   154,   201,   296,   -82,   -82,   202,   457,   487,
     -82,   -82,   378,   209,   210,   347,   517,   192,   211,   -82,
     226,   -82,   -82,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -81,   -82,   -82,    84,   -82,   145,   213,   -82,
     -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      93,     1,   122,     3,    82,    83,    80,    81,    79,    87,
      80,    81,    90,     4,   150,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     5,    80,    81,    39,    22,    23,
      24,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   146,   151,    40,    41,    65,
      94,    48,    42,   156,    76,    77,    78,    79,    50,    80,
      81,    43,    62,   164,    44,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   175,
      80,    81,    45,    63,   132,     7,     8,     9,    10,    11,
     137,    46,    47,    12,    13,    14,    15,    16,    17,    84,
      18,    19,    20,    21,    22,    23,    24,    85,   155,    25,
      26,    27,    28,    29,    30,    31,    32,    86,    88,    89,
      91,    92,    96,   121,   113,   168,   169,   114,   115,   123,
     117,    33,   118,   124,   125,    34,   126,   176,   135,     8,
       9,    10,    11,   127,   128,   129,    12,    13,    14,    15,
      16,    17,   130,    18,    19,    20,    21,    22,    23,    24,
     131,   133,    25,    26,    27,    28,    29,    30,    31,    32,
     134,   136,   138,   141,   144,   142,   145,   148,   149,   154,
     153,   157,   159,   160,    33,   163,   167,   151,    34,   158,
       8,     9,    10,    11,   161,   170,   172,    12,    13,    14,
      15,    16,    17,   181,    18,    19,    20,    21,    22,    23,
      24,   177,   178,    25,    26,    27,    28,    29,    30,    31,
      32,   183,   182,    49,     0,   162,   120,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    34,
     166,     8,     9,    10,    11,     0,     0,     0,    12,    13,
      14,    15,    16,    17,     0,    18,    19,    20,    21,    22,
      23,    24,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      34,   171,     8,     9,    10,    11,     0,     0,     0,    12,
      13,    14,    15,    16,    17,     0,    18,    19,    20,    21,
      22,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    34,   179,     8,     9,    10,    11,     0,     0,     0,
      12,    13,    14,    15,    16,    17,     0,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,     8,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,     0,    33,     0,
       0,     0,    34,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    34,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   147,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   173,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   174,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,   180,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,    95,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,    80,    81,     0,
       0,     0,   112,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    80,    81,
       0,     0,     0,   116,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    80,
      81,     0,     0,     0,   165,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,   119,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,   143,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,     0,
      80,    81
};

static const yytype_int16 yycheck[] =
{
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       4,     3,    93,    54,    39,    40,    52,    53,    50,    44,
      52,    53,    47,     0,    11,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     4,    52,    53,    19,    24,    25,
      26,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,   136,    43,    55,    55,    21,
      54,     7,    55,   144,    47,    48,    49,    50,     7,    52,
      53,    55,    21,   154,    55,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   170,
      52,    53,    55,     7,   119,     5,     6,     7,     8,     9,
     125,    55,    55,    13,    14,    15,    16,    17,    18,     6,
      20,    21,    22,    23,    24,    25,    26,     6,   143,    29,
      30,    31,    32,    33,    34,    35,    36,     6,     6,     6,
      55,     7,    56,    55,    57,   160,   161,    56,    56,     7,
      57,    51,    57,     7,     4,    55,     4,   172,     5,     6,
       7,     8,     9,     6,     6,    21,    13,    14,    15,    16,
      17,    18,    21,    20,    21,    22,    23,    24,    25,    26,
      21,    57,    29,    30,    31,    32,    33,    34,    35,    36,
       6,     4,    10,    56,     4,    57,    57,     6,     5,     4,
       6,    21,     5,    54,    51,    57,    28,    43,    55,     5,
       6,     7,     8,     9,    54,     4,     4,    13,    14,    15,
      16,    17,    18,    21,    20,    21,    22,    23,    24,    25,
      26,    12,    12,    29,    30,    31,    32,    33,    34,    35,
      36,     5,    21,    20,    -1,   151,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    55,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      55,     5,     6,     7,     8,     9,    -1,    -1,    -1,    13,
      14,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    55,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,     6,     7,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    51,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    55,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    21,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    21,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    21,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    21,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    -1,    -1,
      -1,    57,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    -1,
      -1,    -1,    57,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      -1,    -1,    -1,    57,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    -1,    -1,    -1,    57,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    -1,    -1,    56,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    -1,    -1,    56,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    59,    54,     0,     4,    60,     5,     6,     7,
       8,     9,    13,    14,    15,    16,    17,    18,    20,    21,
      22,    23,    24,    25,    26,    29,    30,    31,    32,    33,
      34,    35,    36,    51,    55,    61,    65,    66,    68,    19,
      55,    55,    55,    55,    55,    55,    55,    55,     7,    66,
       7,     7,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    21,     7,    67,    21,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      52,    53,    68,    68,     6,     6,     6,    68,     6,     6,
      68,    55,     7,     4,    54,    57,    56,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    21,    57,    57,    56,    56,    57,    57,    57,    56,
      65,    55,    60,     7,     7,     4,     4,     6,     6,    21,
      21,    21,    68,    57,     6,     5,     4,    68,    10,    62,
      63,    56,    57,    56,     4,    57,    60,    21,     6,     5,
      11,    43,    64,     6,     4,    68,    60,    21,     5,     5,
      54,    54,    63,    57,    60,    57,     5,    28,    68,    68,
       4,     5,     4,    21,    21,    60,    68,    12,    12,     5,
      21,    21,    21,     5
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
#line 39 "1807096.y"
    {printf("\nMain function\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 52 "1807096.y"
    { 
								data[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); 
								printf("\nValue of the variable: %d\n",(yyvsp[(3) - (4)]));
								(yyval)=(yyvsp[(3) - (4)]);
								;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 58 "1807096.y"
    {
	                                int i;
	                                printf("\nFOR loop execution\n");
	                                for(i=(yyvsp[(3) - (11)]) ; i<(yyvsp[(5) - (11)]) ; i=i+(yyvsp[(7) - (11)]) )
					{printf("Value of the  i: %d expression value : %d\n", i,(yyvsp[(10) - (11)]));}
					;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 66 "1807096.y"
    {
	                                int i;
	                                printf("\nWHILE loop execution\n");
	                                for(i=(yyvsp[(3) - (9)]) ; i<(yyvsp[(5) - (9)]) ; i++) {printf("Value of the loop: %d expression value: %d\n", i,(yyvsp[(8) - (9)]));}
									;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 71 "1807096.y"
    {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=(yyvsp[(3) - (5)]);i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d  : %d\n",(yyvsp[(3) - (5)]),f);
		;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 82 "1807096.y"
    {
		printf("\nDetermining odd or even number\n");

		if((yyvsp[(3) - (5)]) %2 ==0){
			printf("Number : %d  -> Even\n",(yyvsp[(3) - (5)]));
		}
		else{
			printf("Number : %d  -> Odd\n",(yyvsp[(3) - (5)]));
		}
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 92 "1807096.y"
    {
			printf("\nSWITCH CASE declaration\n");
			printf("Finally choose case number :-> %d\n",(yyvsp[(3) - (7)]));
	;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 97 "1807096.y"
    {

		printf("\nClass declaration\n");
		//printf("Expression : %d\n",$4);
		;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 103 "1807096.y"
    {

		printf("\nInheritance occur \n");
		//printf("Expression value : %d",$6);
		;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 109 "1807096.y"
    {
		printf("\nFunction declaration\n");
		//printf("Function Parameter : %d\n",$4);
		//printf("Function internal block statement : %d\n",$7);
		;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 115 "1807096.y"
    {
		printf("\nArray declaration\n");

		printf("Size of the array is : %d\n",(yyvsp[(5) - (7)]));
		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 121 "1807096.y"
    {
								if((yyvsp[(3) - (8)])){
									printf("\nValue of expression in IF: %d\n",(yyvsp[(6) - (8)]));
								}
								else{
									printf("\nCondition value zero in IF block\n");
								}
							;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 130 "1807096.y"
    {
								if((yyvsp[(3) - (13)])){
									printf("\nValue of expression in IF: %d\n",(yyvsp[(6) - (13)]));
								}
								else{
									printf("\nValue of expression in ELSE: %d\n",(yyvsp[(11) - (13)]));
								}
							;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 138 "1807096.y"
    {printf("\nPrint expression %d\n",(yyvsp[(3) - (5)]));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 145 "1807096.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 147 "1807096.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 153 "1807096.y"
    {printf("\nInterger declaration\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 154 "1807096.y"
    {printf("\nFloat declaration\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 155 "1807096.y"
    {printf("\nCharacter declaration\n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 164 "1807096.y"
    { printf("\nNumber :  %d\n",(yyvsp[(1) - (1)]) ); (yyval) = (yyvsp[(1) - (1)]);  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 166 "1807096.y"
    { printf("\nVariable :  %c\n",(yyvsp[(1) - (1)])+97 );  (yyval) = data[(yyvsp[(1) - (1)])]; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 168 "1807096.y"
    {printf("\nBitwise XOR of %d and %d is %d\n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])^(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) ^ (yyvsp[(3) - (3)]); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 170 "1807096.y"
    {printf("\nBitwise OR of %d and %d is %d\n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])|(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) | (yyvsp[(3) - (3)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 172 "1807096.y"
    {printf("\nBitwise AND of %d and %d is %d\n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])&(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) & (yyvsp[(3) - (3)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 174 "1807096.y"
    {printf("\nBitwise NOT of %d is %d\n ",(yyvsp[(2) - (2)]),~(yyvsp[(2) - (2)])); (yyval) = ~(yyvsp[(2) - (2)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 176 "1807096.y"
    {printf("\nAddition of %d and %d is %d \n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])+(yyvsp[(3) - (3)]) );  (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 178 "1807096.y"
    {printf("\nSubtraction of %d and %d is %d \n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])-(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 180 "1807096.y"
    {printf("\nMultiplication of %d and %d is %d\n ",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])*(yyvsp[(3) - (3)])); (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 182 "1807096.y"
    { if((yyvsp[(3) - (3)])){
										printf("\nDivision of %d and %d is %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)])/(yyvsp[(3) - (3)]));
										(yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
				  					}
				  					else{
										(yyval) = 0;
										printf("\nDivision by zero\n");
				  					} 	
				    			;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 191 "1807096.y"
    {
								printf("\nIncrement of %d is %d\n",(yyvsp[(1) - (2)]),(yyvsp[(1) - (2)])+1);
								(yyval) = (yyvsp[(1) - (2)]) + 1;
							;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 195 "1807096.y"
    {
								printf("\nDecrement of %d is %d\n",(yyvsp[(1) - (2)]),(yyvsp[(1) - (2)])-1);
								(yyval) = (yyvsp[(1) - (2)]) - 1;
							;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 199 "1807096.y"
    { if((yyvsp[(3) - (3)])){
				     					printf("\nMod of %d and %d is %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),(yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]));
				     					(yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]);
										}
				  					else{
										(yyval) = 0;
										printf("\nMOD by zero\n");
				  					} 	
				    			;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 208 "1807096.y"
    {printf("\nPower of %d and %d is %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)])));  (yyval) = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)]));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 209 "1807096.y"
    { if((yyvsp[(1) - (3)])<(yyvsp[(3) - (3)])){
										printf("\n%d is less than %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
										}
								  else{
										printf("\n%d is not less than %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
								  }
								(yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); 
								;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 218 "1807096.y"
    { if((yyvsp[(1) - (3)])>(yyvsp[(3) - (3)])){
										printf("\n%d is greater than %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
										}
								  else{
										printf("\n%d is not greater than %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
								  }
								(yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); 
								;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 227 "1807096.y"
    { if((yyvsp[(1) - (3)])<=(yyvsp[(3) - (3)])){
										printf("\n%d is less than or equal to %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
										}
								  else{
										printf("\n%d is not less than or equal to %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
								  }
								(yyval) = (yyvsp[(1) - (3)]) <= (yyvsp[(3) - (3)]); 
								;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 236 "1807096.y"
    { if((yyvsp[(1) - (3)])>=(yyvsp[(3) - (3)])){
										printf("\n%d is greater than or equal to %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
										}
								  else{
										printf("\n%d is not greater than or equal to %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
								  }
								(yyval) = (yyvsp[(1) - (3)]) >= (yyvsp[(3) - (3)]); 
								;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 245 "1807096.y"
    { if((yyvsp[(1) - (3)])==(yyvsp[(3) - (3)])){
										printf("\n%d is equal to %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
										}
								  else{
										printf("\n%d is not equal to %d\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
								  }
								(yyval) = (yyvsp[(1) - (3)]) == (yyvsp[(3) - (3)]); 
								;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 256 "1807096.y"
    { (yyval) = (yyvsp[(2) - (3)]);	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 257 "1807096.y"
    {printf("\nValue of Sin(%d) is %lf\n",(yyvsp[(2) - (2)]),sin((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=sin((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 259 "1807096.y"
    {printf("\nValue of Cos(%d) is %lf\n",(yyvsp[(2) - (2)]),cos((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=cos((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 261 "1807096.y"
    {printf("\nValue of Tan(%d) is %lf\n",(yyvsp[(2) - (2)]),tan((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=tan((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 263 "1807096.y"
    {printf("\nValue of Cosec(%d) is %lf\n",(yyvsp[(2) - (2)]),1/sin((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=1/sin((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 265 "1807096.y"
    {printf("\nValue of Sec(%d) is %lf\n",(yyvsp[(2) - (2)]),1/cos((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=1/cos((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 267 "1807096.y"
    {printf("\nValue of Cot(%d) is %lf\n",(yyvsp[(2) - (2)]),1/tan((yyvsp[(2) - (2)])*3.1416/180)); (yyval)=1/tan((yyvsp[(2) - (2)])*3.1416/180);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 269 "1807096.y"
    {printf("\nValue of Log10(%d) is %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)])*1.0)/log(10.0))); (yyval)=(log((yyvsp[(2) - (2)])*1.0)/log(10.0));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 270 "1807096.y"
    {printf("\nValue of Log(%d) is %lf\n",(yyvsp[(2) - (2)]),(log((yyvsp[(2) - (2)])))); (yyval)=(log((yyvsp[(2) - (2)])));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 271 "1807096.y"
    {
			long long res = 1;
			long long x = (yyvsp[(3) - (8)]);
			long long p= (yyvsp[(5) - (8)]);
			long long m=(yyvsp[(7) - (8)]);
			while ( p )
			{
				if (p%2== 1) //p is odd
				{
					res = ( res * x ) % m;
				}
				x = ( x * x ) % m;
				p = p / 2;
			}
			printf("\nBigmod of %d ^ %d MOD %d is = %lld\n",(yyvsp[(3) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(7) - (8)]),res);
			(yyval)=res;
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2096 "1807096.tab.c"
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
#line 289 "1807096.y"



void yyerror(char *s){
	printf( "%s\n", s);
}


