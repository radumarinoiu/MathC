/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#line 1 "mathc.y" /* yacc.c:339  */

#include "libs/mylib.h"
#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex (void);

#line 76 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IFX = 258,
    ELSE = 259,
    start_decl = 260,
    INTEGER = 261,
    CHR = 262,
    FLOAT = 263,
    BOOL = 264,
    ID = 265,
    vect = 266,
    matr = 267,
    STRUCT = 268,
    CONST = 269,
    pls = 270,
    min = 271,
    ori = 272,
    slsh = 273,
    verf = 274,
    mod = 275,
    ASSIGN = 276,
    AND = 277,
    OR = 278,
    INCR = 279,
    NOT = 280,
    sprnt = 281,
    dprnt = 282,
    sacoal = 283,
    dacoal = 284,
    pnct = 285,
    vir = 286,
    pnctvir = 287,
    end_defines = 288,
    end_instr = 289,
    IF = 290,
    WHILE = 291,
    FOR = 292,
    RETURN = 293,
    print = 294,
    INTEGER_VAL = 295,
    FLOAT_VAL = 296,
    CHR_VAL = 297,
    BOOL_VAL = 298,
    EQ = 299,
    NEQ = 300,
    LEQ = 301,
    GEQ = 302,
    GRE = 303,
    LES = 304
  };
#endif
/* Tokens.  */
#define IFX 258
#define ELSE 259
#define start_decl 260
#define INTEGER 261
#define CHR 262
#define FLOAT 263
#define BOOL 264
#define ID 265
#define vect 266
#define matr 267
#define STRUCT 268
#define CONST 269
#define pls 270
#define min 271
#define ori 272
#define slsh 273
#define verf 274
#define mod 275
#define ASSIGN 276
#define AND 277
#define OR 278
#define INCR 279
#define NOT 280
#define sprnt 281
#define dprnt 282
#define sacoal 283
#define dacoal 284
#define pnct 285
#define vir 286
#define pnctvir 287
#define end_defines 288
#define end_instr 289
#define IF 290
#define WHILE 291
#define FOR 292
#define RETURN 293
#define print 294
#define INTEGER_VAL 295
#define FLOAT_VAL 296
#define CHR_VAL 297
#define BOOL_VAL 298
#define EQ 299
#define NEQ 300
#define LEQ 301
#define GEQ 302
#define GRE 303
#define LES 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "mathc.y" /* yacc.c:355  */
int val; char val_ch; char *nume; 

#line 217 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "y.tab.c" /* yacc.c:358  */

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   433

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  223

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    46,    47,    50,    51,    52,    53,    54,
      55,    61,    64,    67,    68,    69,    70,    71,    72,    73,
      76,    79,    81,    82,    85,    88,    89,    90,    91,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     144,   145,   148,   149,   152,   153,   154,   155,   156,   157,
     158,   159,   164,   167,   168,   169,   170,   173,   176,   177,
     178,   181,   182,   185,   188,   191,   192,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   224,   227,   228,   229
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IFX", "ELSE", "start_decl", "INTEGER",
  "CHR", "FLOAT", "BOOL", "ID", "vect", "matr", "STRUCT", "CONST", "pls",
  "min", "ori", "slsh", "verf", "mod", "ASSIGN", "AND", "OR", "INCR",
  "NOT", "sprnt", "dprnt", "sacoal", "dacoal", "pnct", "vir", "pnctvir",
  "end_defines", "end_instr", "IF", "WHILE", "FOR", "RETURN", "print",
  "INTEGER_VAL", "FLOAT_VAL", "CHR_VAL", "BOOL_VAL", "EQ", "NEQ", "LEQ",
  "GEQ", "GRE", "LES", "$accept", "programul", "declaratii",
  "declaratiile", "struct_dec", "struct", "struct_identif", "struct_body",
  "fct_bloc", "fct_body", "fct_dec", "fct", "concret_dec", "arg_list",
  "instructiuni", "statements", "statement", "val_struct", "PRINTEGER",
  "function", "argum", "if_stat", "for_stat", "while_stat", "bloc_stat",
  "expr", "expr3", "sign", "assign", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -36

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    37,    16,    -9,   126,   138,   177,   189,    50,    37,
    -151,    35,  -151,    19,    54,    55,  -151,     1,   -11,  -151,
    -151,    -3,  -151,  -151,    -1,  -151,  -151,    20,  -151,  -151,
    -151,  -151,  -151,    56,    37,   221,   394,  -151,  -151,   146,
    -151,    60,    72,    73,  -151,    74,    83,    84,   338,   105,
    -151,   123,  -151,   111,   113,   148,  -151,  -151,  -151,   151,
      67,   114,   137,   141,  -151,    76,  -151,  -151,  -151,    17,
     355,   224,   243,   256,   260,    75,   338,   338,   186,   338,
     338,   338,   338,   269,   183,  -151,  -151,  -151,   338,  -151,
    -151,  -151,  -151,    10,  -151,   205,   157,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   272,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,   220,   290,    92,   290,   197,   290,
     290,    81,   124,   209,   206,   238,   159,   338,   338,   338,
     338,   338,   338,   338,  -151,   338,   338,   338,   338,   338,
     338,  -151,   219,   230,   232,   254,  -151,  -151,  -151,   291,
     304,   307,   341,  -151,   338,   338,   375,   375,   338,  -151,
    -151,   104,   104,  -151,  -151,  -151,   312,   325,   100,   100,
     100,   100,   100,   100,   338,   338,   338,   338,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
     290,   290,   394,  -151,   292,  -151,   194,   175,   229,   242,
     277,   386,   375,   269,  -151,  -151,  -151,  -151,  -151,  -151,
     271,   375,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     0,     0,     0,     3,
       7,     0,     6,     0,     0,     0,     1,     0,    25,    41,
      37,    27,    43,    39,    26,    42,    38,    28,    44,    40,
      12,     9,    10,     0,     0,    19,     0,    23,    21,    69,
       5,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       2,     0,    73,     0,     0,     0,    74,    75,    76,     0,
       0,     0,     0,     0,     8,     0,    13,    14,    15,     0,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,     0,     0,   112,   115,   116,   121,     0,   117,
     118,   119,   120,     0,   111,     0,     0,    70,    72,    78,
      80,    81,    77,    30,    34,    32,    36,    20,     0,    11,
      22,    45,    53,    49,    47,    55,    51,    46,    54,    50,
      48,    56,    52,    24,     0,   122,     0,    88,     0,   124,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,    16,    17,    18,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,   114,
     110,    97,    98,   100,    99,   101,   108,   109,   102,   103,
     104,   105,   107,   106,     0,     0,     0,     0,    57,    65,
      61,    59,    67,    63,    58,    66,    62,    60,    68,    64,
      89,    82,     0,    95,    91,    94,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    96,    92,
       0,     0,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,   275,    -4,  -151,  -151,  -151,    13,  -151,
    -151,  -151,    14,  -151,  -151,   -35,   -17,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -150,   -73,  -151,  -151,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    10,    11,    69,    35,    12,    38,
      13,    14,    15,    75,    50,    51,   203,    53,    54,    55,
     126,    56,    57,    58,   204,    93,    94,    95,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    70,   134,   125,   127,    31,   129,   130,   131,   132,
      60,    41,    42,    43,     1,   136,    16,   205,    61,    52,
      62,   -29,    32,    33,    17,   137,   138,   139,   140,   -33,
     141,   -31,   142,   143,    98,    44,    45,    46,    47,    48,
      49,    63,   144,     4,     5,     6,     7,    36,   108,   109,
       8,    37,   -35,    98,   145,   146,   147,   148,   149,   150,
      30,    31,   219,    34,   171,   172,   173,   174,   175,   176,
     177,   222,   178,   179,   180,   181,   182,   183,    32,    33,
      39,    76,     4,     5,     6,     7,    77,    40,    64,     8,
      78,   200,   201,    79,    80,   206,   137,   138,   139,   140,
      81,   141,   123,   142,   143,   107,   124,   103,   166,    82,
      83,   207,   208,   209,   210,   137,   138,   139,   140,   163,
     141,   139,   140,   164,   141,   145,   146,   147,   148,   149,
     150,    96,   220,    41,    42,    43,    18,    19,    20,   137,
     138,   139,   140,    99,   141,   100,   142,   143,    21,    22,
      23,   167,    71,    72,    73,    74,   104,    97,    45,    46,
      47,    48,    49,   152,   153,   154,   155,   211,   145,   146,
     147,   148,   149,   150,   137,   138,   139,   140,   105,   141,
     101,   142,   143,   102,   106,    52,   170,    24,    25,    26,
     137,   138,   139,   140,    98,   141,   128,   142,   143,    27,
      28,    29,   214,   145,   146,   147,   148,   149,   150,   137,
     138,   139,   140,   135,   141,   151,   142,   143,   165,   145,
     146,   147,   148,   149,   150,   213,   159,   160,   161,   162,
      76,    66,    67,    68,   111,   112,   113,   168,   145,   146,
     147,   148,   149,   150,   137,   138,   139,   140,   169,   141,
     184,   142,   143,   114,   115,   116,   215,   137,   138,   139,
     140,   185,   141,   186,   142,   143,   117,   118,   119,   216,
     120,   121,   122,   145,   146,   147,   148,   149,   150,   133,
      42,    43,   156,   157,   158,   187,   145,   146,   147,   148,
     149,   150,   137,   138,   139,   140,   212,   141,   221,   142,
     143,   188,   189,   190,   217,   137,   138,   139,   140,    65,
     141,     0,   142,   143,   191,   192,   193,   194,   195,   196,
       0,   145,   146,   147,   148,   149,   150,   137,   138,   139,
     140,     0,   141,     0,   145,   146,   147,   148,   149,   150,
     137,   138,   139,   140,     0,   141,     0,   142,    84,    85,
      86,   197,   198,   199,    87,     0,   145,   146,   147,   148,
     149,   150,     0,     0,    88,    41,    42,    43,     0,   145,
     146,   147,   148,   149,   150,     0,     0,     0,    89,    90,
      91,    92,     0,     0,   110,    41,    42,    43,     0,     0,
      45,    46,    47,    48,    49,     0,    41,    42,    43,     0,
       0,     0,     0,   202,    41,    42,    43,     0,     0,     0,
      45,    46,    47,    48,    49,   218,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,     0,     0,     0,    45,
      46,    47,    48,    49
};

static const yytype_int16 yycheck[] =
{
      17,    36,    83,    76,    77,     9,    79,    80,    81,    82,
      21,    10,    11,    12,     5,    88,     0,   167,    21,    36,
      21,    32,     9,     9,    33,    15,    16,    17,    18,    32,
      20,    32,    22,    23,    51,    34,    35,    36,    37,    38,
      39,    21,    32,     6,     7,     8,     9,    28,    31,    32,
      13,    32,    32,    70,    44,    45,    46,    47,    48,    49,
      10,    65,   212,    28,   137,   138,   139,   140,   141,   142,
     143,   221,   145,   146,   147,   148,   149,   150,    65,    65,
      26,    21,     6,     7,     8,     9,    26,    32,    32,    13,
      30,   164,   165,    21,    21,   168,    15,    16,    17,    18,
      26,    20,    27,    22,    23,    29,    31,    40,    27,    26,
      26,   184,   185,   186,   187,    15,    16,    17,    18,    27,
      20,    17,    18,    31,    20,    44,    45,    46,    47,    48,
      49,    26,   213,    10,    11,    12,    10,    11,    12,    15,
      16,    17,    18,    32,    20,    32,    22,    23,    10,    11,
      12,    27,     6,     7,     8,     9,    42,    34,    35,    36,
      37,    38,    39,     6,     7,     8,     9,   202,    44,    45,
      46,    47,    48,    49,    15,    16,    17,    18,    41,    20,
      32,    22,    23,    32,    43,   202,    27,    10,    11,    12,
      15,    16,    17,    18,   211,    20,    10,    22,    23,    10,
      11,    12,    27,    44,    45,    46,    47,    48,    49,    15,
      16,    17,    18,    30,    20,    10,    22,    23,    21,    44,
      45,    46,    47,    48,    49,    31,     6,     7,     8,     9,
      21,    10,    11,    12,    10,    11,    12,    31,    44,    45,
      46,    47,    48,    49,    15,    16,    17,    18,    10,    20,
      31,    22,    23,    10,    11,    12,    27,    15,    16,    17,
      18,    31,    20,    31,    22,    23,    10,    11,    12,    27,
      10,    11,    12,    44,    45,    46,    47,    48,    49,    10,
      11,    12,    10,    11,    12,    31,    44,    45,    46,    47,
      48,    49,    15,    16,    17,    18,     4,    20,    27,    22,
      23,    10,    11,    12,    27,    15,    16,    17,    18,    34,
      20,    -1,    22,    23,    10,    11,    12,    10,    11,    12,
      -1,    44,    45,    46,    47,    48,    49,    15,    16,    17,
      18,    -1,    20,    -1,    44,    45,    46,    47,    48,    49,
      15,    16,    17,    18,    -1,    20,    -1,    22,    10,    11,
      12,    10,    11,    12,    16,    -1,    44,    45,    46,    47,
      48,    49,    -1,    -1,    26,    10,    11,    12,    -1,    44,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    40,    41,
      42,    43,    -1,    -1,    29,    10,    11,    12,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    10,    11,    12,    -1,
      -1,    -1,    -1,    28,    10,    11,    12,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    29,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    39,    -1,    -1,    -1,    35,
      36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    51,    52,     6,     7,     8,     9,    13,    53,
      54,    55,    58,    60,    61,    62,     0,    33,    10,    11,
      12,    10,    11,    12,    10,    11,    12,    10,    11,    12,
      10,    54,    58,    62,    28,    57,    28,    32,    59,    26,
      32,    10,    11,    12,    34,    35,    36,    37,    38,    39,
      64,    65,    66,    67,    68,    69,    71,    72,    73,    78,
      21,    21,    21,    21,    32,    53,    10,    11,    12,    56,
      65,     6,     7,     8,     9,    63,    21,    26,    30,    21,
      21,    26,    26,    26,    10,    11,    12,    16,    26,    40,
      41,    42,    43,    75,    76,    77,    26,    34,    66,    32,
      32,    32,    32,    40,    42,    41,    43,    29,    31,    32,
      29,    10,    11,    12,    10,    11,    12,    10,    11,    12,
      10,    11,    12,    27,    31,    75,    70,    75,    10,    75,
      75,    75,    75,    10,    78,    30,    75,    15,    16,    17,
      18,    20,    22,    23,    32,    44,    45,    46,    47,    48,
      49,    10,     6,     7,     8,     9,    10,    11,    12,     6,
       7,     8,     9,    27,    31,    21,    27,    27,    31,    10,
      27,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    31,    31,    31,    31,    10,    11,
      12,    10,    11,    12,    10,    11,    12,    10,    11,    12,
      75,    75,    28,    66,    74,    74,    75,    75,    75,    75,
      75,    65,     4,    31,    27,    27,    27,    27,    29,    74,
      78,    27,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      57,    58,    59,    59,    60,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    68,    68,    68,    68,    69,    70,    70,
      70,    71,    71,    72,    73,    74,    74,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     1,     1,     3,     2,
       2,     4,     2,     1,     1,     1,     3,     3,     3,     0,
       3,     2,     3,     1,     4,     2,     2,     2,     2,     2,
       4,     2,     4,     2,     4,     2,     4,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       2,     1,     2,     1,     1,     1,     1,     2,     2,     3,
       2,     2,     5,     6,     6,     6,     6,     4,     1,     3,
       0,     5,     7,     9,     5,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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
#line 36 "mathc.y" /* yacc.c:1646  */
    { 
            
            decode_error(); 
            if(error==0) {
                print_var(); 
                printf("%s",toPrint);
            }
        }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "mathc.y" /* yacc.c:1646  */
    {structVar--;}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "mathc.y" /* yacc.c:1646  */
    {insert_struct((yyvsp[0].nume),"global_struct"); structVar++;}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 67 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"struct","struct_var");}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 70 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"struct","struct_var");}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 71 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector struct","struct_var");}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice struct","struct_var");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 88 "mathc.y" /* yacc.c:1646  */
    {insert_f((yyvsp[0].nume),"int","global_function");}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 89 "mathc.y" /* yacc.c:1646  */
    {insert_f((yyvsp[0].nume),"float","global_function");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 90 "mathc.y" /* yacc.c:1646  */
    {insert_f((yyvsp[0].nume),"char","global_function");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "mathc.y" /* yacc.c:1646  */
    {insert_f((yyvsp[0].nume),"bool","global_function");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 94 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"int","global");}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 95 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[-2].nume),(yyvsp[0].val),"int","global");}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 96 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"float","global");}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 97 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[-2].nume),(yyvsp[0].val),"float","global");}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 98 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"char","global");}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 99 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[-2].nume),(yyvsp[0].val),"char","global");}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"bool","global");}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[-2].nume),(yyvsp[0].val),"bool","global");}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice int","global");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 103 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice float","global");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 104 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice char","global");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 105 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice bool","global");}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 106 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector int","global");}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 107 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector float","global");}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 108 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector char","global");}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 109 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector bool","global");}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 115 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"int","funct_arg");}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 116 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"float","funct_arg");}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 117 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"char","funct_arg");}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 118 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"bool","funct_arg");}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 119 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice int","funct_arg");}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 120 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice float","funct_arg");}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 121 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice char","funct_arg");}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 122 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice bool","funct_arg");}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 123 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector int","funct_arg");}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 124 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector float","funct_arg");}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 125 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector char","funct_arg");}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 126 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector bool","funct_arg");}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 127 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"int","funct_arg");}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 128 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"float","funct_arg");}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 129 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"char","funct_arg");}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 130 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"bool","funct_arg");}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 131 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice int","funct_arg");}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 132 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice float","funct_arg");}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 133 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice char","funct_arg");}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 134 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"matrice bool","funct_arg");}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 135 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector int","funct_arg");}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 136 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector float","funct_arg");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 137 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector char","funct_arg");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 138 "mathc.y" /* yacc.c:1646  */
    {insert_var((yyvsp[0].nume),0,"vector bool","funct_arg");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 164 "mathc.y" /* yacc.c:1646  */
    {check_struct((yyvsp[-4].nume),1); check_struct((yyvsp[-2].nume),2); updateVal((yyvsp[-2].nume),(yyvsp[0].val));}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 167 "mathc.y" /* yacc.c:1646  */
    {char buff[50]=""; sprintf(buff,"%d\n",(yyvsp[-1].val)); strcat(toPrint,buff);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 168 "mathc.y" /* yacc.c:1646  */
    {char buff[50]=""; sprintf(buff,"%c\n",(yyvsp[-1].val));strcat(toPrint,buff);}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 169 "mathc.y" /* yacc.c:1646  */
    {char buff[50]=""; sprintf(buff,"%4.2f\n",(yyvsp[-1].val));strcat(toPrint,buff);}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 170 "mathc.y" /* yacc.c:1646  */
    {char buff[50]=""; sprintf(buff,"%d\n",(yyvsp[-1].val));strcat(toPrint,buff);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 195 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)+(yyvsp[0].val); }
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 196 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)-(yyvsp[0].val); }
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 197 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)/(yyvsp[0].val); }
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 198 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)*(yyvsp[0].val); }
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 199 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)%(yyvsp[0].val); }
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 200 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)==(yyvsp[0].val); }
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 201 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)!=(yyvsp[0].val); }
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 202 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)<=(yyvsp[0].val); }
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 203 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)>=(yyvsp[0].val); }
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 204 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)<(yyvsp[0].val); }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 205 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val)>(yyvsp[0].val); }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 206 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val) && (yyvsp[0].val); }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 207 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-2].val) || (yyvsp[0].val); }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 208 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[-1].val);}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 209 "mathc.y" /* yacc.c:1646  */
    {(yyval.val)=(yyvsp[0].val);}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 213 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[0].nume)); (yyval.val)=getVal((yyvsp[0].nume));}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 214 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[0].nume)); (yyval.val)=-getVal((yyvsp[0].nume));}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 215 "mathc.y" /* yacc.c:1646  */
    { check_struct((yyvsp[-2].nume),1); check_struct((yyvsp[0].nume),2); (yyval.val)=getVal((yyvsp[0].nume));}
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 216 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[0].nume));}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 217 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[0].nume));}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 218 "mathc.y" /* yacc.c:1646  */
    { (yyval.val)=(yyvsp[0].val);}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 219 "mathc.y" /* yacc.c:1646  */
    { (yyval.val)=(yyvsp[0].val); }
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 220 "mathc.y" /* yacc.c:1646  */
    { (yyval.val)=(yyvsp[0].val); }
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 221 "mathc.y" /* yacc.c:1646  */
    { (yyval.val)=(yyvsp[0].val); }
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 227 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[-2].nume)); updateVal((yyvsp[-2].nume),(yyvsp[0].val)); }
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 228 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[-2].nume));}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 229 "mathc.y" /* yacc.c:1646  */
    {check_existence((yyvsp[-2].nume));}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2013 "y.tab.c" /* yacc.c:1646  */
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
#line 232 "mathc.y" /* yacc.c:1906  */



int yyerror(char * s){
printf("EROARE!: %s a aparut la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
    if(argc>0)
        yyin=fopen(argv[1],"r");
    yyparse();
} 
