/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 11 "lab6.y" /* yacc.c:337  */

int yylex();
#include <stdio.h>
#include <ctype.h>
#include "ast.h"
//enum SYSTEMTYPES Type;
int lineCount; 
void yyerror (s) 
        char *s;
{
   	/* prints what line error occurs at when YACC comes across a syntax error */
	fprintf(stderr,"%s line: %d\n", s, lineCount );
}


#line 86 "y.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
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
    ID = 258,
    INT = 259,
    VOID = 260,
    BOOLEAN = 261,
    BEGINNING = 262,
    END = 263,
    OF = 264,
    WHILE = 265,
    DO = 266,
    READ = 267,
    RETURN = 268,
    WRITE = 269,
    AND = 270,
    OR = 271,
    TRUE = 272,
    FALSE = 273,
    NOT = 274,
    ELSE = 275,
    IF = 276,
    THEN = 277,
    GE = 278,
    LE = 279,
    EE = 280,
    NE = 281,
    NUM = 282
  };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define VOID 260
#define BOOLEAN 261
#define BEGINNING 262
#define END 263
#define OF 264
#define WHILE 265
#define DO 266
#define READ 267
#define RETURN 268
#define WRITE 269
#define AND 270
#define OR 271
#define TRUE 272
#define FALSE 273
#define NOT 274
#define ELSE 275
#define IF 276
#define THEN 277
#define GE 278
#define LE 279
#define EE 280
#define NE 281
#define NUM 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "lab6.y" /* yacc.c:352  */

    char *string;
    int integer;
    struct ASTnodetype * node;
    enum SYSTEMTYPES types;

#line 190 "y.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

#define YYUNDEFTOK  2
#define YYMAXUTOK   282

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      37,    38,    30,    28,    36,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    33,
      40,    39,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    51,    52,    56,    57,    59,    70,    74,
      79,    84,    91,    92,    93,    95,   104,   107,   109,   110,
     114,   118,   124,   129,   130,   134,   135,   144,   145,   146,
     147,   148,   149,   150,   151,   153,   154,   156,   161,   169,
     174,   175,   179,   183,   186,   191,   193,   196,   202,   203,
     209,   210,   211,   212,   213,   214,   216,   217,   223,   224,
     226,   227,   233,   234,   235,   236,   238,   239,   242,   243,
     244,   247,   250,   255,   260,   261,   263,   266
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "VOID", "BOOLEAN",
  "BEGINNING", "END", "OF", "WHILE", "DO", "READ", "RETURN", "WRITE",
  "AND", "OR", "TRUE", "FALSE", "NOT", "ELSE", "IF", "THEN", "GE", "LE",
  "EE", "NE", "NUM", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "'['",
  "']'", "','", "'('", "')'", "'='", "'<'", "'>'", "$accept", "P", "decls",
  "decl", "varDecl", "varList", "typeSp", "funDecl", "params", "paramList",
  "param", "compoundSt", "localDec", "stateList", "statement",
  "expressionSt", "selectionSt", "iterationSt", "returnSt", "readSt",
  "writeSt", "assignmentSt", "expression", "var", "simpleExpr", "relop",
  "addExpr", "addop", "term", "multop", "factor", "call", "args",
  "argList", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,    37,    59,    91,    93,    44,    40,    41,    61,
      60,    62
};
# endif

#define YYPACT_NINF -104

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-104)))

#define YYTABLE_NINF -17

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      63,  -104,  -104,  -104,    21,  -104,    63,  -104,    23,  -104,
    -104,  -104,    24,    -1,    15,    47,    80,  -104,    17,     2,
    -104,    25,    54,    37,  -104,    42,    46,    53,    83,    63,
      47,    56,    63,  -104,  -104,  -104,  -104,    63,    47,    10,
    -104,    28,    27,    89,    22,    27,  -104,  -104,    27,    27,
    -104,  -104,    27,  -104,    85,    10,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,    61,    58,  -104,    48,    65,  -104,  -104,
      27,    27,    87,  -104,    66,    68,  -104,    69,    70,  -104,
      77,    67,  -104,  -104,  -104,    27,  -104,  -104,  -104,  -104,
    -104,  -104,  -104,  -104,    27,    27,  -104,  -104,  -104,  -104,
      27,    71,    72,    73,  -104,    10,  -104,  -104,  -104,    10,
    -104,    74,   -18,    65,  -104,  -104,    27,  -104,  -104,    84,
    -104,  -104,    10,  -104
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,     0,     2,     3,     5,     0,     6,
       1,     4,     8,     0,     0,     0,     0,     7,     0,     8,
      10,    13,     0,     0,    17,    18,     9,    20,     0,     0,
       0,     0,    23,    15,    19,    11,    21,    23,     0,    25,
      24,    46,     0,     0,     0,     0,    70,    71,     0,     0,
      67,    36,     0,    28,     0,    25,    27,    29,    30,    32,
      33,    34,    31,     0,    68,    45,    48,    56,    60,    69,
       0,    74,     0,    68,    46,     0,    40,     0,     0,    72,
       0,     0,    22,    26,    35,     0,    53,    50,    54,    55,
      58,    59,    51,    52,     0,     0,    64,    65,    62,    63,
       0,     0,    76,     0,    75,     0,    42,    41,    43,     0,
      66,     0,    49,    57,    61,    47,     0,    73,    39,    37,
      44,    77,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -104,  -104,   103,  -104,   -23,   -12,    19,  -104,  -104,    81,
    -104,    86,    75,    60,  -103,  -104,  -104,  -104,  -104,  -104,
    -104,  -104,   -37,   -39,    31,  -104,    26,  -104,    18,  -104,
     -47,  -104,  -104,     1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    13,     8,     9,    23,    24,
      25,    53,    39,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    73,    65,    94,    66,    95,    67,   100,
      68,    69,   103,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      64,    79,   118,    20,    75,    72,   119,    77,    78,    37,
      90,    91,    80,    41,    37,    81,    64,    32,    35,   123,
      42,    10,    43,    44,    45,    41,    12,    46,    47,    48,
      41,    49,    17,   101,   102,    22,    14,    50,    15,    46,
      47,    48,    18,    51,    46,    47,    48,    52,    22,    50,
      19,    38,    26,   114,    50,    76,    38,    27,    14,    52,
      15,    16,    70,   -16,    52,    71,    64,     1,     2,     3,
      64,    86,    87,    88,    89,    28,    90,    91,    29,   102,
      96,    97,    30,    64,     1,    21,     3,    31,    92,    93,
      32,    36,    74,    82,    84,    98,    99,    85,   105,   109,
      70,   106,   107,   108,   122,   110,   115,   120,   116,    11,
      34,   117,    40,   113,    33,    83,   111,   121,     0,     0,
     112
};

static const yytype_int8 yycheck[] =
{
      39,    48,   105,    15,    43,    42,   109,    44,    45,    32,
      28,    29,    49,     3,    37,    52,    55,     7,    30,   122,
      10,     0,    12,    13,    14,     3,     3,    17,    18,    19,
       3,    21,    33,    70,    71,    16,    34,    27,    36,    17,
      18,    19,    27,    33,    17,    18,    19,    37,    29,    27,
       3,    32,    35,   100,    27,    33,    37,     3,    34,    37,
      36,    37,    34,    38,    37,    37,   105,     4,     5,     6,
     109,    23,    24,    25,    26,    38,    28,    29,    36,   116,
      15,    16,    36,   122,     4,     5,     6,    34,    40,    41,
       7,    35,     3,     8,    33,    30,    31,    39,    11,    22,
      34,    33,    33,    33,    20,    38,    35,    33,    36,     6,
      29,    38,    37,    95,    28,    55,    85,   116,    -1,    -1,
      94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,    43,    44,    45,    46,    48,    49,
       0,    44,     3,    47,    34,    36,    37,    33,    27,     3,
      47,     5,    48,    50,    51,    52,    35,     3,    38,    36,
      36,    34,     7,    53,    51,    47,    35,    46,    48,    54,
      54,     3,    10,    12,    13,    14,    17,    18,    19,    21,
      27,    33,    37,    53,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    68,    70,    72,    73,
      34,    37,    64,    65,     3,    65,    33,    64,    64,    72,
      64,    64,     8,    55,    33,    39,    23,    24,    25,    26,
      28,    29,    40,    41,    67,    69,    15,    16,    30,    31,
      71,    64,    64,    74,    75,    11,    33,    33,    33,    22,
      38,    66,    68,    70,    72,    35,    36,    38,    56,    56,
      33,    75,    20,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    47,    47,
      47,    47,    48,    48,    48,    49,    50,    50,    51,    51,
      52,    52,    53,    54,    54,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    57,    57,    58,    58,    59,
      60,    60,    61,    62,    63,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    72,    72,    73,    74,    74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     4,
       3,     6,     1,     1,     1,     6,     1,     1,     1,     3,
       2,     4,     4,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     6,     4,
       2,     3,     3,     3,     4,     1,     1,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     2,     4,     0,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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
#line 49 "lab6.y" /* yacc.c:1652  */
    { program = (yyvsp[0].node); /* set program to the begining of the tree */ }
#line 1373 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 51 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from decl to decls */ }
#line 1379 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 52 "lab6.y" /* yacc.c:1652  */
    { (yyvsp[-1].node)->next = (yyvsp[0].node); /* chains declarations together with the next pointer */
                             (yyval.node) = (yyvsp[-1].node); /* pass node */
                             }
#line 1387 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 56 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* pass the node from varDecl */ }
#line 1393 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 57 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1399 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 59 "lab6.y" /* yacc.c:1652  */
    { 
				    (yyval.node) = (yyvsp[-1].node); /* passes node from varList */
				    /* sets type for all varlists */
				    ASTnode *p;
				    p = (yyvsp[-1].node);
				    while ( p != NULL ) {
                                       p->sysType = (yyvsp[-2].integer);
                                       p = p->s1;
                                    }
				    }
#line 1414 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 70 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(VARDEC); /* create node */    /* var-list -> ID | ID [NUM] | ID , var-list | ID[NUM] , var-list */
                      (yyval.node)->name = (yyvsp[0].string); /* set name to its ID */
                      //$$->sysType = Type; /* set type according to the typeSp */ 
                      }
#line 1423 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 74 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(VARDEC); /* creates node */
                                 (yyval.node)->name = (yyvsp[-3].string); /* sets name to its ID */
                                 (yyval.node)->value =(yyvsp[-1].integer); /* sets value from the NUM of the size of the array */
                                 //$$->sysType = Type; /* sets Type accroding to typeSP */
                                 }
#line 1433 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 79 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(VARDEC);
                                 (yyval.node)->name = (yyvsp[-2].string);
                                 //$$->sysType = Type;
                                 (yyval.node)->s1 = (yyvsp[0].node); /* chains VARDECs together with the s1 pointer */
                                 }
#line 1443 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 84 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(VARDEC); 
                                             (yyval.node)->name = (yyvsp[-5].string);
                                             (yyval.node)->value = (yyvsp[-3].integer);
                                             //$$->sysType = Type;
                                             (yyval.node)->s1 = (yyvsp[0].node); /* chains VARDECs together with the s1 pointer */
                                             }
#line 1454 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 91 "lab6.y" /* yacc.c:1652  */
    { (yyval.integer) = INTTYPE;  /* sets type of the function or variable */}
#line 1460 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 92 "lab6.y" /* yacc.c:1652  */
    { (yyval.integer) = VOIDTYPE; }
#line 1466 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 93 "lab6.y" /* yacc.c:1652  */
    { (yyval.integer) = BOOLEANTYPE; }
#line 1472 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 95 "lab6.y" /* yacc.c:1652  */
    { 
                                                     (yyval.node) = ASTCreateNode(FUNDEC); /* creates FUNDEC node */
                                                     (yyval.node)->name = (yyvsp[-4].string); /* sets name to its ID */
                                                     (yyval.node)->s1 = (yyvsp[-2].node); /* sets its parameters to the s1 pointer */
                                                     (yyval.node)->s2 = (yyvsp[0].node); /* sets the block statement to the s2 pointer */
                                                     (yyval.node)->sysType = (yyvsp[-5].integer);
                                                     //$$->sysType = Type; /* sets type of the funtion */
                                                     }
#line 1485 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 104 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(PARAM); /* create a PARAM node and sets type to NULLTYPE to sesemble no parameters */
                         (yyval.node)->sysType = NULLTYPE; 
                         }
#line 1493 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 107 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1499 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 109 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1505 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 110 "lab6.y" /* yacc.c:1652  */
    { (yyvsp[-2].node)->next = (yyvsp[0].node); /* chains parameters together with next pointer */
                                      (yyval.node) = (yyvsp[-2].node); 
                                      }
#line 1513 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 114 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(PARAM); /* creates PARAM node, then sets its name and type */
                             (yyval.node)->name = (yyvsp[0].string); 
                             (yyval.node)->sysType = (yyvsp[-1].integer);	
                             }
#line 1522 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 118 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(PARAM);
                                    (yyval.node)->name = (yyvsp[-2].string);
                                    (yyval.node)->value = 1; /* sets value to 1 for printing */
                                    (yyval.node)->sysType = (yyvsp[-3].integer);
                                    }
#line 1532 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 124 "lab6.y" /* yacc.c:1652  */
    {(yyval.node) = ASTCreateNode(BLOCK); /* creates BLOCK node */
                                                  (yyval.node)->s1 = (yyvsp[-2].node); /* sets localDec to s1 */
                                                  (yyval.node)->s2 = (yyvsp[-1].node); /* sets sataList to s2 */
                                                  }
#line 1541 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 129 "lab6.y" /* yacc.c:1652  */
    {(yyval.node) = NULL; }
#line 1547 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 130 "lab6.y" /* yacc.c:1652  */
    { (yyvsp[-1].node)->next = (yyvsp[0].node); /* chains localDec together with next */
                                   (yyval.node) = (yyvsp[-1].node); 
                                   }
#line 1555 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 134 "lab6.y" /* yacc.c:1652  */
    {(yyval.node) = NULL; }
#line 1561 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 135 "lab6.y" /* yacc.c:1652  */
    { if ( (yyvsp[-1].node) != NULL ) { /* checks if statement is not NULL */
                                        (yyvsp[-1].node)->next = (yyvsp[0].node); /* chains statments together with next */
                                        (yyval.node) = (yyvsp[-1].node); /* sets to statement */
                                        }
                                      else {
                                        (yyval.node) = (yyvsp[0].node); /* sets to stateList if statement is NULL */
                                        }
                                      }
#line 1574 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 144 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes nodes created by each different statement */}
#line 1580 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 145 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1586 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 146 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1592 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 147 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1598 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 148 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1604 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 149 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1610 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 150 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1616 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 151 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1622 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 153 "lab6.y" /* yacc.c:1652  */
    { (yyval.node)=(yyvsp[-1].node); /* passes node from expression */}
#line 1628 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 154 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; /* sets to null for no expressions */ }
#line 1634 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 156 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(SELESTMT); /* creates a SELESTMT node */
                                                     (yyval.node)->s1 = ASTCreateNode(IFTHEN); /* creates a IFTHEN node in the SELESTMT's s1 */
                                                     ((yyval.node)->s1)->s1 = (yyvsp[-2].node); /* sets IFTHEN's s1 with the expression */
                                                     ((yyval.node)->s1)->s2 = (yyvsp[0].node); /* sets IFTHEN's s2 with the statement */
                                                     }
#line 1644 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 161 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(SELESTMT); 
                                                                    (yyval.node)->s1 = ASTCreateNode(IFTHEN); 
                                                                    ((yyval.node)->s1)->s1 = (yyvsp[-4].node); 
                                                                    ((yyval.node)->s1)->s2 = (yyvsp[-2].node); 
                                                                    (yyval.node)->s2 = ASTCreateNode(ELSESTMT); /* creats an ELSESTMT in SELESTMT's s2 */
                                                                    ((yyval.node)->s2)->s1 = (yyvsp[0].node); /* sets the ELSESTMT's s1 with the second expression */
                                                                    }
#line 1656 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 169 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(WHILEDO); /* creates WHILEDO node */
                                                (yyval.node)->s1 = (yyvsp[-2].node); /* sets s1 with epression */
                                                (yyval.node)->s2 = (yyvsp[0].node); /* sets s2 with statement */
                                                }
#line 1665 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 174 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(RETURNT); /* creates RETURN node */ }
#line 1671 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 175 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(RETURNT); /* creates RETURN node with s1 set to the expression */
                                        (yyval.node)->s1 = (yyvsp[-1].node); 
                                        }
#line 1679 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 179 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(READT); /* creates READST node, sets s1 to var */
                              (yyval.node)->s1=(yyvsp[-1].node); 
                              }
#line 1687 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 183 "lab6.y" /* yacc.c:1652  */
    { (yyval.node)= ASTCreateNode(WRITET); /* creates WRITEST node, sets s1 to expression */
                                       (yyval.node)->s1 = (yyvsp[-1].node); }
#line 1694 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 186 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(ASSIGN); /* creates ASSIGN node */ 
                                         (yyval.node)->s1 = (yyvsp[-3].node); /* sets s1 to var */
                                         (yyval.node)->s2 = (yyvsp[-1].node); /* sets s2 to simpleExpr */ 
                                       }
#line 1703 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 191 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1709 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 193 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(IDENT); /* creates IDENT node and sets name to the ID */
                     (yyval.node)->name = (yyvsp[0].string); 
                   }
#line 1717 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 196 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(IDENT); 
                                        (yyval.node)->name = (yyvsp[-3].string); 
                                        (yyval.node)->value = 1; /* sets value for printing */
                                        (yyval.node)->s1 = (yyvsp[-1].node); /* sets s1 to expression */
                                      }
#line 1727 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 202 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1733 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 203 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(EXPR); /* creates EXPR node */ 
                                        (yyval.node)->sysType = (yyvsp[-1].types); /* setstype to the relop */
                                        (yyval.node)->s1 = (yyvsp[-2].node); /* sets left and right addExpr to s1 and s2 */
                                        (yyval.node)->s2 = (yyvsp[0].node); 
                                      }
#line 1743 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 209 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = LET; /* returns types according to the operator */ }
#line 1749 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 210 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = LT; }
#line 1755 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 211 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = GT; }
#line 1761 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 212 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = GET; }
#line 1767 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 213 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = EET; }
#line 1773 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 214 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = NET; }
#line 1779 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 216 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1785 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 217 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(EXPR); /* creates EXPR node */
                                     (yyval.node)->s1 = (yyvsp[-2].node); /* sets s1 to addExpr */
                                     (yyval.node)->s2 = (yyvsp[0].node); /* sets s2 to term */
                                     (yyval.node)->sysType = (yyvsp[-1].types); /* sets type according to addop */
                                     }
#line 1795 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 223 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = ADDOPER;  /* returns type ADDOPER for addition */}
#line 1801 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 224 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = SUBOPER; /* returns type SUBOPER for subtraction */ }
#line 1807 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 226 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1813 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 227 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(EXPR); /* creates EXPR node */
                                     (yyval.node)->s1 = (yyvsp[-2].node); /* sets s1 to term */
                                     (yyval.node)->s2 = (yyvsp[0].node); /* sets s2 to factor */
                                     (yyval.node)->sysType = (yyvsp[-1].types); /* sets type according to multop */
                                     }
#line 1823 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 233 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = MULTOPER; /* returns type for each operator */ }
#line 1829 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 234 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = DIVDOPER; }
#line 1835 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 235 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = ANDOPER; }
#line 1841 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 236 "lab6.y" /* yacc.c:1652  */
    { (yyval.types) = OROPER; }
#line 1847 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 238 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[-1].node); /* passes node form expression */ }
#line 1853 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 239 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(NUMT); /* makes NUMT node and sets value to the number */
                      (yyval.node)->value = (yyvsp[0].integer); 
                      }
#line 1861 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 242 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from var */ }
#line 1867 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 243 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from call */ }
#line 1873 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 244 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(BOOLT); /* creates BOOLT node */
                       (yyval.node)->value = 1; /* sets value to 1 for ttrue */
                       }
#line 1881 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 247 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(BOOLT); /* creates BOOT node */
                        (yyval.node)->value = 0; /* sets value to 0 for false */
                        }
#line 1889 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 250 "lab6.y" /* yacc.c:1652  */
    { (yyval.node)= ASTCreateNode(EXPR); /* creates EXPR node */
                             (yyval.node)->s1 = (yyvsp[0].node); /* sets s1 to factor */
                             (yyval.node)->sysType = NOTT; /* sets type to NOTT for not operator */
                             }
#line 1898 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 255 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(CALLT); // creates CALL node */
                                  (yyval.node)->s1= (yyvsp[-1].node); /* sets s1 to args */
                                  (yyval.node)->name = (yyvsp[-3].string); /* sets name to the ID */
                                  }
#line 1907 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 260 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; /* sets to NULL if no args */ }
#line 1913 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 261 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from argList */ }
#line 1919 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 263 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(ARGLIST);
                              (yyval.node)->s1 = (yyvsp[0].node);
                              }
#line 1927 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 266 "lab6.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(ARGLIST);
                                         (yyval.node)->next = (yyvsp[0].node); /* chains argList together with next to expression's node */
                                         (yyval.node)->s1 = (yyvsp[-2].node); /* passes expression node */
                                         }
#line 1936 "y.tab.c" /* yacc.c:1652  */
    break;


#line 1940 "y.tab.c" /* yacc.c:1652  */
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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 272 "lab6.y" /* yacc.c:1918  */


int main ()
{ 
    yyparse();
    ASTprint(0,program);
}
