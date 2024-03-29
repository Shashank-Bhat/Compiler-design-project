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
#line 1 "AST.y" /* yacc.c:339  */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <stdarg.h>
void yyerror(const char*);
int yylex();
void print_sym_tab();
void update_sym_tab(char* typ, char* nam, int line, int scope);
int scope[100];
int scope_ctr;
int scope_ind;
char typ[10]="none";
typedef struct AST{
	char lexeme[100];
	int NumChild;
	struct AST **child;
}AST_node;

struct AST* make_for_node(char* root, AST_node* child1, AST_node* child2, AST_node* child3, AST_node* child4);
struct AST * make_node(char*, AST_node*, AST_node*);
struct AST* make_leaf(char* root);
void AST_print(struct AST *t);
extern FILE* yyin;
extern int yylineno;

#line 93 "y.tab.c" /* yacc.c:339  */

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
    T_DOT = 258,
    T_SINGLE = 259,
    T_SC = 260,
    T_COMMA = 261,
    T_LETTER = 262,
    T_OPBRACE = 263,
    T_CLBRACE = 264,
    T_CONTINUE = 265,
    T_BREAK = 266,
    T_IF = 267,
    T_ELSE = 268,
    T_FOR = 269,
    T_WHILE = 270,
    T_POW = 271,
    T_OPEN = 272,
    T_CLOSE = 273,
    T_COMMENT = 274,
    T_SWITCH = 275,
    T_INT = 276,
    T_FLOAT = 277,
    T_CHAR = 278,
    T_ID = 279,
    T_NUM = 280,
    T_PLUS = 281,
    T_MINUS = 282,
    T_MULT = 283,
    T_DIV = 284,
    T_AND = 285,
    T_OR = 286,
    T_LESS = 287,
    T_GREAT = 288,
    T_LESEQ = 289,
    T_GRTEQ = 290,
    T_NOTEQ = 291,
    T_EQEQ = 292,
    T_ASSIGN = 293,
    T_SPLUS = 294,
    T_SMINUS = 295,
    T_SMULT = 296,
    T_SDIV = 297,
    T_INC = 298,
    T_DEC = 299,
    T_MAIN = 300,
    T_RETURN = 301,
    T_DEFAULT = 302,
    T_CASE = 303,
    T_COLON = 304
  };
#endif
/* Tokens.  */
#define T_DOT 258
#define T_SINGLE 259
#define T_SC 260
#define T_COMMA 261
#define T_LETTER 262
#define T_OPBRACE 263
#define T_CLBRACE 264
#define T_CONTINUE 265
#define T_BREAK 266
#define T_IF 267
#define T_ELSE 268
#define T_FOR 269
#define T_WHILE 270
#define T_POW 271
#define T_OPEN 272
#define T_CLOSE 273
#define T_COMMENT 274
#define T_SWITCH 275
#define T_INT 276
#define T_FLOAT 277
#define T_CHAR 278
#define T_ID 279
#define T_NUM 280
#define T_PLUS 281
#define T_MINUS 282
#define T_MULT 283
#define T_DIV 284
#define T_AND 285
#define T_OR 286
#define T_LESS 287
#define T_GREAT 288
#define T_LESEQ 289
#define T_GRTEQ 290
#define T_NOTEQ 291
#define T_EQEQ 292
#define T_ASSIGN 293
#define T_SPLUS 294
#define T_SMINUS 295
#define T_SMULT 296
#define T_SDIV 297
#define T_INC 298
#define T_DEC 299
#define T_MAIN 300
#define T_RETURN 301
#define T_DEFAULT 302
#define T_CASE 303
#define T_COLON 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "AST.y" /* yacc.c:355  */
char* var_type; char* text; struct AST *node;

#line 234 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

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
       0,    41,    41,    44,    47,    49,    50,    51,    52,    53,
      54,    55,    56,    60,    60,    64,    65,    66,    69,    72,
      75,    78,    81,    82,    83,    86,    87,    88,    92,    95,
      98,    99,   102,   103,   104,   105,   106,   107,   110,   111,
     114,   115,   118,   120,   124,   125,   128,   130,   133,   134,
     135,   138,   139,   140,   143,   144,   145,   146,   147,   150,
     151,   152,   155,   156,   157,   158,   161,   162,   163,   164,
     165,   166
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_DOT", "T_SINGLE", "T_SC", "T_COMMA",
  "T_LETTER", "T_OPBRACE", "T_CLBRACE", "T_CONTINUE", "T_BREAK", "T_IF",
  "T_ELSE", "T_FOR", "T_WHILE", "T_POW", "T_OPEN", "T_CLOSE", "T_COMMENT",
  "T_SWITCH", "T_INT", "T_FLOAT", "T_CHAR", "T_ID", "T_NUM", "T_PLUS",
  "T_MINUS", "T_MULT", "T_DIV", "T_AND", "T_OR", "T_LESS", "T_GREAT",
  "T_LESEQ", "T_GRTEQ", "T_NOTEQ", "T_EQEQ", "T_ASSIGN", "T_SPLUS",
  "T_SMINUS", "T_SMULT", "T_SDIV", "T_INC", "T_DEC", "T_MAIN", "T_RETURN",
  "T_DEFAULT", "T_CASE", "T_COLON", "$accept", "start", "comp_stat",
  "SCOPE", "stat", "ST", "$@1", "B", "C", "D", "select_stat", "iter_stat",
  "jump_stat", "cond", "relexp", "logexp", "logOp", "relOp", "decl",
  "Type", "Varlist", "assign_expr", "assign_expr1", "E", "T", "F",
  "s_operation", "s_op", "unary_expr", YY_NULLPTR
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

#define YYPACT_NINF -24

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-24)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -8,   -21,    42,    29,   -24,    44,    57,   -24,   -24,     1,
      64,    74,    68,   -10,    89,   -24,   -24,    53,   -24,    12,
      85,    86,   -10,     1,   102,   -24,     1,     1,     1,     1,
      88,     1,    27,    10,   -24,   -24,   -24,   -24,   -24,   -10,
      59,    34,    90,   -10,   -24,   -24,   -24,   -24,   -24,   -24,
      65,   -24,   -24,   -24,   -24,    30,   -24,   -24,   -24,   -24,
     -24,   -24,    75,    43,   -24,   -24,     1,   -10,   -10,   -10,
     -10,    97,   -24,   -24,    41,   -24,    98,    14,   -10,   -24,
     -24,   -24,   -10,   -24,    93,   -24,    10,    10,   -24,   -24,
      57,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -10,
     -10,   110,   -24,    95,    37,    24,   -24,   -24,    32,    32,
     -24,    82,   -24,   -24,   -24,    99,    73,    75,   -24,   100,
     113,    33,    77,   -24,    78,   -24,   -24,     1,     1,   -24,
     -24
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     4,     2,    12,
       0,     0,     0,     0,     0,    40,    41,    54,    55,     0,
       0,     0,     0,    12,     0,    20,    12,    12,    12,    12,
       0,    12,     0,    50,    53,    58,    57,    22,    23,     0,
      54,     0,     0,     0,    62,    63,    64,    65,    67,    69,
       0,    70,    71,    66,    68,     0,     7,     3,     8,     9,
      10,    11,    43,     0,    39,     6,    12,     0,     0,     0,
       0,     0,    25,    26,    27,    56,     0,     0,     0,    59,
      60,    24,     0,    38,     0,     5,    48,    49,    51,    52,
       0,    30,    31,    36,    37,    32,    33,    34,    35,     0,
       0,     0,    45,     0,     0,     0,    42,    21,    29,    28,
      13,     0,    44,    61,    47,     0,     0,     0,    46,     0,
       0,    15,     0,    14,     0,    17,    16,    12,    12,    18,
      19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -24,   -24,    -4,   -24,   -23,   -24,   -24,     3,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,    25,    15,   -12,    16,    38,   -24,   -24,   -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    23,     9,    24,    25,   116,   120,   121,   126,
      26,    27,    28,    71,    72,    73,    99,   100,    29,    30,
      63,    31,    64,    32,    33,    34,    35,    50,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    41,     8,    58,    59,    60,    61,    13,    65,     7,
      55,    10,    11,     1,    40,    18,    12,    19,    13,   102,
     103,    14,    15,    16,     3,    17,    18,    74,    19,   114,
     115,    77,    66,    20,    21,    81,    51,    52,    69,    70,
      67,    68,     4,    85,    20,    21,     5,    22,    83,    84,
      67,    68,    75,    67,    68,   113,    67,    68,    67,    68,
      67,    68,     6,    67,    68,     7,   104,    67,    68,    37,
     105,    91,    92,    93,    94,    95,    96,    97,    98,    38,
     124,   119,    78,    86,    87,    39,   107,   108,   109,    79,
      80,    43,    44,    45,    46,    47,    48,    49,    44,    45,
      46,    47,    48,    49,   129,   130,    42,    88,    89,    53,
      54,    57,    62,    82,    76,    90,   101,   106,   110,   111,
      43,   119,   123,   117,   125,   122,   127,   128,   112,     0,
     118
};

static const yytype_int16 yycheck[] =
{
      23,    13,     6,    26,    27,    28,    29,    17,    31,     8,
      22,    10,    11,    21,    24,    25,    15,    27,    17,     5,
       6,    20,    21,    22,    45,    24,    25,    39,    27,     5,
       6,    43,     5,    43,    44,     5,    24,    25,    28,    29,
      26,    27,     0,    66,    43,    44,    17,    46,     5,     6,
      26,    27,    18,    26,    27,    18,    26,    27,    26,    27,
      26,    27,    18,    26,    27,     8,    78,    26,    27,     5,
      82,    30,    31,    32,    33,    34,    35,    36,    37,     5,
      47,    48,    17,    67,    68,    17,    90,    99,   100,    24,
      25,    38,    39,    40,    41,    42,    43,    44,    39,    40,
      41,    42,    43,    44,   127,   128,    17,    69,    70,    24,
      24,     9,    24,    38,    24,    18,    18,    24,     8,    24,
      38,    48,     9,    24,   121,    25,    49,    49,   103,    -1,
     115
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    51,    45,     0,    17,    18,     8,    52,    53,
      10,    11,    15,    17,    20,    21,    22,    24,    25,    27,
      43,    44,    46,    52,    54,    55,    60,    61,    62,    68,
      69,    71,    73,    74,    75,    76,    78,     5,     5,    17,
      24,    73,    17,    38,    39,    40,    41,    42,    43,    44,
      77,    24,    25,    24,    24,    73,    54,     9,    54,    54,
      54,    54,    24,    70,    72,    54,     5,    26,    27,    28,
      29,    63,    64,    65,    73,    18,    24,    73,    17,    24,
      25,     5,    38,     5,     6,    54,    74,    74,    75,    75,
      18,    30,    31,    32,    33,    34,    35,    36,    37,    66,
      67,    18,     5,     6,    73,    73,    24,    52,    73,    73,
       8,    24,    71,    18,     5,     6,    56,    24,    72,    48,
      57,    58,    25,     9,    47,    57,    59,    49,    49,    54,
      54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    56,    55,    57,    57,    57,    58,    59,
      60,    61,    62,    62,    62,    63,    63,    63,    64,    65,
      66,    66,    67,    67,    67,    67,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    71,    72,    72,    73,    73,
      73,    74,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    76,    77,    77,    77,    77,    78,    78,    78,    78,
      78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     0,     3,     2,     2,     2,     2,
       2,     2,     0,     0,     8,     1,     2,     2,     4,     3,
       1,     5,     2,     2,     3,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     1,     5,     4,     5,     4,     3,     3,
       1,     3,     3,     1,     1,     1,     3,     1,     1,     3,
       3,     5,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 41 "AST.y" /* yacc.c:1646  */
    {(yyval.node) = make_leaf((yyvsp[-4].var_type)); (yyval.node)=make_node("Main",(yyvsp[-4].var_type),(yyvsp[0].node));printf("\n\nAbstract Syntax Tree:\n\n"); AST_print((yyval.node)); 																printf("\n\n");print_sym_tab(); YYACCEPT;}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);scope[scope_ind++]=0;}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 47 "AST.y" /* yacc.c:1646  */
    {scope_ctr++;scope[scope_ind++]=scope_ctr;}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Statement",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf("  ");}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "AST.y" /* yacc.c:1646  */
    {scope_ctr++;scope[scope_ind++]=scope_ctr;}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 60 "AST.y" /* yacc.c:1646  */
    {scope[scope_ind++]=0;(yyvsp[-5].text)=make_leaf((yyvsp[-5].text)); 																(yyval.node)=make_node("Switch",(yyvsp[-5].text),(yyvsp[-1].node));if(!look_up_sym_tab((yyvsp[-5].text))){printf("Undeclared variable %s\n", (yyvsp[-5].text)); YYERROR;}}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 64 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 65 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Cases",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Cases",(yyvsp[-1].node),(yyvsp[0].node));}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 69 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("Case",(yyvsp[-2].text),(yyvsp[0].node));}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-2].node)=make_leaf(" "); (yyval.node)=make_node("Default",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node("While",(yyvsp[-2].node),(yyvsp[0].node));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 81 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf("Continue");}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf("Break");}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 83 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-2].node)=make_leaf("Return");(yyval.node) = make_node("Statement",(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 86 "AST.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "AST.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 88 "AST.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 92 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 95 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 98 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 102 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 103 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 104 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 105 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "AST.y" /* yacc.c:1646  */
    {(yyval.text) = (yyvsp[0].text);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-2].var_type)=make_leaf((yyvsp[-2].var_type)); (yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_node("Variable_Declaration",(yyvsp[-2].var_type),(yyvsp[-1].text)); }
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-1].var_type)=make_leaf((yyvsp[-1].var_type)); (yyval.node)=make_node("Variable_Declaration",(yyvsp[-1].var_type),(yyvsp[0].node));}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 114 "AST.y" /* yacc.c:1646  */
    {(yyval.var_type) = (yyvsp[0].var_type);strcpy(typ,(yyvsp[0].var_type));}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 115 "AST.y" /* yacc.c:1646  */
    {(yyval.var_type) = (yyvsp[0].var_type);strcpy(typ,(yyvsp[0].var_type));}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 118 "AST.y" /* yacc.c:1646  */
    {(yyvsp[0].text)=make_leaf((yyvsp[0].text));(yyval.text)=make_node("Variable List",(yyvsp[-2].text),(yyvsp[0].text));if(look_up_sym_tab_dec((yyvsp[0].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } 
								if(scope[scope_ind-1]>0){update_sym_tab((yyvsp[-3].var_type),(yyvsp[0].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab((yyvsp[-3].var_type),(yyvsp[0].text),yylineno,scop);}}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 120 "AST.y" /* yacc.c:1646  */
    {(yyval.text)=make_leaf((yyvsp[0].text)); if(look_up_sym_tab_dec((yyvsp[0].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; }
	   					if(scope[scope_ind-1]>0){update_sym_tab((yyvsp[-1].var_type),(yyvsp[0].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab((yyvsp[-1].var_type),(yyvsp[0].text),yylineno,scop);}}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 124 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-4].text)=make_leaf((yyvsp[-4].text)); (yyval.node)=make_for_node((yyvsp[-3].text),(yyvsp[-4].text),(yyvsp[-2].node),make_leaf(","),(yyvsp[0].node)); if(!look_up_sym_tab((yyvsp[-4].text))){printf("Undeclared variable %s\n", (yyvsp[-4].text)); YYERROR;}}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-3].text)=make_leaf((yyvsp[-3].text)); (yyval.node)=make_node((yyvsp[-2].text),(yyvsp[-3].text),(yyvsp[-1].node)); if(!look_up_sym_tab((yyvsp[-3].text))){printf("Undeclared variable %s\n", (yyvsp[-3].text)); YYERROR;} 												}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-4].text)=make_leaf((yyvsp[-4].text));(yyval.node)=make_for_node((yyvsp[-3].text),(yyvsp[-4].text),(yyvsp[-2].node),make_leaf(","),(yyvsp[0].node)); if(look_up_sym_tab_dec((yyvsp[-4].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; }
if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-4].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab(typ,(yyvsp[-4].text),yylineno,scop);}}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 130 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-3].text)=make_leaf((yyvsp[-3].text));(yyval.node)=make_node((yyvsp[-2].text),(yyvsp[-3].text),(yyvsp[-1].node)); if(look_up_sym_tab_dec((yyvsp[-3].text),scope[scope_ind-1])){ yyerror("Redeclaration\n");  YYERROR; } if(scope[scope_ind-1]>0){update_sym_tab(typ,(yyvsp[-3].text),yylineno,scope[scope_ind-1]);}else{int scop=get_scope();update_sym_tab(typ,(yyvsp[-3].text),yylineno,scop);} }
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 138 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 139 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].node),(yyvsp[0].node));}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 140 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 143 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared Variable %s\n", (yyvsp[0].text)); YYERROR;} }
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 144 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[0].text));}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 145 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 146 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 147 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 150 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-2].text)=make_leaf((yyvsp[-2].text)); (yyvsp[0].text)=make_leaf((yyvsp[0].text)); (yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[-2].text))){printf("Undeclared variable %s\n", (yyvsp[-2].text)); YYERROR;}if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;}}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 151 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-2].text)=make_leaf((yyvsp[-2].text)); (yyvsp[0].text)=make_leaf((yyvsp[0].text)); (yyval.node)=make_node((yyvsp[-1].text),(yyvsp[-2].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[-2].text))){printf("Undeclared variable %s\n", (yyvsp[-2].text)); YYERROR;}}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 152 "AST.y" /* yacc.c:1646  */
    {(yyvsp[-4].text)=make_leaf((yyvsp[-4].text)); (yyval.node)=make_node((yyvsp[-3].text),(yyvsp[-4].text),(yyvsp[-1].node));}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 155 "AST.y" /* yacc.c:1646  */
    {(yyval.text)=(yyvsp[0].text);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 156 "AST.y" /* yacc.c:1646  */
    {(yyval.text)=(yyvsp[0].text);}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 157 "AST.y" /* yacc.c:1646  */
    {(yyval.text)=(yyvsp[0].text);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 158 "AST.y" /* yacc.c:1646  */
    {(yyval.text)=(yyvsp[0].text);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 161 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_leaf((yyvsp[0].text));(yyval.node)=make_node("temp",(yyvsp[-1].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;}}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 162 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_leaf((yyvsp[0].text));(yyval.node)=make_node("temp",(yyvsp[-1].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[-1].text))){printf("Undeclared variable %s\n", (yyvsp[-1].text)); YYERROR;}}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 163 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_leaf((yyvsp[0].text));(yyval.node)=make_node("temp",(yyvsp[-1].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[0].text))){printf("Undeclared variable %s\n", (yyvsp[0].text)); YYERROR;}}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 164 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_leaf((yyvsp[0].text));(yyval.node)=make_node("temp",(yyvsp[-1].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[-1].text))){printf("Undeclared variable %s\n", (yyvsp[-1].text)); YYERROR;}}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 165 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_leaf((yyvsp[0].text));(yyval.node)=make_node("temp",(yyvsp[-1].text),(yyvsp[0].text)); if(!look_up_sym_tab((yyvsp[-1].text))){printf("Undeclared variable %s\n", (yyvsp[-1].text)); YYERROR;}}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 166 "AST.y" /* yacc.c:1646  */
    {(yyval.node)=make_leaf((yyvsp[-1].text)); (yyval.node)=make_leaf((yyvsp[0].text));(yyval.node)=make_node("temp",(yyvsp[-1].text),(yyvsp[0].text));}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1955 "y.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 168 "AST.y" /* yacc.c:1906  */

void yyerror(const char* arg)
{
	printf("%s\n",arg);
}

struct entry
{
	char name[30];
	char type[10];
	int width;
	int line_num;
	int scope;
};




struct entry sym_tab[100];
int ctr = 0;

void update_sym_tab(char* typ, char* nam, int line, int scope)
{
	strcpy(sym_tab[ctr].name,nam);

	if(strcmp(typ,"int")==0)
	{
		strcpy(sym_tab[ctr].type,typ);
		sym_tab[ctr].width=4;
	}

	else if(strcmp(typ,"float")==0)
	{
		strcpy(sym_tab[ctr].type,typ);
		sym_tab[ctr].width=8;
	}
	else if(strcmp(typ,"char")==0)
	{
		strcpy(sym_tab[ctr].type,typ);
		sym_tab[ctr].width=1;	
	}
	sym_tab[ctr].line_num=line;
	sym_tab[ctr].scope=scope;
	ctr++;


}


void print_sym_tab()
 { 	
 		int i; 	
		printf("\n\nSymbol Table: \n"); 
		for(i=0;i<ctr;i++) 	
		{ 		
			printf("Token: %s, Type: %s, Size: %d, Line Number: %d, Scope: %d\n \n",sym_tab[i].name, sym_tab[i].type, sym_tab[i].width,sym_tab[i].line_num,sym_tab[i].scope); 	} 

}

int look_up_sym_tab(char* nam)
{
	int i; 
	for(i=0;i<ctr;i++)
	{
		if(strcmp(sym_tab[i].name,nam)==0)
		{
			int scop=sym_tab[i].scope;
			int flag=0;
			int zero_ctr=0;
			int j=scope_ind-1;
			while(j>=0)
			{
				if(scope[j]==0)
					zero_ctr++;
				else if(scope[j]!=0 && zero_ctr>0)
					zero_ctr--;
				else if(scope[j]!=0 && zero_ctr==0)
				{
					if(scope[j]==scop)
					{
						flag=1;
						return 1;
					}
				}
				j--;
			}
		}
	}
	return 0;
}

int look_up_sym_tab_dec(char* nam, int scop)
{
	int i; 
	for(i=0;i<ctr;i++)
	{
		if(strcmp(sym_tab[i].name,nam)==0 && sym_tab[i].scope==scop)
		{
			return 1;
		}
	}
	return 0;
}


void AST_print(struct AST *t)
{
	static int ctr=0;
	//printf("inside print tree\n");
	int i;
	if(t->NumChild==0) 
		return;

	struct AST *t2=t;
	printf("\nRoot: %s\n",t2->lexeme);
	printf("Children: ");
	for(i=0;i<t2->NumChild;++i) 
	{
		printf("%s ",t2->child[i]->lexeme);
	}
	printf("\n\n");	
	for(i=0;i<t2->NumChild;++i)
	{
		AST_print(t->child[i]);
	}


	
}




/*void AST_print(struct AST *t)
{
	static int ctr=0;
	//printf("inside print tree\n");
	int i;
	if(t->NumChild==0) 
		return;

	struct AST *t2=t;
	printf("\n[ %s ",t2->lexeme);
	
	for(i=0;i<t2->NumChild;++i) 
	{
		printf("%s ",t2->child[i]->lexeme);
	}
	printf("]");	
	for(i=0;i<t2->NumChild;++i)
	{
		AST_print(t->child[i]);
	}


	
}*/







struct AST* make_node(char* root, AST_node* child1, AST_node* child2)
{
	//printf("Creating new node\n");
	struct AST * node = (struct AST*)malloc(sizeof(struct AST));
	node->child = (struct AST**)malloc(2*sizeof(struct AST *));
	node->NumChild = 2;//
	strcpy(node->lexeme,root);
	//printf("Copied lexeme\n");
	//printf("%s\n",node->lexeme);
	node->child[0] = child1;
	node->child[1] = child2;
	return node;
}

struct AST* make_for_node(char* root, AST_node* child1, AST_node* child2, AST_node* child3, AST_node* child4)
{
	//printf("Creating new node\n");
	struct AST * node = (struct AST*)malloc(sizeof(struct AST));
	node->child = (struct AST**)malloc(4*sizeof(struct AST *));
	node->NumChild = 4;
	strcpy(node->lexeme,root);
	node->child[0] = child1;
	node->child[1] = child2;
	node->child[2] = child3;
	node->child[3] = child4;
	return node;
}


struct AST* make_leaf(char* root)
{
	//printf("Creating new leaf ");
	struct AST * node = (struct AST*)malloc(sizeof(struct AST));
	strcpy(node->lexeme,root);
	//printf("%s\n",node->lexeme);
	node->NumChild = 0;
	node->child = NULL;
	return node;
}



int main()
{
	printf("Parsing the following Input:\n\n");
	yyin=fopen("Input.txt","r");
	//print_sym_tab();
	//yylex();
	if(!yyparse())
	{
		printf("Success\n");

	}
	else
	{
		printf("Fail\n");
		print_sym_tab();
	}
	/*
	for(int i=0;i<scope_ind;i++)
		printf("%d ",scope[i]);
	printf("\n");
	*/
}

int get_scope()
{
	//printf("ind :%d\n",scope_ind);
	int i=scope_ind-1;
	int zero_ctr=0;
	int flag=1;
	while(flag && i>0)
	{
		if(scope[i]!=0)
			zero_ctr--;
		else
			zero_ctr++;
		if(zero_ctr==0)
		{
			i--;
			flag=0;
			break;
		}
		i--;
	}
	return scope[i];
}

