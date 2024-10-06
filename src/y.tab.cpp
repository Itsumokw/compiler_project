/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.yacc"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TeaplAst.h"

extern A_pos pos;
extern A_program root;

extern int yylex(void);
extern "C"{
    extern void yyerror(const char *s); 
    extern int yywrap();
}

#line 87 "y.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "y.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ADD = 3,                        /* ADD  */
  YYSYMBOL_SUB = 4,                        /* SUB  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_SEMICOLON = 7,                  /* SEMICOLON  */
  YYSYMBOL_LPAREN = 8,                     /* LPAREN  */
  YYSYMBOL_RPAREN = 9,                     /* RPAREN  */
  YYSYMBOL_LBRACKET = 10,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 11,                  /* RBRACKET  */
  YYSYMBOL_LBRACE = 12,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 13,                    /* RBRACE  */
  YYSYMBOL_COMMA = 14,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 15,                    /* ASSIGN  */
  YYSYMBOL_COLON = 16,                     /* COLON  */
  YYSYMBOL_DOT = 17,                       /* DOT  */
  YYSYMBOL_STRUCT = 18,                    /* STRUCT  */
  YYSYMBOL_LET = 19,                       /* LET  */
  YYSYMBOL_FN = 20,                        /* FN  */
  YYSYMBOL_ARROW = 21,                     /* ARROW  */
  YYSYMBOL_IF = 22,                        /* IF  */
  YYSYMBOL_ELSE = 23,                      /* ELSE  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_RET = 25,                       /* RET  */
  YYSYMBOL_CONTINUE = 26,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 27,                     /* BREAK  */
  YYSYMBOL_AND = 28,                       /* AND  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_GT = 31,                        /* GT  */
  YYSYMBOL_LT = 32,                        /* LT  */
  YYSYMBOL_GE = 33,                        /* GE  */
  YYSYMBOL_LE = 34,                        /* LE  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_NE = 36,                        /* NE  */
  YYSYMBOL_NUM = 37,                       /* NUM  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_UMINUS = 40,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Program = 42,                   /* Program  */
  YYSYMBOL_ProgramElementList = 43,        /* ProgramElementList  */
  YYSYMBOL_ProgramElement = 44,            /* ProgramElement  */
  YYSYMBOL_ArithExpr = 45,                 /* ArithExpr  */
  YYSYMBOL_ExprUnit = 46,                  /* ExprUnit  */
  YYSYMBOL_StructDef = 47,                 /* StructDef  */
  YYSYMBOL_VarDeclStmt = 48,               /* VarDeclStmt  */
  YYSYMBOL_VarDecl = 49,                   /* VarDecl  */
  YYSYMBOL_VarDeclList = 50,               /* VarDeclList  */
  YYSYMBOL_VarDef = 51,                    /* VarDef  */
  YYSYMBOL_RightValList = 52,              /* RightValList  */
  YYSYMBOL_RightVal = 53,                  /* RightVal  */
  YYSYMBOL_LeftVal = 54,                   /* LeftVal  */
  YYSYMBOL_FnDeclStmt = 55,                /* FnDeclStmt  */
  YYSYMBOL_FnDecl = 56,                    /* FnDecl  */
  YYSYMBOL_ParamDecl = 57,                 /* ParamDecl  */
  YYSYMBOL_FnDef = 58,                     /* FnDef  */
  YYSYMBOL_CodeBlock = 59,                 /* CodeBlock  */
  YYSYMBOL_StmtList = 60,                  /* StmtList  */
  YYSYMBOL_Stmt = 61,                      /* Stmt  */
  YYSYMBOL_AssignStmt = 62,                /* AssignStmt  */
  YYSYMBOL_CallStmt = 63,                  /* CallStmt  */
  YYSYMBOL_FnCall = 64,                    /* FnCall  */
  YYSYMBOL_BoolExpr = 65,                  /* BoolExpr  */
  YYSYMBOL_BoolUnit = 66,                  /* BoolUnit  */
  YYSYMBOL_BoolBiOp = 67,                  /* BoolBiOp  */
  YYSYMBOL_BoolUOp = 68,                   /* BoolUOp  */
  YYSYMBOL_ComOp = 69,                     /* ComOp  */
  YYSYMBOL_IfStmt = 70,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 71,                 /* WhileStmt  */
  YYSYMBOL_ReturnStmt = 72                 /* ReturnStmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   145,   145,   153,   158,   164,   168,   172,   176,   180,
     187,   192,   197,   202,   207,   214,   218,   222,   226,   230,
     236,   242,   250,   257,   261,   268,   273,   278,   283,   291,
     295,   300,   306,   311,   316,   321,   329,   333,   338,   344,
     351,   355,   361,   367,   375,   382,   386,   393,   400,   407,
     414,   417,   424,   428,   432,   436,   440,   444,   448,   452,
     456,   463,   470,   477,   484,   489,   496,   501,   505,   513,
     517,   524,   531,   535,   539,   543,   547,   551,   558,   562,
     569,   576,   580
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ADD", "SUB", "MUL",
  "DIV", "SEMICOLON", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE",
  "RBRACE", "COMMA", "ASSIGN", "COLON", "DOT", "STRUCT", "LET", "FN",
  "ARROW", "IF", "ELSE", "WHILE", "RET", "CONTINUE", "BREAK", "AND", "OR",
  "NOT", "GT", "LT", "GE", "LE", "EQ", "NE", "NUM", "ID", "TYPE", "UMINUS",
  "$accept", "Program", "ProgramElementList", "ProgramElement",
  "ArithExpr", "ExprUnit", "StructDef", "VarDeclStmt", "VarDecl",
  "VarDeclList", "VarDef", "RightValList", "RightVal", "LeftVal",
  "FnDeclStmt", "FnDecl", "ParamDecl", "FnDef", "CodeBlock", "StmtList",
  "Stmt", "AssignStmt", "CallStmt", "FnCall", "BoolExpr", "BoolUnit",
  "BoolBiOp", "BoolUOp", "ComOp", "IfStmt", "WhileStmt", "ReturnStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,  -119,   -24,    -4,    30,    80,  -119,     0,  -119,  -119,
    -119,    50,  -119,    77,    78,    71,    88,   105,  -119,  -119,
    -119,  -119,  -119,    82,    84,     9,    79,  -119,  -119,    82,
       2,     6,  -119,    18,   108,     9,  -119,    46,   100,  -119,
    -119,    38,  -119,   107,   109,   115,  -119,  -119,     3,     3,
       5,   118,   119,   120,  -119,    56,  -119,  -119,  -119,   122,
    -119,  -119,  -119,    90,    91,  -119,    82,    43,    81,     9,
       9,     9,     9,     9,    54,    93,     9,   111,    15,  -119,
      32,  -119,     3,    32,  -119,   126,  -119,  -119,    70,     9,
      96,  -119,   124,  -119,  -119,   125,    97,  -119,    68,  -119,
     104,   104,  -119,  -119,   127,   128,    62,  -119,   102,    15,
      65,    21,  -119,  -119,   117,     3,  -119,  -119,  -119,   131,
     132,   137,  -119,   129,     9,   133,  -119,     9,    64,    66,
    -119,    65,  -119,  -119,  -119,  -119,  -119,  -119,     9,  -119,
     134,    83,  -119,  -119,  -119,   110,   101,   135,  -119,   141,
    -119,  -119,  -119,     9,  -119,   103,  -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     9,     0,     0,     0,     0,     2,     4,     6,     5,
       7,     0,     8,     0,    27,     0,     0,     0,     1,     3,
      44,    50,    48,    31,     0,     0,     0,    23,    24,    31,
       0,    27,    29,     0,     0,     0,    15,    16,    39,    14,
      33,     0,    18,    25,    47,     0,    60,    49,     0,     0,
       0,     0,     0,    40,    52,     0,    51,    53,    54,     0,
      55,    56,    57,     0,     0,    22,     0,    28,     0,    38,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    71,
       0,    65,     0,     0,    82,     0,    58,    59,     0,     0,
       0,    62,     0,    25,    30,     0,     0,    17,     0,    36,
      10,    11,    12,    13,     0,     0,    21,    32,     0,     0,
       0,     0,    69,    70,    78,     0,    68,    80,    81,     0,
       0,     0,    43,    28,    38,    26,    63,     0,    20,    19,
      46,    14,    72,    73,    74,    75,    76,    77,     0,    67,
       0,    64,    42,    41,    61,     0,     0,     0,    37,     0,
      79,    26,    35,    38,    66,     0,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,   144,  -119,   -34,   -68,  -119,   123,     1,   130,
    -119,  -118,   -25,   136,  -119,  -119,  -119,  -119,   -75,  -119,
    -119,  -119,  -119,   138,   -46,    72,  -119,  -119,  -119,  -119,
    -119,  -119
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    38,    39,     8,     9,    32,    33,
      16,    98,    99,    41,    10,    11,    45,    12,    22,    30,
      56,    57,    58,    42,   111,    81,   115,    82,   138,    60,
      61,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    68,    80,    83,    15,   114,   146,     1,   117,    46,
     110,    78,    84,    35,    13,    47,    63,    35,     2,     3,
       4,     3,    64,   109,    48,    85,    49,    50,    51,    52,
     139,    65,    66,    79,    14,   155,   100,   101,   102,   103,
      53,   131,    36,    37,    21,    79,    36,    37,    74,   112,
     113,   107,    36,    37,    69,    75,   -40,    20,    95,    96,
     112,   113,    21,   -40,   121,   150,    88,    94,    17,   141,
     149,    89,   -43,    90,   -42,    68,   -41,   126,    27,   -43,
      18,   -42,   127,   -41,    70,    71,    72,    73,    24,    23,
      97,   104,   105,    25,    26,    28,   132,   133,   134,   135,
     136,   137,   148,    70,    71,    72,    73,   119,   120,    72,
      73,   112,   113,    29,   152,   127,   156,   127,    43,    67,
      31,    34,    76,    66,    77,    86,    87,    92,    69,    91,
      93,   106,   108,   118,   122,   123,   125,   124,   128,   129,
     140,   130,   142,   143,   144,   145,    21,   153,   147,   151,
     154,    19,     0,    54,   116,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,    55,     0,    59
};

static const yytype_int16 yycheck[] =
{
      25,    35,    48,    49,     3,    80,   124,     7,    83,     7,
      78,     8,     7,     8,    38,    13,    10,     8,    18,    19,
      20,    19,    16,     8,    22,    50,    24,    25,    26,    27,
       9,    13,    14,    30,    38,   153,    70,    71,    72,    73,
      38,   109,    37,    38,    12,    30,    37,    38,    10,    28,
      29,    76,    37,    38,     8,    17,    10,     7,    15,    16,
      28,    29,    12,    17,    89,   140,    10,    66,    38,   115,
     138,    15,    10,    17,    10,   109,    10,     9,     7,    17,
       0,    17,    14,    17,     3,     4,     5,     6,    10,    12,
       9,    37,    38,    15,    16,     7,    31,    32,    33,    34,
      35,    36,   127,     3,     4,     5,     6,    37,    38,     5,
       6,    28,    29,     8,    13,    14,    13,    14,    39,    11,
      38,    37,    15,    14,     9,     7,     7,    37,     8,     7,
      39,    38,    21,     7,    38,    11,    39,    12,    11,    11,
      23,    39,    11,    11,     7,    16,    12,    12,    15,    39,
       9,     7,    -1,    30,    82,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    18,    19,    20,    42,    43,    44,    47,    48,
      55,    56,    58,    38,    38,    49,    51,    38,     0,    43,
       7,    12,    59,    12,    10,    15,    16,     7,     7,     8,
      60,    38,    49,    50,    37,     8,    37,    38,    45,    46,
      53,    54,    64,    39,    50,    57,     7,    13,    22,    24,
      25,    26,    27,    38,    48,    54,    61,    62,    63,    64,
      70,    71,    72,    10,    16,    13,    14,    11,    45,     8,
       3,     4,     5,     6,    10,    17,    15,     9,     8,    30,
      65,    66,    68,    65,     7,    53,     7,     7,    10,    15,
      17,     7,    37,    39,    49,    15,    16,     9,    52,    53,
      45,    45,    45,    45,    37,    38,    38,    53,    21,     8,
      46,    65,    28,    29,    59,    67,    66,    59,     7,    37,
      38,    53,    38,    11,    12,    39,     9,    14,    11,    11,
      39,    46,    31,    32,    33,    34,    35,    36,    69,     9,
      23,    65,    11,    11,     7,    16,    52,    15,    53,    46,
      59,    39,    13,    12,     9,    52,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    45,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    47,    48,    48,    49,    49,    49,    49,    50,
      50,    50,    51,    51,    51,    51,    52,    52,    52,    53,
      54,    54,    54,    54,    55,    56,    56,    57,    58,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    63,    64,    65,    65,    66,    66,    66,    67,
      67,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     1,     1,     1,     3,     1,     4,
       4,     3,     5,     3,     3,     3,     6,     1,     4,     1,
       3,     0,     5,     3,    10,     8,     1,     3,     0,     1,
       1,     4,     4,     3,     2,     5,     7,     1,     2,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     4,     2,     4,     3,     1,     5,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* Program: ProgramElementList  */
#line 146 "parser.yacc"
    {  
      root = A_Program((yyvsp[0].programElementList));
      (yyval.program) = root;
    }
#line 1255 "y.tab.cpp"
    break;

  case 3: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 154 "parser.yacc"
    {
      (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement), (yyvsp[0].programElementList));
    }
#line 1263 "y.tab.cpp"
    break;

  case 4: /* ProgramElementList: %empty  */
#line 158 "parser.yacc"
    {
      (yyval.programElementList) = NULL;
    }
#line 1271 "y.tab.cpp"
    break;

  case 5: /* ProgramElement: VarDeclStmt  */
#line 165 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
    }
#line 1279 "y.tab.cpp"
    break;

  case 6: /* ProgramElement: StructDef  */
#line 169 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
    }
#line 1287 "y.tab.cpp"
    break;

  case 7: /* ProgramElement: FnDeclStmt  */
#line 173 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
    }
#line 1295 "y.tab.cpp"
    break;

  case 8: /* ProgramElement: FnDef  */
#line 177 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
    }
#line 1303 "y.tab.cpp"
    break;

  case 9: /* ProgramElement: SEMICOLON  */
#line 181 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
    }
#line 1311 "y.tab.cpp"
    break;

  case 10: /* ArithExpr: ArithExpr ADD ArithExpr  */
#line 188 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_add, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1320 "y.tab.cpp"
    break;

  case 11: /* ArithExpr: ArithExpr SUB ArithExpr  */
#line 193 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_sub, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1329 "y.tab.cpp"
    break;

  case 12: /* ArithExpr: ArithExpr MUL ArithExpr  */
#line 198 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_mul, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1338 "y.tab.cpp"
    break;

  case 13: /* ArithExpr: ArithExpr DIV ArithExpr  */
#line 203 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_div, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1347 "y.tab.cpp"
    break;

  case 14: /* ArithExpr: ExprUnit  */
#line 208 "parser.yacc"
    {
      (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos, (yyvsp[0].exprUnit));
    }
#line 1355 "y.tab.cpp"
    break;

  case 15: /* ExprUnit: NUM  */
#line 215 "parser.yacc"
    {
      (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos, (yyvsp[0].tokenNum)->num);
    }
#line 1363 "y.tab.cpp"
    break;

  case 16: /* ExprUnit: ID  */
#line 219 "parser.yacc"
    {
      (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
    }
#line 1371 "y.tab.cpp"
    break;

  case 17: /* ExprUnit: LPAREN ArithExpr RPAREN  */
#line 223 "parser.yacc"
    {
      (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos), (yyvsp[-1].arithExpr));
    }
#line 1379 "y.tab.cpp"
    break;

  case 18: /* ExprUnit: FnCall  */
#line 227 "parser.yacc"
    {
      (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos, (yyvsp[0].fnCall));
    }
#line 1387 "y.tab.cpp"
    break;

  case 19: /* ExprUnit: LeftVal LBRACKET ID RBRACKET  */
#line 231 "parser.yacc"
    {
      A_indexExpr idx = A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id);
      A_arrayExpr arrayExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[-2].pos), arrayExpr);
    }
#line 1397 "y.tab.cpp"
    break;

  case 20: /* ExprUnit: LeftVal LBRACKET NUM RBRACKET  */
#line 237 "parser.yacc"
    {
      A_indexExpr idx = A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num);
      A_arrayExpr arrayExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[-2].pos), arrayExpr);
    }
#line 1407 "y.tab.cpp"
    break;

  case 21: /* ExprUnit: LeftVal DOT ID  */
#line 243 "parser.yacc"
    {
      A_memberExpr memberExpr = A_MemberExpr((yyvsp[-1].pos), (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id);
      (yyval.exprUnit) = A_MemberExprUnit((yyvsp[-1].pos), memberExpr);
    }
#line 1416 "y.tab.cpp"
    break;

  case 22: /* StructDef: STRUCT ID LBRACE VarDeclList RBRACE  */
#line 251 "parser.yacc"
    {
      (yyval.structDef) = A_StructDef((yyvsp[-4].pos)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].varDeclList));
    }
#line 1424 "y.tab.cpp"
    break;

  case 23: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 258 "parser.yacc"
    {
      (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos)->pos, (yyvsp[-1].varDecl));
    }
#line 1432 "y.tab.cpp"
    break;

  case 24: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 262 "parser.yacc"
    {
      (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos)->pos, (yyvsp[-1].varDef));
    }
#line 1440 "y.tab.cpp"
    break;

  case 25: /* VarDecl: ID COLON TYPE  */
#line 269 "parser.yacc"
    {
      A_varDeclScalar declScalar = A_VarDeclScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, (yyvsp[0].type));
      (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[-2].tokenId)->pos, declScalar);
    }
#line 1449 "y.tab.cpp"
    break;

  case 26: /* VarDecl: ID LBRACKET NUM RBRACKET COLON TYPE  */
#line 274 "parser.yacc"
    {
      A_varDeclArray declArray = A_VarDeclArray((yyvsp[-5].tokenId)->pos, (yyvsp[-5].tokenId)->id, (yyvsp[-3].tokenNum)->num, (yyvsp[0].type));
      (yyval.varDecl) = A_VarDecl_Array((yyvsp[-5].tokenId)->pos, declArray);
    }
#line 1458 "y.tab.cpp"
    break;

  case 27: /* VarDecl: ID  */
#line 279 "parser.yacc"
    {
      A_varDeclScalar declScalar = A_VarDeclScalar((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id, NULL);
      (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].tokenId)->pos, declScalar);
    }
#line 1467 "y.tab.cpp"
    break;

  case 28: /* VarDecl: ID LBRACKET NUM RBRACKET  */
#line 284 "parser.yacc"
    {
      A_varDeclArray declArray = A_VarDeclArray((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].tokenNum)->num, NULL);
      (yyval.varDecl) = A_VarDecl_Array((yyvsp[-3].tokenId)->pos, declArray);
    }
#line 1476 "y.tab.cpp"
    break;

  case 29: /* VarDeclList: VarDecl  */
#line 292 "parser.yacc"
    {
      (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl), NULL);
    }
#line 1484 "y.tab.cpp"
    break;

  case 30: /* VarDeclList: VarDeclList COMMA VarDecl  */
#line 296 "parser.yacc"
    {
      (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl), (yyvsp[-2].varDeclList));
    }
#line 1492 "y.tab.cpp"
    break;

  case 31: /* VarDeclList: %empty  */
#line 300 "parser.yacc"
    {
      (yyval.varDeclList) = NULL;
    }
#line 1500 "y.tab.cpp"
    break;

  case 32: /* VarDef: ID COLON TYPE ASSIGN RightVal  */
#line 307 "parser.yacc"
    {
      A_varDefScalar defScalar = A_VarDefScalar((yyvsp[-4].tokenId)->pos, (yyvsp[-4].tokenId)->id, (yyvsp[-2].type), (yyvsp[0].rightVal));
      (yyval.varDef) = A_VarDef_Scalar((yyvsp[-4].tokenId)->pos, defScalar);
    }
#line 1509 "y.tab.cpp"
    break;

  case 33: /* VarDef: ID ASSIGN RightVal  */
#line 312 "parser.yacc"
    {
      A_varDefScalar defScalar = A_VarDefScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, NULL, (yyvsp[0].rightVal));
      (yyval.varDef) = A_VarDef_Scalar((yyvsp[-2].tokenId)->pos, defScalar);
    }
#line 1518 "y.tab.cpp"
    break;

  case 34: /* VarDef: ID LBRACKET NUM RBRACKET COLON TYPE ASSIGN LBRACE RightValList RBRACE  */
#line 317 "parser.yacc"
    {
      A_varDefArray defArray = A_VarDefArray((yyvsp[-9].tokenId)->pos, (yyvsp[-9].tokenId)->id, (yyvsp[-7].tokenNum)->num, (yyvsp[-4].type), (yyvsp[-1].rightValList));
      (yyval.varDef) = A_VarDef_Array((yyvsp[-9].tokenId)->pos, defArray);
    }
#line 1527 "y.tab.cpp"
    break;

  case 35: /* VarDef: ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightValList RBRACE  */
#line 322 "parser.yacc"
    {
      A_varDefArray defArray = A_VarDefArray((yyvsp[-7].tokenId)->pos, (yyvsp[-7].tokenId)->id, (yyvsp[-5].tokenNum)->num, NULL, (yyvsp[-1].rightValList));
      (yyval.varDef) = A_VarDef_Array((yyvsp[-7].tokenId)->pos, defArray);
    }
#line 1536 "y.tab.cpp"
    break;

  case 36: /* RightValList: RightVal  */
#line 330 "parser.yacc"
    {
      (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal), NULL);
    }
#line 1544 "y.tab.cpp"
    break;

  case 37: /* RightValList: RightValList COMMA RightVal  */
#line 334 "parser.yacc"
    {
      (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal), (yyvsp[-2].rightValList));
    }
#line 1552 "y.tab.cpp"
    break;

  case 38: /* RightValList: %empty  */
#line 338 "parser.yacc"
    {
      (yyval.rightValList) = NULL;
    }
#line 1560 "y.tab.cpp"
    break;

  case 39: /* RightVal: ArithExpr  */
#line 345 "parser.yacc"
    {
      (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos, (yyvsp[0].arithExpr));
    }
#line 1568 "y.tab.cpp"
    break;

  case 40: /* LeftVal: ID  */
#line 352 "parser.yacc"
    {
      (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
    }
#line 1576 "y.tab.cpp"
    break;

  case 41: /* LeftVal: LeftVal LBRACKET ID RBRACKET  */
#line 356 "parser.yacc"
    {
      A_indexExpr idx = A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id);
      A_arrayExpr arrExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.leftVal) = A_ArrExprLVal((yyvsp[-2].pos), arrExpr);
    }
#line 1586 "y.tab.cpp"
    break;

  case 42: /* LeftVal: LeftVal LBRACKET NUM RBRACKET  */
#line 362 "parser.yacc"
    {
      A_indexExpr idx = A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num);
      A_arrayExpr arrExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.leftVal) = A_ArrExprLVal((yyvsp[-2].pos), arrExpr);
    }
#line 1596 "y.tab.cpp"
    break;

  case 43: /* LeftVal: LeftVal DOT ID  */
#line 368 "parser.yacc"
    {
      A_memberExpr memberExpr = A_MemberExpr((yyvsp[-1].pos), (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id);
      (yyval.leftVal) = A_MemberExprLVal((yyvsp[-1].pos), memberExpr);
    }
#line 1605 "y.tab.cpp"
    break;

  case 44: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 376 "parser.yacc"
    {
      (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl));
    }
#line 1613 "y.tab.cpp"
    break;

  case 45: /* FnDecl: FN ID LPAREN ParamDecl RPAREN  */
#line 383 "parser.yacc"
    {
      (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].paramDecl), NULL);
    }
#line 1621 "y.tab.cpp"
    break;

  case 46: /* FnDecl: FN ID LPAREN ParamDecl RPAREN ARROW TYPE  */
#line 387 "parser.yacc"
    {
      (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos)->pos, (yyvsp[-5].tokenId)->id, (yyvsp[-3].paramDecl), (yyvsp[0].type));
    }
#line 1629 "y.tab.cpp"
    break;

  case 47: /* ParamDecl: VarDeclList  */
#line 394 "parser.yacc"
    {
      (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
    }
#line 1637 "y.tab.cpp"
    break;

  case 48: /* FnDef: FnDecl CodeBlock  */
#line 401 "parser.yacc"
    {
      (yyval.fnDef) = A_FnDef((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl), (yyvsp[0].codeBlockStmtList));
    }
#line 1645 "y.tab.cpp"
    break;

  case 49: /* CodeBlock: LBRACE StmtList RBRACE  */
#line 408 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = (yyvsp[-1].codeBlockStmtList);
    }
#line 1653 "y.tab.cpp"
    break;

  case 50: /* StmtList: %empty  */
#line 414 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = nullptr;
    }
#line 1661 "y.tab.cpp"
    break;

  case 51: /* StmtList: StmtList Stmt  */
#line 418 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[0].codeBlockStmt), (yyvsp[-1].codeBlockStmtList));
    }
#line 1669 "y.tab.cpp"
    break;

  case 52: /* Stmt: VarDeclStmt  */
#line 425 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
    }
#line 1677 "y.tab.cpp"
    break;

  case 53: /* Stmt: AssignStmt  */
#line 429 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos, (yyvsp[0].assignStmt));
    }
#line 1685 "y.tab.cpp"
    break;

  case 54: /* Stmt: CallStmt  */
#line 433 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos, (yyvsp[0].callStmt));
    }
#line 1693 "y.tab.cpp"
    break;

  case 55: /* Stmt: IfStmt  */
#line 437 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos, (yyvsp[0].ifStmt));
    }
#line 1701 "y.tab.cpp"
    break;

  case 56: /* Stmt: WhileStmt  */
#line 441 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos, (yyvsp[0].whileStmt));
    }
#line 1709 "y.tab.cpp"
    break;

  case 57: /* Stmt: ReturnStmt  */
#line 445 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos, (yyvsp[0].returnStmt));
    }
#line 1717 "y.tab.cpp"
    break;

  case 58: /* Stmt: CONTINUE SEMICOLON  */
#line 449 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos)->pos);
    }
#line 1725 "y.tab.cpp"
    break;

  case 59: /* Stmt: BREAK SEMICOLON  */
#line 453 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos)->pos);
    }
#line 1733 "y.tab.cpp"
    break;

  case 60: /* Stmt: SEMICOLON  */
#line 457 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
    }
#line 1741 "y.tab.cpp"
    break;

  case 61: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 464 "parser.yacc"
    {
      (yyval.assignStmt) = A_AssignStmt((yyvsp[-2].pos)->pos, (yyvsp[-3].leftVal), (yyvsp[-1].rightVal));
    }
#line 1749 "y.tab.cpp"
    break;

  case 62: /* CallStmt: FnCall SEMICOLON  */
#line 471 "parser.yacc"
    {
      (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos, (yyvsp[-1].fnCall));
    }
#line 1757 "y.tab.cpp"
    break;

  case 63: /* FnCall: ID LPAREN RightValList RPAREN  */
#line 478 "parser.yacc"
    {
      (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].rightValList));
    }
#line 1765 "y.tab.cpp"
    break;

  case 64: /* BoolExpr: BoolExpr BoolBiOp BoolExpr  */
#line 485 "parser.yacc"
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr((yyvsp[-1].boolBiOp), (yyvsp[-1].boolBiOp), (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr));
      (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-1].boolBiOp), boolBiOpExpr);
    }
#line 1774 "y.tab.cpp"
    break;

  case 65: /* BoolExpr: BoolUnit  */
#line 490 "parser.yacc"
    {
      (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos, (yyvsp[0].boolUnit));
    }
#line 1782 "y.tab.cpp"
    break;

  case 66: /* BoolUnit: LPAREN ExprUnit ComOp ExprUnit RPAREN  */
#line 497 "parser.yacc"
    {
      A_comExpr comExpr = A_ComExpr((yyvsp[-2].comOp), (yyvsp[-2].comOp), (yyvsp[-3].exprUnit), (yyvsp[-1].exprUnit));
      (yyval.boolUnit) = A_ComExprUnit((yyvsp[-2].comOp), comExpr);
    }
#line 1791 "y.tab.cpp"
    break;

  case 67: /* BoolUnit: LPAREN BoolExpr RPAREN  */
#line 502 "parser.yacc"
    {
      (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos)->pos, (yyvsp[-1].boolExpr));
    }
#line 1799 "y.tab.cpp"
    break;

  case 68: /* BoolUnit: BoolUOp BoolUnit  */
#line 506 "parser.yacc"
    {
      A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr((yyvsp[-1].boolUOp), (yyvsp[-1].boolUOp), (yyvsp[0].boolUnit));
      (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[-1].boolUOp), boolUOpExpr);
    }
#line 1808 "y.tab.cpp"
    break;

  case 69: /* BoolBiOp: AND  */
#line 514 "parser.yacc"
    {
      (yyval.boolBiOp) = A_and;
    }
#line 1816 "y.tab.cpp"
    break;

  case 70: /* BoolBiOp: OR  */
#line 518 "parser.yacc"
    {
      (yyval.boolBiOp) = A_or;
    }
#line 1824 "y.tab.cpp"
    break;

  case 71: /* BoolUOp: NOT  */
#line 525 "parser.yacc"
    {
      (yyval.boolUOp) = A_not;
    }
#line 1832 "y.tab.cpp"
    break;

  case 72: /* ComOp: GT  */
#line 532 "parser.yacc"
    {
      (yyval.comOp) = A_gt;
    }
#line 1840 "y.tab.cpp"
    break;

  case 73: /* ComOp: LT  */
#line 536 "parser.yacc"
    {
      (yyval.comOp) = A_lt;
    }
#line 1848 "y.tab.cpp"
    break;

  case 74: /* ComOp: GE  */
#line 540 "parser.yacc"
    {
      (yyval.comOp) = A_ge;
    }
#line 1856 "y.tab.cpp"
    break;

  case 75: /* ComOp: LE  */
#line 544 "parser.yacc"
    {
      (yyval.comOp) = A_le;
    }
#line 1864 "y.tab.cpp"
    break;

  case 76: /* ComOp: EQ  */
#line 548 "parser.yacc"
    {
      (yyval.comOp) = A_eq;
    }
#line 1872 "y.tab.cpp"
    break;

  case 77: /* ComOp: NE  */
#line 552 "parser.yacc"
    {
      (yyval.comOp) = A_ne;
    }
#line 1880 "y.tab.cpp"
    break;

  case 78: /* IfStmt: IF BoolExpr CodeBlock  */
#line 559 "parser.yacc"
    {
      (yyval.ifStmt) = A_IfStmt((yyvsp[-2].pos)->pos, (yyvsp[-1].boolExpr), (yyvsp[0].codeBlockStmtList), NULL);
    }
#line 1888 "y.tab.cpp"
    break;

  case 79: /* IfStmt: IF BoolExpr CodeBlock ELSE CodeBlock  */
#line 563 "parser.yacc"
    {
      (yyval.ifStmt) = A_IfStmt((yyvsp[-4].pos)->pos, (yyvsp[-3].boolExpr), (yyvsp[-2].codeBlockStmtList), (yyvsp[0].codeBlockStmtList));
    }
#line 1896 "y.tab.cpp"
    break;

  case 80: /* WhileStmt: WHILE BoolExpr CodeBlock  */
#line 570 "parser.yacc"
    {
      (yyval.whileStmt) = A_WhileStmt((yyvsp[-2].pos)->pos, (yyvsp[-1].boolExpr), (yyvsp[0].codeBlockStmtList)); 
    }
#line 1904 "y.tab.cpp"
    break;

  case 81: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 577 "parser.yacc"
    {
      (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos)->pos, (yyvsp[-1].rightVal));
    }
#line 1912 "y.tab.cpp"
    break;

  case 82: /* ReturnStmt: RET SEMICOLON  */
#line 581 "parser.yacc"
    {
      (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos)->pos, NULL);
    }
#line 1920 "y.tab.cpp"
    break;


#line 1924 "y.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 586 "parser.yacc"

    
extern "C"{
void yyerror(const char * s)
{
  fprintf(stderr, "%s\n",s);
}
int yywrap()
{
  return(1);
}
}
