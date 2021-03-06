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
#line 11 "lab9.y" /* yacc.c:337  */

int yylex();
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ast.h"
#include "emit.h"
int debugEMIT = 0;
int lineCount; 
int level = 0;
int offset = 0;
int goffset = 0;
int maxOffset = 0;
// 1 to view table after every Insert
int debugI = 0;
// pointer for holding error message
char *err;
void yyerror (s) 
        char *s;
{
   	/* prints what line error occurs at when YACC comes across a syntax error */
	fprintf(stderr,"%s line: %d\n", s, lineCount );
}
// function used to combine 2 seperate char*
char* combineStrings( char *s1, char* s2 ) {
	char *final = (char*) malloc( sizeof(s1) + sizeof(s2) );
	sprintf(final,"%s%s", s1, s2 );
	return final;
}

#line 102 "y.tab.c" /* yacc.c:337  */
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
    STRING = 259,
    INT = 260,
    VOID = 261,
    BOOLEAN = 262,
    BEGINNING = 263,
    END = 264,
    OF = 265,
    WHILE = 266,
    DO = 267,
    READ = 268,
    RETURN = 269,
    WRITE = 270,
    AND = 271,
    OR = 272,
    TRUE = 273,
    FALSE = 274,
    NOT = 275,
    ELSE = 276,
    IF = 277,
    THEN = 278,
    GE = 279,
    LE = 280,
    EE = 281,
    NE = 282,
    NUM = 283
  };
#endif
/* Tokens.  */
#define ID 258
#define STRING 259
#define INT 260
#define VOID 261
#define BOOLEAN 262
#define BEGINNING 263
#define END 264
#define OF 265
#define WHILE 266
#define DO 267
#define READ 268
#define RETURN 269
#define WRITE 270
#define AND 271
#define OR 272
#define TRUE 273
#define FALSE 274
#define NOT 275
#define ELSE 276
#define IF 277
#define THEN 278
#define GE 279
#define LE 280
#define EE 281
#define NE 282
#define NUM 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "lab9.y" /* yacc.c:352  */

    char *string;
    int integer;
    struct ASTnodetype * node;
    struct SymbTab *symNode;
    enum SYSTEMTYPES types;

#line 209 "y.tab.c" /* yacc.c:352  */
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
#define YYLAST   127

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

#define YYUNDEFTOK  2
#define YYMAXUTOK   283

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
       2,     2,     2,     2,     2,     2,     2,    33,     2,     2,
      38,    39,    31,    29,    37,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
      41,    40,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    67,    68,    72,    73,    75,    87,   101,
     115,   128,   143,   144,   145,   147,   162,   147,   182,   185,
     187,   188,   192,   206,   222,   222,   234,   235,   239,   240,
     249,   250,   251,   252,   253,   254,   255,   256,   258,   259,
     261,   266,   274,   279,   280,   284,   288,   290,   294,   311,
     313,   333,   355,   356,   377,   378,   379,   380,   381,   382,
     384,   385,   404,   405,   407,   408,   427,   428,   429,   430,
     432,   433,   438,   439,   440,   445,   450,   459,   530,   531,
     533,   539
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "INT", "VOID", "BOOLEAN",
  "BEGINNING", "END", "OF", "WHILE", "DO", "READ", "RETURN", "WRITE",
  "AND", "OR", "TRUE", "FALSE", "NOT", "ELSE", "IF", "THEN", "GE", "LE",
  "EE", "NE", "NUM", "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "'['",
  "']'", "','", "'('", "')'", "'='", "'<'", "'>'", "$accept", "P", "decls",
  "decl", "varDecl", "varList", "typeSp", "funDecl", "@1", "$@2", "params",
  "paramList", "param", "compoundSt", "$@3", "localDec", "stateList",
  "statement", "expressionSt", "selectionSt", "iterationSt", "returnSt",
  "readSt", "writeSt", "assignmentSt", "expression", "var", "simpleExpr",
  "relop", "addExpr", "addop", "term", "multop", "factor", "call", "args",
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,    43,
      45,    42,    47,    37,    59,    91,    93,    44,    40,    41,
      61,    60,    62
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -19

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      68,  -101,  -101,  -101,    22,  -101,    68,  -101,    14,  -101,
    -101,  -101,    25,    -8,     3,    36,  -101,  -101,    11,    61,
    -101,    77,     9,    13,    56,  -101,  -101,    49,    36,    42,
      48,    68,  -101,    57,    89,  -101,  -101,  -101,  -101,    68,
      68,    36,    10,  -101,     5,    50,    96,    17,    38,  -101,
    -101,    50,    50,  -101,  -101,    50,  -101,    91,    10,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,    67,    62,  -101,    65,
      33,  -101,  -101,    50,    50,    92,  -101,    70,    69,  -101,
      74,    75,    76,  -101,    88,    73,  -101,  -101,  -101,    50,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,    50,    50,
    -101,  -101,  -101,  -101,    50,    78,    79,    80,  -101,    10,
    -101,  -101,  -101,  -101,    10,  -101,    81,   -27,    33,  -101,
    -101,    50,  -101,  -101,    97,  -101,  -101,    10,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,     0,     2,     3,     5,     0,     6,
       1,     4,     8,     0,     0,     0,    15,     7,     0,     8,
      10,     0,     9,    13,     0,    16,    19,    20,     0,    22,
       0,     0,    11,     0,     0,    21,    23,    24,    17,    26,
      26,     0,    28,    27,    50,     0,     0,     0,     0,    74,
      75,     0,     0,    71,    39,     0,    31,     0,    28,    30,
      32,    33,    35,    36,    37,    34,     0,    72,    49,    52,
      60,    64,    73,     0,    78,     0,    72,    50,     0,    43,
       0,     0,     0,    76,     0,     0,    25,    29,    38,     0,
      57,    54,    58,    59,    62,    63,    55,    56,     0,     0,
      68,    69,    66,    67,     0,     0,    80,     0,    79,     0,
      45,    44,    47,    46,     0,    70,     0,    53,    61,    65,
      51,     0,    77,    42,    40,    48,    81,     0,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,   107,  -101,   -29,    -9,    40,  -101,  -101,  -101,
    -101,    86,  -101,    87,  -101,    82,    66,  -100,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,   -40,   -42,    31,  -101,    27,
    -101,    24,  -101,   -50,  -101,  -101,     6
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    13,     8,     9,    21,    30,
      25,    26,    27,    56,    39,    42,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    76,    68,    98,    69,
      99,    70,   104,    71,    72,   107,   108
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    83,    94,    95,    78,    75,    20,    80,    82,   123,
      40,    40,    84,    44,   124,    85,    67,    12,    37,    32,
      44,    45,    10,    46,    47,    48,    17,   128,    49,    50,
      51,    18,    52,   105,   106,    49,    50,    51,    53,    19,
      73,    44,    81,    74,    54,    53,    28,    22,    55,   100,
     101,    79,   -18,    44,   119,    55,    49,    50,    51,    29,
      14,    24,    15,    16,   102,   103,    53,    67,    49,    50,
      51,    24,    67,     1,     2,     3,    55,    33,    53,    41,
      41,   106,     1,    23,     3,    67,    31,    34,    55,    90,
      91,    92,    93,    36,    94,    95,    14,    37,    15,    77,
      86,    88,    89,   110,   109,    73,    96,    97,   111,   112,
     113,   114,   115,    11,   120,   125,   121,    35,   127,   122,
     116,    38,    43,   118,    87,   117,     0,   126
};

static const yytype_int8 yycheck[] =
{
      42,    51,    29,    30,    46,    45,    15,    47,    48,   109,
      39,    40,    52,     3,   114,    55,    58,     3,     8,    28,
       3,    11,     0,    13,    14,    15,    34,   127,    18,    19,
      20,    28,    22,    73,    74,    18,    19,    20,    28,     3,
      35,     3,     4,    38,    34,    28,    37,    36,    38,    16,
      17,    34,    39,     3,   104,    38,    18,    19,    20,     3,
      35,    21,    37,    38,    31,    32,    28,   109,    18,    19,
      20,    31,   114,     5,     6,     7,    38,    35,    28,    39,
      40,   121,     5,     6,     7,   127,    37,    39,    38,    24,
      25,    26,    27,    36,    29,    30,    35,     8,    37,     3,
       9,    34,    40,    34,    12,    35,    41,    42,    34,    34,
      34,    23,    39,     6,    36,    34,    37,    31,    21,    39,
      89,    34,    40,    99,    58,    98,    -1,   121
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    44,    45,    46,    47,    49,    50,
       0,    45,     3,    48,    35,    37,    38,    34,    28,     3,
      48,    51,    36,     6,    49,    53,    54,    55,    37,     3,
      52,    37,    48,    35,    39,    54,    36,     8,    56,    57,
      47,    49,    58,    58,     3,    11,    13,    14,    15,    18,
      19,    20,    22,    28,    34,    38,    56,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    72,
      74,    76,    77,    35,    38,    68,    69,     3,    69,    34,
      68,     4,    68,    76,    68,    68,     9,    59,    34,    40,
      24,    25,    26,    27,    29,    30,    41,    42,    71,    73,
      16,    17,    31,    32,    75,    68,    68,    78,    79,    12,
      34,    34,    34,    34,    23,    39,    70,    72,    74,    76,
      36,    37,    39,    60,    60,    34,    79,    21,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    47,    48,    48,
      48,    48,    49,    49,    49,    51,    52,    50,    53,    53,
      54,    54,    55,    55,    57,    56,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    61,    61,
      62,    62,    63,    64,    64,    65,    66,    66,    67,    68,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    77,    78,    78,
      79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     4,
       3,     6,     1,     1,     1,     0,     0,     8,     1,     1,
       1,     3,     2,     4,     0,     5,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       4,     6,     4,     2,     3,     3,     3,     3,     4,     1,
       1,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     2,     4,     0,     1,
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
#line 65 "lab9.y" /* yacc.c:1652  */
    { program = (yyvsp[0].node); /* set program to the begining of the tree */ }
#line 1395 "y.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 67 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from decl to decls */ }
#line 1401 "y.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 68 "lab9.y" /* yacc.c:1652  */
    { (yyvsp[-1].node)->next = (yyvsp[0].node); /* chains declarations together with the next pointer */
                             (yyval.node) = (yyvsp[-1].node); /* pass node */
                             }
#line 1409 "y.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 72 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* pass the node from varDecl */ }
#line 1415 "y.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 73 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1421 "y.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 75 "lab9.y" /* yacc.c:1652  */
    { 
				    (yyval.node) = (yyvsp[-1].node); /* passes node from varList */
				    /* sets type for all varlists */
				    ASTnode *p;
				    p = (yyvsp[-1].node);
				    while ( p != NULL ) {
                                       p->sysType = (yyvsp[-2].types);
                                       (p->symbol)->Type = (yyvsp[-2].types);
                                       p = p->s1;
                                    }
				    }
#line 1437 "y.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 87 "lab9.y" /* yacc.c:1652  */
    { 
                        /* checks if symbol is not already declared */
                        if ( Search( (yyvsp[0].string), level, 0 ) != NULL ) {
                            err = combineStrings( "Name already used: ", (yyvsp[0].string) ); 
                            yyerror(err);
                            exit(1); 
                        }
                        (yyval.node) = ASTCreateNode(VARDEC); /* create node */ 
                        /* inserts in symbol table and store pointer to entry */   
                        (yyval.node)->symbol = Insert((yyvsp[0].string), 0, ISFUN_SCALER, level, 1, offset, NULL); 
                        offset++; /* increment offset for each insert */
                        (yyval.node)->name = (yyvsp[0].string); /* set name to its ID */
                        if (debugI ) Display();
                   }
#line 1456 "y.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 101 "lab9.y" /* yacc.c:1652  */
    { 
                                    if ( Search( (yyvsp[-3].string), level, 0 ) != NULL ) { 
                                            err = combineStrings( "Name already used: ", (yyvsp[-3].string) ); 
                                            yyerror(err);
                                            exit(1); 
                                    }

                                    (yyval.node) = ASTCreateNode(VARDEC); /* creates node */
                                    (yyval.node)->name = (yyvsp[-3].string); /* sets name to its ID */
                                    (yyval.node)->value =(yyvsp[-1].integer); /* sets value from the NUM of the size of the array */
                                    (yyval.node)->symbol = Insert( (yyvsp[-3].string) , 0, ISFUN_ARRAY, level, (yyvsp[-1].integer), offset, NULL );
                                    offset += (yyvsp[-1].integer);
                                    if ( debugI ) Display();
                                }
#line 1475 "y.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 115 "lab9.y" /* yacc.c:1652  */
    { 
                                    if ( Search( (yyvsp[-2].string), level, 0) != NULL ) {
                                        err = combineStrings("Name already used: ", (yyvsp[-2].string) );
                                        yyerror(err);
                                        exit(1);
                                    }
                                    (yyval.node) = ASTCreateNode(VARDEC);
                                    (yyval.node)->name = (yyvsp[-2].string);
                                    (yyval.node)->symbol = Insert((yyvsp[-2].string), 0, ISFUN_SCALER, level, 1, offset, NULL);
                                    offset++;
                                    if (debugI ) Display();
                                    (yyval.node)->s1 = (yyvsp[0].node); /* chains VARDECs together with the s1 pointer */
                                }
#line 1493 "y.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 128 "lab9.y" /* yacc.c:1652  */
    { 
                                    if ( Search( (yyvsp[-5].string), level, 0 ) != NULL ) {
                                        err = combineStrings("Name already used: ", (yyvsp[-5].string) );
                                        yyerror(err);
                                        exit(1);
                                    } 
                                    (yyval.node) = ASTCreateNode(VARDEC); 
                                    (yyval.node)->name = (yyvsp[-5].string);
                                    (yyval.node)->value = (yyvsp[-3].integer);
                                    (yyval.node)->symbol = Insert( (yyvsp[-5].string) , 0, ISFUN_ARRAY, level, (yyvsp[-3].integer), offset, NULL );
                                    offset += (yyvsp[-3].integer);
                                    (yyval.node)->s1 = (yyvsp[0].node); /* chains VARDECs together with the s1 pointer */
                                    if ( debugI ) Display();
                                }
#line 1512 "y.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 143 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = INTTYPE;  /* sets type of the function or variable */}
#line 1518 "y.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 144 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = VOIDTYPE; }
#line 1524 "y.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 145 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = BOOLEANTYPE; }
#line 1530 "y.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 147 "lab9.y" /* yacc.c:1652  */
    { 
                                /* checks if ID is already been declared */
                                if ( Search( (yyvsp[-1].string), level, 1 ) != NULL ) { 
                                    err = combineStrings("Name already used: ", (yyvsp[-1].string) );
                                    yyerror(err); 
                                    exit(1);
                                } 
                                /* inserts entry into symbol table, stores pointer in sementic value */
                                (yyval.symNode) = Insert ( (yyvsp[-1].string), (yyvsp[-2].types), ISFUN_FUNCTION, level, 1, 0, NULL ); 
                                /* sets globel offset to current offset */
                                goffset = offset;
                                /* resets ofset */
                                offset = 2;
                                maxOffset = offset;
                            }
#line 1550 "y.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 162 "lab9.y" /* yacc.c:1652  */
    { (yyvsp[-1].symNode)->fparms = (yyvsp[0].node);/* sets parameters to the symbol table entry */ }
#line 1556 "y.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 163 "lab9.y" /* yacc.c:1652  */
    {
                           (yyval.node) = ASTCreateNode(FUNDEC);
                           (yyval.node)->name = (yyvsp[-6].string);
                           (yyval.node)->sysType = (yyvsp[-7].types);
                           (yyval.node)->s1 = (yyvsp[-3].node); 
                           (yyval.node)->s2 = (yyvsp[0].node); /* sets the block statement to the s2 pointer */ 
                           /* stores entry into ASTnode */
                           (yyval.node)->symbol = (yyvsp[-4].symNode);
                           if ( maxOffset < offset ) 
                               maxOffset = offset;
                           (yyval.node)->symbol->offset = maxOffset;
                           /* delete elements in level 1 */
                           offset -= Delete(1);
                           /* sets level and offset back to orginally values before function */
                           level = 0;
                           offset = goffset;
                           if ( debugI ) Display();
                        }
#line 1579 "y.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 182 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(PARAM); /* create a PARAM node and sets type to NULLTYPE to sesemble no parameters */
                         (yyval.node)->sysType = NULLTYPE; 
                         }
#line 1587 "y.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 185 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1593 "y.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 187 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1599 "y.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 188 "lab9.y" /* yacc.c:1652  */
    { (yyvsp[-2].node)->next = (yyvsp[0].node); /* chains parameters together with next pointer */
                                      (yyval.node) = (yyvsp[-2].node); 
                                      }
#line 1607 "y.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 192 "lab9.y" /* yacc.c:1652  */
    { 
                                /* checks and adds to symbol table */
                                if ( Search( (yyvsp[0].string), level+1, 0 ) != NULL ) { 
                                    err = combineStrings("Name already used: " ,(yyvsp[0].string) );
                                    yyerror(err); 
                                    exit(1); 
                                }
                                (yyval.node) = ASTCreateNode(PARAM); /* creates PARAM node, then sets its name and type */
                                (yyval.node)->name = (yyvsp[0].string); 
                                (yyval.node)->sysType = (yyvsp[-1].types);
                                (yyval.node)->symbol = Insert( (yyvsp[0].string), (yyvsp[-1].types), ISFUN_SCALER, level+1, 1, offset, NULL );
                                offset++;
                                if ( debugI ) Display();
                            }
#line 1626 "y.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 206 "lab9.y" /* yacc.c:1652  */
    {
                                        if ( Search( (yyvsp[-2].string), level+1, 0 ) != NULL ) { 
                                            err = combineStrings("Name already used: " ,(yyvsp[-2].string) );
                                            yyerror(err); 
                                            exit(1); 
                                        }
                                        (yyval.node) = ASTCreateNode(PARAM);
                                        (yyval.node)->name = (yyvsp[-2].string);
                                        (yyval.node)->value = 1; /* sets value to 1 for printing */
                                        (yyval.node)->sysType = (yyvsp[-3].types);
                                        (yyval.node)->symbol = Insert ( (yyvsp[-2].string), (yyvsp[-3].types), ISFUN_ARRAY, level+1, 1, offset, NULL ); 
                                        offset++;
                                        
                                        if ( debugI ) Display();
                                    }
#line 1646 "y.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 222 "lab9.y" /* yacc.c:1652  */
    { level++; }
#line 1652 "y.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 223 "lab9.y" /* yacc.c:1652  */
    {          
                                        (yyval.node) = ASTCreateNode(BLOCK); /* creates BLOCK node */
                                        (yyval.node)->s1 = (yyvsp[-2].node); /* sets localDec to s1 */
                                        (yyval.node)->s2 = (yyvsp[-1].node); /* sets sataList to s2 */
                                        Display();
                                        if ( maxOffset < offset ) 
                                            maxOffset = offset;
                                        offset-=Delete(level);
                                        level--;
                                   }
#line 1667 "y.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 234 "lab9.y" /* yacc.c:1652  */
    {(yyval.node) = NULL; }
#line 1673 "y.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 235 "lab9.y" /* yacc.c:1652  */
    { (yyvsp[-1].node)->next = (yyvsp[0].node); /* chains localDec together with next */
                                   (yyval.node) = (yyvsp[-1].node); 
                                   }
#line 1681 "y.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 239 "lab9.y" /* yacc.c:1652  */
    {(yyval.node) = NULL; }
#line 1687 "y.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 240 "lab9.y" /* yacc.c:1652  */
    { if ( (yyvsp[-1].node) != NULL ) { /* checks if statement is not NULL */
                                        (yyvsp[-1].node)->next = (yyvsp[0].node); /* chains statments together with next */
                                        (yyval.node) = (yyvsp[-1].node); /* sets to statement */
                                        }
                                      else {
                                        (yyval.node) = (yyvsp[0].node); /* sets to stateList if statement is NULL */
                                        }
                                      }
#line 1700 "y.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 249 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes nodes created by each different statement */}
#line 1706 "y.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 250 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1712 "y.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 251 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1718 "y.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 252 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1724 "y.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 253 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1730 "y.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 254 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1736 "y.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 255 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1742 "y.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 256 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1748 "y.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 258 "lab9.y" /* yacc.c:1652  */
    { (yyval.node)=(yyvsp[-1].node); /* passes node from expression */}
#line 1754 "y.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 259 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; /* sets to null for no expressions */ }
#line 1760 "y.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 261 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(SELESTMT); /* creates a SELESTMT node */
                                                     (yyval.node)->s1 = ASTCreateNode(IFTHEN); /* creates a IFTHEN node in the SELESTMT's s1 */
                                                     ((yyval.node)->s1)->s1 = (yyvsp[-2].node); /* sets IFTHEN's s1 with the expression */
                                                     ((yyval.node)->s1)->s2 = (yyvsp[0].node); /* sets IFTHEN's s2 with the statement */
                                                     }
#line 1770 "y.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 266 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(SELESTMT); 
                                                                    (yyval.node)->s1 = ASTCreateNode(IFTHEN); 
                                                                    ((yyval.node)->s1)->s1 = (yyvsp[-4].node); 
                                                                    ((yyval.node)->s1)->s2 = (yyvsp[-2].node); 
                                                                    (yyval.node)->s2 = ASTCreateNode(ELSESTMT); /* creats an ELSESTMT in SELESTMT's s2 */
                                                                    ((yyval.node)->s2)->s1 = (yyvsp[0].node); /* sets the ELSESTMT's s1 with the second expression */
                                                                    }
#line 1782 "y.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 274 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(WHILEDO); /* creates WHILEDO node */
                                                (yyval.node)->s1 = (yyvsp[-2].node); /* sets s1 with epression */
                                                (yyval.node)->s2 = (yyvsp[0].node); /* sets s2 with statement */
                                                }
#line 1791 "y.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 279 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(RETURNT); /* creates RETURN node */ }
#line 1797 "y.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 280 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(RETURNT); /* creates RETURN node with s1 set to the expression */
                                        (yyval.node)->s1 = (yyvsp[-1].node); 
                                        }
#line 1805 "y.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 284 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(READT); /* creates READST node, sets s1 to var */
                              (yyval.node)->s1=(yyvsp[-1].node); 
                              }
#line 1813 "y.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 288 "lab9.y" /* yacc.c:1652  */
    { (yyval.node)= ASTCreateNode(WRITET); /* creates WRITEST node, sets s1 to expression */
                                       (yyval.node)->s1 = (yyvsp[-1].node); }
#line 1820 "y.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 290 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(WRITET);
                                   (yyval.node)->name = (yyvsp[-1].string);
                                 }
#line 1828 "y.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 294 "lab9.y" /* yacc.c:1652  */
    {
                                            /* checks type of RHS and LHS */
                                            enum SYSTEMTYPES p;
                                            /* if RHS is an EXPR node, then get generated temp value type */
                                            p = (yyvsp[-1].node)->isType;
                                            if ( (yyvsp[-3].node)->sysType != p ) {
                                                err = combineStrings ( "Type Mismatch: ", (yyvsp[-3].node)->name );
                                                yyerror(err);
                                                exit(1);
                                            }
                                            (yyval.node) = ASTCreateNode(ASSIGN); /* creates ASSIGN node */ 
                                            (yyval.node)->symbol = Insert( CreateTemp(), p, ISFUN_SCALER, level, 1, offset, NULL );
                                            offset++;
                                            (yyval.node)->s1 = (yyvsp[-3].node); /* sets s1 to var */
                                            (yyval.node)->s2 = (yyvsp[-1].node); /* sets s2 to simpleExpr */ 
                                       }
#line 1849 "y.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 311 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1855 "y.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 313 "lab9.y" /* yacc.c:1652  */
    {
                        /* checks if ID is in symbol table */
                        struct SymbTab *p = Search( (yyvsp[0].string), level, 1 ); 
                        if ( p == NULL ) { 
                            err = combineStrings("Name not found: ",(yyvsp[0].string));
                            yyerror(err); 
                            exit(1); 
                        }
                        /* entry must be a scaler to be used in this context */
                        if ( p->IsAFunc != ISFUN_SCALER ) { 
                            err = combineStrings((yyvsp[0].string)," Name used in wrong context");
                            yyerror(err); 
                            exit(1);
                        }
                        (yyval.node) = ASTCreateNode(IDENT); /* creates IDENT node and sets name to the ID */
                        (yyval.node)->name = (yyvsp[0].string);
                        (yyval.node)->symbol = Search( (yyvsp[0].string), level, 1 ); 
                        (yyval.node)->sysType = p->Type;
                        (yyval.node)->isType = p->Type;
                   }
#line 1880 "y.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 333 "lab9.y" /* yacc.c:1652  */
    { 
                                        struct SymbTab *p = Search( (yyvsp[-3].string), level, 1 ); 
                                        if ( p  == NULL ) { 
                                            err = combineStrings("Name not found: ",(yyvsp[-3].string));
                                            yyerror(err); 
                                            exit(1); 
                                        }
                                        /* entry must be an array to be used in this context */ 
                                        if ( p->IsAFunc != ISFUN_ARRAY ) { 
                                            err = combineStrings((yyvsp[-3].string)," Name used in wrong context");
                                            yyerror(err); 
                                            exit(1); 
                                        }
                                        (yyval.node) = ASTCreateNode(IDENT); 
                                        (yyval.node)->name = (yyvsp[-3].string); 
                                        (yyval.node)->value = 1; /* sets value for printing */
                                        (yyval.node)->s1 = (yyvsp[-1].node); /* sets s1 to expression */
                                        (yyval.node)->symbol = Search( (yyvsp[-3].string), level, 1 ); 
                                        (yyval.node)->sysType = p->Type;
                                        (yyval.node)->isType = p->Type;
                                      }
#line 1906 "y.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 355 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1912 "y.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 356 "lab9.y" /* yacc.c:1652  */
    { 
                                        /* checks type for RHS and LHS, if either is an EXPR, then get generate temp value's type */
                                        enum SYSTEMTYPES p;
                                        p = (yyvsp[-2].node)->isType;
                                        enum SYSTEMTYPES q;
                                        q = (yyvsp[0].node)->isType;
                                        if ( p != q ) {
                                            yyerror("Type mismatch\n");
                                            exit(1);
                                        }
                                        (yyval.node) = ASTCreateNode(EXPR); /* creates EXPR node */ 
                                        (yyval.node)->sysType = (yyvsp[-1].types); /* setstype to the relop */
                                        (yyval.node)->s1 = (yyvsp[-2].node); /* sets left and right addExpr to s1 and s2 */
                                        (yyval.node)->s2 = (yyvsp[0].node);
                                        /* inserts a generate value into symbol table */
                                        (yyval.node)->symbol = Insert( CreateTemp(), p, ISFUN_SCALER, level, 1, offset, NULL );
                                        (yyval.node)->isType = p;
                                        if ( debugI ) Display();
                                        offset++;
                                      }
#line 1937 "y.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 377 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = LET; /* returns types according to the operator */ }
#line 1943 "y.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 378 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = LT; }
#line 1949 "y.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 379 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = GT; }
#line 1955 "y.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 380 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = GET; }
#line 1961 "y.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 381 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = EET; }
#line 1967 "y.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 382 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = NET; }
#line 1973 "y.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 384 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1979 "y.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 385 "lab9.y" /* yacc.c:1652  */
    { 
                                    enum SYSTEMTYPES p;
                                    p = (yyvsp[-2].node)->isType;
                                    enum SYSTEMTYPES q;
                                    q = (yyvsp[0].node)->isType;
                                    if ( p != q ) {
                                        yyerror("Type mismatch\n");
                                        exit(1);
                                    }
                                    (yyval.node) = ASTCreateNode(EXPR); /* creates EXPR node */
                                    (yyval.node)->s1 = (yyvsp[-2].node); /* sets s1 to addExpr */
                                    (yyval.node)->s2 = (yyvsp[0].node); /* sets s2 to term */
                                    (yyval.node)->sysType = (yyvsp[-1].types); /* sets type according to addop */
                                    (yyval.node)->symbol = Insert( CreateTemp(), p, ISFUN_SCALER, level, 1, offset, NULL );
                                    (yyval.node)->isType = p;
                                    if ( debugI ) Display();
                                    offset++;      
                                   }
#line 2002 "y.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 404 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = ADDOPER;  /* returns type ADDOPER for addition */}
#line 2008 "y.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 405 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = SUBOPER; /* returns type SUBOPER for subtraction */ }
#line 2014 "y.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 407 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2020 "y.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 408 "lab9.y" /* yacc.c:1652  */
    { 
                                    enum SYSTEMTYPES p;
                                    p = (yyvsp[-2].node)->isType;
                                    enum SYSTEMTYPES q;
                                    q = (yyvsp[0].node)->isType;
                                    if ( p != q ) { 
                                        yyerror("Type mismatch\n");
                                        exit(1);
                                    }
                                    (yyval.node) = ASTCreateNode(EXPR); /* creates EXPR node */
                                    (yyval.node)->s1 = (yyvsp[-2].node); /* sets s1 to term */
                                    (yyval.node)->s2 = (yyvsp[0].node); /* sets s2 to factor */
                                    (yyval.node)->sysType = (yyvsp[-1].types); /* sets type according to multop */ 
                                    (yyval.node)->symbol = Insert( CreateTemp(), p, ISFUN_SCALER, level, 1, offset, NULL );
                                    (yyval.node)->isType = p;
                                    if ( debugI ) Display();
                                    offset++;
                                   }
#line 2043 "y.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 427 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = MULTOPER; /* returns type for each operator */ }
#line 2049 "y.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 428 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = DIVDOPER; }
#line 2055 "y.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 429 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = ANDOPER; }
#line 2061 "y.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 430 "lab9.y" /* yacc.c:1652  */
    { (yyval.types) = OROPER; }
#line 2067 "y.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 432 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[-1].node); /* passes node form expression */ }
#line 2073 "y.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 433 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(NUMT); /* makes NUMT node and sets value to the number */
                      (yyval.node)->sysType = INTTYPE;
                      (yyval.node)->isType = INTTYPE;
                      (yyval.node)->value = (yyvsp[0].integer); 
                      }
#line 2083 "y.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 438 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from var */ }
#line 2089 "y.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 439 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from call */ }
#line 2095 "y.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 440 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(BOOLT); /* creates BOOLT node */
		               (yyval.node)->sysType = BOOLEANTYPE;
		               (yyval.node)->isType = BOOLEANTYPE;
                       (yyval.node)->value = 1; /* sets value to 1 for ttrue */
                       }
#line 2105 "y.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 445 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(BOOLT); /* creates BOOT node */
		                (yyval.node)->sysType = BOOLEANTYPE;
		                (yyval.node)->isType = BOOLEANTYPE;
                        (yyval.node)->value = 0; /* sets value to 0 for false */
                        }
#line 2115 "y.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 450 "lab9.y" /* yacc.c:1652  */
    { (yyval.node)= ASTCreateNode(EXPR); /* creates EXPR node */
                             (yyval.node)->s1 = (yyvsp[0].node); /* sets s1 to factor */
                             (yyval.node)->sysType = BOOLEANTYPE; /* sets type to NOTT for not operator */
                             (yyval.node)->symbol = Insert( CreateTemp(), BOOLEANTYPE, ISFUN_SCALER, level, 1, offset ,NULL );
                             (yyval.node)->isType = (yyval.node)->symbol->Type;
                             if ( debugI ) Display();
                             offset++;
                             }
#line 2128 "y.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 459 "lab9.y" /* yacc.c:1652  */
    { 
                                    /* finds ID in symbol table */
                                    struct SymbTab *p = Search ( (yyvsp[-3].string), level, 1 );
                                    /* error if not found */
                                    if ( p == NULL ) { 
                                        err = combineStrings("Name not found: ",(yyvsp[-3].string));
                                        yyerror(err); 
                                        exit(1); 
                                    }
                                    /* error if ID is not a function */
                                    if ( p->IsAFunc != ISFUN_FUNCTION ) { 
                                        err = combineStrings( (yyvsp[-3].string)," Name used in wrong context");
                                        yyerror(err); 
                                        exit(1); 
                                    }
                                    /* get arugments and parameters into pointers to use for comparing */
                                    ASTnode *n = (yyvsp[-1].node);
                                    ASTnode *para = p->fparms;
                                    
                                    if  ( para->sysType == NULLTYPE && n != NULL ) {
                                        err = combineStrings( (yyvsp[-3].string), " Too many aruguments");
                                        yyerror(err); 
                                        exit(1); 
                                    }
                                    else if ( para->sysType != NULLTYPE ) {
                                        /* error if there are arguments when no parameters */
                                        if ( para == NULL && n != NULL ) { 
                                                err = combineStrings( (yyvsp[-3].string), " Too many aruguments");
                                                yyerror(err); 
                                                exit(1); 
                                            
                                        }
                                        /* error if there are no arguments when there are parameter */
                                        if ( n == NULL && para != NULL ) { 
                                                err = combineStrings((yyvsp[-3].string)," Too few arugments");
                                                yyerror(err); 
                                                exit(1); 
                                            
                                        }
                                        /* loop to go through the arugment lis and parameter list */
                                        while ( n != NULL && para != NULL ) {
                                            /* if types do not amtch then error */
                                            if ( n->s1->isType != para->sysType ) {
                                                err = combineStrings("Invaild type of parameter: ",para->name );
                                                yyerror(err);
                                                exit(1);
                                            }
                                            /* if there are no more arguments, and still parameters, then error */
                                            if ( n->next != NULL && para->next == NULL ) {
                                                    err = combineStrings( (yyvsp[-3].string), " Too many aruguments");
                                                    yyerror(err); 
                                                    exit(1); 
                                                }
                                            /* error if there are still parameter but no more arguments */
                                            if ( para->next != NULL && n->next == NULL ) { 
                                                    err = combineStrings((yyvsp[-3].string), " Too few arugments");
                                                    yyerror(err); 
                                                    exit(1); 
                                                }
                                            n = n->next;
                                            para = para->next;	
                                        }

                                    }
                                    (yyval.node) = ASTCreateNode(CALLT); /* creates CALL node */
                                    (yyval.node)->s1= (yyvsp[-1].node); /* sets s1 to args */
                                    (yyval.node)->name = (yyvsp[-3].string); /* sets name to the ID */
                                    (yyval.node)->sysType = p->Type;
                                    (yyval.node)->symbol = p;
                                }
#line 2203 "y.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 530 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = NULL; /* sets to NULL if no args */ }
#line 2209 "y.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 531 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = (yyvsp[0].node); /* passes node from argList */ }
#line 2215 "y.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 533 "lab9.y" /* yacc.c:1652  */
    {     
                              (yyval.node) = ASTCreateNode(ARGLIST);
                              (yyval.node)->s1 = (yyvsp[0].node);
                              (yyval.node)->symbol = Insert( CreateTemp(), INTTYPE, ISFUN_SCALER, level, 1, offset, NULL );
                              offset++;
                              }
#line 2226 "y.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 539 "lab9.y" /* yacc.c:1652  */
    { (yyval.node) = ASTCreateNode(ARGLIST);
                                         (yyval.node)->next = (yyvsp[0].node); /* chains argList together with next to expression's node */
                                         (yyval.node)->s1 = (yyvsp[-2].node); /* passes expression node */
                                         /* have temp store location for call */
                                         (yyval.node)->symbol = Insert( CreateTemp(), INTTYPE, ISFUN_SCALER, level, 1, offset, NULL );
                                         offset++;
                                         }
#line 2238 "y.tab.c" /* yacc.c:1652  */
    break;


#line 2242 "y.tab.c" /* yacc.c:1652  */
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
#line 548 "lab9.y" /* yacc.c:1918  */


int main ( int argc, char* argv[] )
{
    int i;
    FILE *fp = NULL;
    char *fileBegin = "NASMfile";
    char *fileEnd = ".asm";
    char *fileName = NULL;
    for ( i = 0; i < argc; i++ ) {
        if ( strcmp(argv[i],"-d") == 0 ) {
            debugEMIT = 1;
        }
        if ( strcmp(argv[i],"-o") == 0 ) { 
            if ( argv[i+1] == NULL ) {
                printf("No name for file\n"); 
                exit(1);
            }
            fileBegin = argv[i+1];
        }
    }
    fileName = combineStrings(fileBegin, fileEnd);
    yyparse();
    if ( debugEMIT ) ASTprint(0, program);
    fp = fopen( fileName, "w" );
    if ( fp != NULL ) {
        fprintf(fp, "%s", "%include \"io64.inc\"\n");
        emitGLOBEL(program, fp);
        fprintf(fp,"\n");
        fprintf(fp, "section .data\n\n");
        emitSTRINGS( program, fp );
        emit(fp,"","","");
        fprintf(fp,"section .text\n");
        emit(fp,"","global main","");
        emitAST(program,fp);
    }
    else {
        fprintf(stderr, "No outpur file\n"); 
    }
    //printf("Final table\n");
    //Display();
    //ASTprint(0,program);
}
