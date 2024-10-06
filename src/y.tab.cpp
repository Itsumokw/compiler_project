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
extern int yydebug;

extern int yylex(void);
extern "C"{
    extern void yyerror(const char *s); 
    extern int yywrap();
}

#line 88 "y.tab.cpp"

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
  YYSYMBOL_NEG = 37,                       /* NEG  */
  YYSYMBOL_NUM = 38,                       /* NUM  */
  YYSYMBOL_ID = 39,                        /* ID  */
  YYSYMBOL_TYPE = 40,                      /* TYPE  */
  YYSYMBOL_YYACCEPT = 41,                  /* $accept  */
  YYSYMBOL_Program = 42,                   /* Program  */
  YYSYMBOL_ProgramElementList = 43,        /* ProgramElementList  */
  YYSYMBOL_ProgramElement = 44,            /* ProgramElement  */
  YYSYMBOL_Type = 45,                      /* Type  */
  YYSYMBOL_ArithExpr = 46,                 /* ArithExpr  */
  YYSYMBOL_ExprUnit = 47,                  /* ExprUnit  */
  YYSYMBOL_StructDef = 48,                 /* StructDef  */
  YYSYMBOL_VarDeclStmt = 49,               /* VarDeclStmt  */
  YYSYMBOL_VarDecl = 50,                   /* VarDecl  */
  YYSYMBOL_VarDeclList = 51,               /* VarDeclList  */
  YYSYMBOL_VarDef = 52,                    /* VarDef  */
  YYSYMBOL_RightValList = 53,              /* RightValList  */
  YYSYMBOL_RightVal = 54,                  /* RightVal  */
  YYSYMBOL_LeftVal = 55,                   /* LeftVal  */
  YYSYMBOL_FnDeclStmt = 56,                /* FnDeclStmt  */
  YYSYMBOL_FnDecl = 57,                    /* FnDecl  */
  YYSYMBOL_ParamDecl = 58,                 /* ParamDecl  */
  YYSYMBOL_FnDef = 59,                     /* FnDef  */
  YYSYMBOL_CodeBlock = 60,                 /* CodeBlock  */
  YYSYMBOL_StmtList = 61,                  /* StmtList  */
  YYSYMBOL_Stmt = 62,                      /* Stmt  */
  YYSYMBOL_AssignStmt = 63,                /* AssignStmt  */
  YYSYMBOL_CallStmt = 64,                  /* CallStmt  */
  YYSYMBOL_FnCall = 65,                    /* FnCall  */
  YYSYMBOL_BoolExpr = 66,                  /* BoolExpr  */
  YYSYMBOL_BoolUnit = 67,                  /* BoolUnit  */
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
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

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
       0,   150,   150,   158,   163,   169,   173,   177,   181,   185,
     192,   197,   206,   211,   216,   221,   226,   234,   238,   242,
     246,   250,   256,   262,   267,   280,   287,   291,   298,   303,
     308,   313,   321,   325,   330,   336,   341,   346,   351,   359,
     363,   368,   374,   381,   385,   391,   397,   405,   412,   416,
     423,   430,   440,   447,   450,   457,   461,   465,   469,   473,
     477,   481,   485,   489,   496,   503,   510,   517,   522,   527,
     534,   539,   543,   562,   569,   573,   577,   581,   585,   589,
     596,   600,   607,   614,   618
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
  "NOT", "GT", "LT", "GE", "LE", "EQ", "NE", "NEG", "NUM", "ID", "TYPE",
  "$accept", "Program", "ProgramElementList", "ProgramElement", "Type",
  "ArithExpr", "ExprUnit", "StructDef", "VarDeclStmt", "VarDecl",
  "VarDeclList", "VarDef", "RightValList", "RightVal", "LeftVal",
  "FnDeclStmt", "FnDecl", "ParamDecl", "FnDef", "CodeBlock", "StmtList",
  "Stmt", "AssignStmt", "CallStmt", "FnCall", "BoolExpr", "BoolUnit",
  "BoolUOp", "ComOp", "IfStmt", "WhileStmt", "ReturnStmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-121)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      47,  -121,   -30,   -14,    -6,    58,  -121,    47,  -121,  -121,
    -121,    99,  -121,    62,    26,    70,    80,    87,  -121,  -121,
    -121,    57,  -121,    60,    59,    18,    21,  -121,  -121,    60,
    -121,   106,   106,    13,   116,   117,   118,  -121,    53,   112,
      57,  -121,  -121,   120,  -121,  -121,  -121,    82,   115,   119,
     122,    18,    18,  -121,    22,   104,  -121,  -121,    14,  -121,
    -121,  -121,   113,  -121,   121,     7,   123,   123,  -121,   124,
    -121,  -121,    18,    74,    18,    95,  -121,  -121,  -121,    98,
      21,    60,  -121,   100,  -121,    85,    18,    18,    18,    18,
      79,   101,    18,   125,     7,  -121,    69,    -1,  -121,   106,
     126,  -121,  -121,   128,   127,   131,   132,   137,  -121,   134,
    -121,  -121,   135,    21,  -121,   114,   114,  -121,  -121,   139,
     140,    52,  -121,    21,    69,  -121,  -121,  -121,  -121,  -121,
    -121,    18,  -121,   106,   106,   129,   123,  -121,    18,  -121,
    -121,  -121,   136,    18,   133,    68,    76,  -121,   130,  -121,
     138,  -121,  -121,  -121,    21,   141,   143,  -121,  -121,  -121,
      18,   144,  -121
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     9,     0,     0,     0,     0,     2,     4,     6,     5,
       7,     0,     8,     0,    31,     0,     0,     0,     1,     3,
      47,    53,    51,    34,     0,     0,     0,    26,    27,    34,
      63,     0,     0,     0,     0,     0,    43,    55,     0,     0,
      53,    56,    57,     0,    58,    59,    60,    31,    32,     0,
       0,     0,     0,    17,    18,    42,    16,    38,     0,    20,
      11,    10,    29,    50,     0,     0,     0,     0,    84,     0,
      61,    62,    41,     0,     0,     0,    52,    54,    65,     0,
       0,    34,    25,    30,    24,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    73,     0,     0,    69,     0,
      80,    82,    83,     0,    39,     0,     0,     0,    46,     0,
      29,    33,     0,     0,    19,    12,    13,    14,    15,     0,
       0,    23,    37,     0,    16,    74,    75,    76,    77,    78,
      79,     0,    71,     0,     0,     0,     0,    66,    41,    45,
      44,    64,    30,    41,    28,    22,    21,    48,     0,    67,
      68,    72,    81,    40,     0,     0,     0,    70,    28,    36,
      41,     0,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,   146,  -121,   -79,   -39,   -51,  -121,   -11,   153,
     -22,  -121,  -120,   -21,    -5,  -121,  -121,  -121,  -121,   -64,
     142,  -121,  -121,  -121,    -2,   -12,   -26,  -121,  -121,  -121,
    -121,  -121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    62,    55,    56,     8,     9,    48,
      49,    16,   103,   104,    58,    10,    11,    64,    12,    22,
      39,    40,    41,    42,    59,    97,    98,    99,   131,    44,
      45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   110,   100,   101,    57,    66,    67,    63,   132,    13,
      37,    51,    69,    85,    96,    94,    38,    51,   153,    43,
      68,    52,    51,   155,    90,    14,    52,   133,   134,    37,
      72,    91,   -43,    17,   144,    38,    24,    95,    43,   -43,
     161,    25,    26,   124,   147,    53,    54,   115,   116,   117,
     118,    53,    54,   107,     1,    85,    53,    54,    18,   111,
      60,    61,   -46,    73,    30,     2,     3,     4,    74,   -46,
      75,   122,   152,   135,    23,   158,     3,    27,   -45,    31,
     148,    32,    33,    34,    35,   -45,   -44,    28,    86,    87,
      88,    89,    79,   -44,   114,    29,    36,    50,    80,    47,
     125,   126,   127,   128,   129,   130,    20,    86,    87,    88,
      89,    21,   105,   106,    65,   112,   113,   119,   120,    88,
      89,   149,   150,    70,    71,    76,    72,    78,    92,    81,
      93,   102,    82,    83,   108,    21,   109,   137,   151,   157,
     121,   138,   139,   140,   141,   142,   123,   143,   156,   136,
     145,   146,   154,    19,   159,   160,    15,   162,     0,     0,
       0,     0,     0,     0,     0,     0,   133,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      51,    80,    66,    67,    25,    31,    32,    29,     9,    39,
      21,     4,    33,    52,    65,     8,    21,     4,   138,    21,
       7,     8,     4,   143,    10,    39,     8,    28,    29,    40,
       8,    17,    10,    39,   113,    40,    10,    30,    40,    17,
     160,    15,    16,    94,   123,    38,    39,    86,    87,    88,
      89,    38,    39,    74,     7,    94,    38,    39,     0,    81,
      39,    40,    10,    10,     7,    18,    19,    20,    15,    17,
      17,    92,   136,    99,    12,   154,    19,     7,    10,    22,
     131,    24,    25,    26,    27,    17,    10,     7,     3,     4,
       5,     6,    10,    17,     9,     8,    39,    38,    16,    39,
      31,    32,    33,    34,    35,    36,     7,     3,     4,     5,
       6,    12,    38,    39,     8,    15,    16,    38,    39,     5,
       6,   133,   134,     7,     7,    13,     8,     7,    15,    14,
       9,     7,    13,    11,    39,    12,    38,     9,     9,     9,
      39,    14,    11,    11,     7,    11,    21,    12,    15,    23,
      11,    11,    16,     7,    13,    12,     3,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,    18,    19,    20,    42,    43,    44,    48,    49,
      56,    57,    59,    39,    39,    50,    52,    39,     0,    43,
       7,    12,    60,    12,    10,    15,    16,     7,     7,     8,
       7,    22,    24,    25,    26,    27,    39,    49,    55,    61,
      62,    63,    64,    65,    70,    71,    72,    39,    50,    51,
      38,     4,     8,    38,    39,    46,    47,    54,    55,    65,
      39,    40,    45,    51,    58,     8,    67,    67,     7,    54,
       7,     7,     8,    10,    15,    17,    13,    61,     7,    10,
      16,    14,    13,    11,    47,    46,     3,     4,     5,     6,
      10,    17,    15,     9,     8,    30,    47,    66,    67,    68,
      60,    60,     7,    53,    54,    38,    39,    54,    39,    38,
      45,    51,    15,    16,     9,    46,    46,    46,    46,    38,
      39,    39,    54,    21,    47,    31,    32,    33,    34,    35,
      36,    69,     9,    28,    29,    67,    23,     9,    14,    11,
      11,     7,    11,    12,    45,    11,    11,    45,    47,    66,
      66,     9,    60,    53,    16,    53,    15,     9,    45,    13,
      12,    53,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    46,    46,    46,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    49,    49,    50,    50,
      50,    50,    51,    51,    51,    52,    52,    52,    52,    53,
      53,    53,    54,    55,    55,    55,    55,    56,    57,    57,
      58,    59,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    63,    64,    65,    66,    66,    66,
      67,    67,    67,    68,    69,    69,    69,    69,    69,    69,
      70,    70,    71,    72,    72
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     1,     1,     1,     3,
       1,     4,     4,     3,     2,     5,     3,     3,     6,     3,
       4,     1,     1,     3,     0,    10,     8,     5,     3,     1,
       3,     0,     1,     1,     4,     4,     3,     2,     7,     5,
       1,     2,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     4,     2,     4,     3,     3,     1,
       5,     3,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     3,     3,     2
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
#line 151 "parser.yacc"
    {  
      root = A_Program((yyvsp[0].programElementList));
      (yyval.program) = root;
    }
#line 1263 "y.tab.cpp"
    break;

  case 3: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 159 "parser.yacc"
    {
      (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement), (yyvsp[0].programElementList));
    }
#line 1271 "y.tab.cpp"
    break;

  case 4: /* ProgramElementList: %empty  */
#line 163 "parser.yacc"
    {
      (yyval.programElementList) = nullptr;
    }
#line 1279 "y.tab.cpp"
    break;

  case 5: /* ProgramElement: VarDeclStmt  */
#line 170 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
    }
#line 1287 "y.tab.cpp"
    break;

  case 6: /* ProgramElement: StructDef  */
#line 174 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
    }
#line 1295 "y.tab.cpp"
    break;

  case 7: /* ProgramElement: FnDeclStmt  */
#line 178 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
    }
#line 1303 "y.tab.cpp"
    break;

  case 8: /* ProgramElement: FnDef  */
#line 182 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
    }
#line 1311 "y.tab.cpp"
    break;

  case 9: /* ProgramElement: SEMICOLON  */
#line 186 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
    }
#line 1319 "y.tab.cpp"
    break;

  case 10: /* Type: TYPE  */
#line 193 "parser.yacc"
        {
            // 对于内置类型，直接使用 yylval.type
            (yyval.type) = A_NativeType((yyvsp[0].type)->pos, A_intTypeKind);;
        }
#line 1328 "y.tab.cpp"
    break;

  case 11: /* Type: ID  */
#line 198 "parser.yacc"
        {
            // 对于用户自定义类型，创建结构体类型
            (yyval.type) = A_StructType((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
        }
#line 1337 "y.tab.cpp"
    break;

  case 12: /* ArithExpr: ArithExpr ADD ArithExpr  */
#line 207 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_add, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1346 "y.tab.cpp"
    break;

  case 13: /* ArithExpr: ArithExpr SUB ArithExpr  */
#line 212 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_sub, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1355 "y.tab.cpp"
    break;

  case 14: /* ArithExpr: ArithExpr MUL ArithExpr  */
#line 217 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_mul, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1364 "y.tab.cpp"
    break;

  case 15: /* ArithExpr: ArithExpr DIV ArithExpr  */
#line 222 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_div, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1373 "y.tab.cpp"
    break;

  case 16: /* ArithExpr: ExprUnit  */
#line 227 "parser.yacc"
    {
      (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos, (yyvsp[0].exprUnit));
    }
#line 1381 "y.tab.cpp"
    break;

  case 17: /* ExprUnit: NUM  */
#line 235 "parser.yacc"
    {
      (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos, (yyvsp[0].tokenNum)->num);
    }
#line 1389 "y.tab.cpp"
    break;

  case 18: /* ExprUnit: ID  */
#line 239 "parser.yacc"
    {
      (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
    }
#line 1397 "y.tab.cpp"
    break;

  case 19: /* ExprUnit: LPAREN ArithExpr RPAREN  */
#line 243 "parser.yacc"
    {
      (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos), (yyvsp[-1].arithExpr));
    }
#line 1405 "y.tab.cpp"
    break;

  case 20: /* ExprUnit: FnCall  */
#line 247 "parser.yacc"
    {
      (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos, (yyvsp[0].fnCall));
    }
#line 1413 "y.tab.cpp"
    break;

  case 21: /* ExprUnit: LeftVal LBRACKET ID RBRACKET  */
#line 251 "parser.yacc"
    {
      A_indexExpr idx = A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id);
      A_arrayExpr arrayExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[-3].leftVal)->pos, arrayExpr);
    }
#line 1423 "y.tab.cpp"
    break;

  case 22: /* ExprUnit: LeftVal LBRACKET NUM RBRACKET  */
#line 257 "parser.yacc"
    {
      A_indexExpr idx = A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num);
      A_arrayExpr arrayExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[-3].leftVal)->pos, arrayExpr);
    }
#line 1433 "y.tab.cpp"
    break;

  case 23: /* ExprUnit: LeftVal DOT ID  */
#line 263 "parser.yacc"
    {
      A_memberExpr memberExpr = A_MemberExpr((yyvsp[-1].pos), (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id);
      (yyval.exprUnit) = A_MemberExprUnit((yyvsp[-2].leftVal)->pos, memberExpr);
    }
#line 1442 "y.tab.cpp"
    break;

  case 24: /* ExprUnit: SUB ExprUnit  */
#line 268 "parser.yacc"
    {
        // 优化：如果 ExprUnit 是数字，则直接创建负数节点
        if ((yyvsp[0].exprUnit)->kind == A_numExprKind) {
            (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].exprUnit)->pos, -((yyvsp[0].exprUnit)->u.num));
        } else {
            A_arithUExpr arithUExpr = A_ArithUExpr((yyvsp[-1].pos), A_neg, (yyvsp[0].exprUnit));
            (yyval.exprUnit) = A_ArithUExprUnit((yyvsp[-1].pos), arithUExpr);
        }
    }
#line 1456 "y.tab.cpp"
    break;

  case 25: /* StructDef: STRUCT ID LBRACE VarDeclList RBRACE  */
#line 281 "parser.yacc"
    {
      (yyval.structDef) = A_StructDef((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].varDeclList));
    }
#line 1464 "y.tab.cpp"
    break;

  case 26: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 288 "parser.yacc"
    {
      (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos), (yyvsp[-1].varDecl));
    }
#line 1472 "y.tab.cpp"
    break;

  case 27: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 292 "parser.yacc"
    {
      (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos), (yyvsp[-1].varDef));
    }
#line 1480 "y.tab.cpp"
    break;

  case 28: /* VarDecl: ID LBRACKET NUM RBRACKET COLON Type  */
#line 299 "parser.yacc"
    {
      A_varDeclArray declArray = A_VarDeclArray((yyvsp[-5].tokenId)->pos, (yyvsp[-5].tokenId)->id, (yyvsp[-3].tokenNum)->num, (yyvsp[0].type));
      (yyval.varDecl) = A_VarDecl_Array((yyvsp[-5].tokenId)->pos, declArray);
    }
#line 1489 "y.tab.cpp"
    break;

  case 29: /* VarDecl: ID COLON Type  */
#line 304 "parser.yacc"
    {
      A_varDeclScalar declScalar = A_VarDeclScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, (yyvsp[0].type));
      (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[-2].tokenId)->pos, declScalar);
    }
#line 1498 "y.tab.cpp"
    break;

  case 30: /* VarDecl: ID LBRACKET NUM RBRACKET  */
#line 309 "parser.yacc"
    {
      A_varDeclArray declArray = A_VarDeclArray((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].tokenNum)->num, nullptr);
      (yyval.varDecl) = A_VarDecl_Array((yyvsp[-3].tokenId)->pos, declArray);
    }
#line 1507 "y.tab.cpp"
    break;

  case 31: /* VarDecl: ID  */
#line 314 "parser.yacc"
    {
      A_varDeclScalar declScalar = A_VarDeclScalar((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id, nullptr);
      (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].tokenId)->pos, declScalar);
    }
#line 1516 "y.tab.cpp"
    break;

  case 32: /* VarDeclList: VarDecl  */
#line 322 "parser.yacc"
    {
      (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl), nullptr);
    }
#line 1524 "y.tab.cpp"
    break;

  case 33: /* VarDeclList: VarDecl COMMA VarDeclList  */
#line 326 "parser.yacc"
    {
      (yyval.varDeclList) = A_VarDeclList((yyvsp[-2].varDecl), (yyvsp[0].varDeclList));
    }
#line 1532 "y.tab.cpp"
    break;

  case 34: /* VarDeclList: %empty  */
#line 330 "parser.yacc"
    {
      (yyval.varDeclList) = nullptr;
    }
#line 1540 "y.tab.cpp"
    break;

  case 35: /* VarDef: ID LBRACKET NUM RBRACKET COLON Type ASSIGN LBRACE RightValList RBRACE  */
#line 337 "parser.yacc"
    {
      A_varDefArray defArray = A_VarDefArray((yyvsp[-9].tokenId)->pos, (yyvsp[-9].tokenId)->id, (yyvsp[-7].tokenNum)->num, (yyvsp[-4].type), (yyvsp[-1].rightValList));
      (yyval.varDef) = A_VarDef_Array((yyvsp[-9].tokenId)->pos, defArray);
    }
#line 1549 "y.tab.cpp"
    break;

  case 36: /* VarDef: ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightValList RBRACE  */
#line 342 "parser.yacc"
    {
      A_varDefArray defArray = A_VarDefArray((yyvsp[-7].tokenId)->pos, (yyvsp[-7].tokenId)->id, (yyvsp[-5].tokenNum)->num, nullptr, (yyvsp[-1].rightValList));
      (yyval.varDef) = A_VarDef_Array((yyvsp[-7].tokenId)->pos, defArray);
    }
#line 1558 "y.tab.cpp"
    break;

  case 37: /* VarDef: ID COLON Type ASSIGN RightVal  */
#line 347 "parser.yacc"
    {
      A_varDefScalar defScalar = A_VarDefScalar((yyvsp[-4].tokenId)->pos, (yyvsp[-4].tokenId)->id, (yyvsp[-2].type), (yyvsp[0].rightVal));
      (yyval.varDef) = A_VarDef_Scalar((yyvsp[-4].tokenId)->pos, defScalar);
    }
#line 1567 "y.tab.cpp"
    break;

  case 38: /* VarDef: ID ASSIGN RightVal  */
#line 352 "parser.yacc"
    {
      A_varDefScalar defScalar = A_VarDefScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, nullptr, (yyvsp[0].rightVal));
      (yyval.varDef) = A_VarDef_Scalar((yyvsp[-2].tokenId)->pos, defScalar);
    }
#line 1576 "y.tab.cpp"
    break;

  case 39: /* RightValList: RightVal  */
#line 360 "parser.yacc"
    {
      (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal), nullptr);
    }
#line 1584 "y.tab.cpp"
    break;

  case 40: /* RightValList: RightVal COMMA RightValList  */
#line 364 "parser.yacc"
    {
      (yyval.rightValList) = A_RightValList((yyvsp[-2].rightVal), (yyvsp[0].rightValList));
    }
#line 1592 "y.tab.cpp"
    break;

  case 41: /* RightValList: %empty  */
#line 368 "parser.yacc"
    {
      (yyval.rightValList) = nullptr;
    }
#line 1600 "y.tab.cpp"
    break;

  case 42: /* RightVal: ArithExpr  */
#line 375 "parser.yacc"
    {
      (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos, (yyvsp[0].arithExpr));
    }
#line 1608 "y.tab.cpp"
    break;

  case 43: /* LeftVal: ID  */
#line 382 "parser.yacc"
    {
      (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
    }
#line 1616 "y.tab.cpp"
    break;

  case 44: /* LeftVal: LeftVal LBRACKET ID RBRACKET  */
#line 386 "parser.yacc"
    {
      A_indexExpr idx = A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id);
      A_arrayExpr arrExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.leftVal) = A_ArrExprLVal((yyvsp[-3].leftVal)->pos, arrExpr);
    }
#line 1626 "y.tab.cpp"
    break;

  case 45: /* LeftVal: LeftVal LBRACKET NUM RBRACKET  */
#line 392 "parser.yacc"
    {
      A_indexExpr idx = A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num);
      A_arrayExpr arrExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.leftVal) = A_ArrExprLVal((yyvsp[-3].leftVal)->pos, arrExpr);
    }
#line 1636 "y.tab.cpp"
    break;

  case 46: /* LeftVal: LeftVal DOT ID  */
#line 398 "parser.yacc"
    {
      A_memberExpr memberExpr = A_MemberExpr((yyvsp[-1].pos), (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id);
      (yyval.leftVal) = A_MemberExprLVal((yyvsp[-2].leftVal)->pos, memberExpr);
    }
#line 1645 "y.tab.cpp"
    break;

  case 47: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 406 "parser.yacc"
    {
      (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl));
    }
#line 1653 "y.tab.cpp"
    break;

  case 48: /* FnDecl: FN ID LPAREN ParamDecl RPAREN ARROW Type  */
#line 413 "parser.yacc"
    {
      (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos), (yyvsp[-5].tokenId)->id, (yyvsp[-3].paramDecl), (yyvsp[0].type));
    }
#line 1661 "y.tab.cpp"
    break;

  case 49: /* FnDecl: FN ID LPAREN ParamDecl RPAREN  */
#line 417 "parser.yacc"
    {
      (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].paramDecl), nullptr);
    }
#line 1669 "y.tab.cpp"
    break;

  case 50: /* ParamDecl: VarDeclList  */
#line 424 "parser.yacc"
    {
      (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
    }
#line 1677 "y.tab.cpp"
    break;

  case 51: /* FnDef: FnDecl CodeBlock  */
#line 431 "parser.yacc"
    {
      (yyval.fnDef) = A_FnDef((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl), (yyvsp[0].codeBlockStmtList));
    }
#line 1685 "y.tab.cpp"
    break;

  case 52: /* CodeBlock: LBRACE StmtList RBRACE  */
#line 441 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = (yyvsp[-1].codeBlockStmtList);
    }
#line 1693 "y.tab.cpp"
    break;

  case 53: /* StmtList: %empty  */
#line 447 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = nullptr;
    }
#line 1701 "y.tab.cpp"
    break;

  case 54: /* StmtList: Stmt StmtList  */
#line 451 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[-1].codeBlockStmt), (yyvsp[0].codeBlockStmtList));
    }
#line 1709 "y.tab.cpp"
    break;

  case 55: /* Stmt: VarDeclStmt  */
#line 458 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
    }
#line 1717 "y.tab.cpp"
    break;

  case 56: /* Stmt: AssignStmt  */
#line 462 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos, (yyvsp[0].assignStmt));
    }
#line 1725 "y.tab.cpp"
    break;

  case 57: /* Stmt: CallStmt  */
#line 466 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos, (yyvsp[0].callStmt));
    }
#line 1733 "y.tab.cpp"
    break;

  case 58: /* Stmt: IfStmt  */
#line 470 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos, (yyvsp[0].ifStmt));
    }
#line 1741 "y.tab.cpp"
    break;

  case 59: /* Stmt: WhileStmt  */
#line 474 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos, (yyvsp[0].whileStmt));
    }
#line 1749 "y.tab.cpp"
    break;

  case 60: /* Stmt: ReturnStmt  */
#line 478 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos, (yyvsp[0].returnStmt));
    }
#line 1757 "y.tab.cpp"
    break;

  case 61: /* Stmt: CONTINUE SEMICOLON  */
#line 482 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
    }
#line 1765 "y.tab.cpp"
    break;

  case 62: /* Stmt: BREAK SEMICOLON  */
#line 486 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
    }
#line 1773 "y.tab.cpp"
    break;

  case 63: /* Stmt: SEMICOLON  */
#line 490 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
    }
#line 1781 "y.tab.cpp"
    break;

  case 64: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 497 "parser.yacc"
    {
      (yyval.assignStmt) = A_AssignStmt((yyvsp[-2].pos), (yyvsp[-3].leftVal), (yyvsp[-1].rightVal));
    }
#line 1789 "y.tab.cpp"
    break;

  case 65: /* CallStmt: FnCall SEMICOLON  */
#line 504 "parser.yacc"
    {
      (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos, (yyvsp[-1].fnCall));
    }
#line 1797 "y.tab.cpp"
    break;

  case 66: /* FnCall: ID LPAREN RightValList RPAREN  */
#line 511 "parser.yacc"
    {
      (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].rightValList));
    }
#line 1805 "y.tab.cpp"
    break;

  case 67: /* BoolExpr: BoolExpr AND BoolExpr  */
#line 518 "parser.yacc"
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, A_and, (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr));
      (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, boolBiOpExpr);
    }
#line 1814 "y.tab.cpp"
    break;

  case 68: /* BoolExpr: BoolExpr OR BoolExpr  */
#line 523 "parser.yacc"
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, A_or, (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr));
      (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, boolBiOpExpr);
    }
#line 1823 "y.tab.cpp"
    break;

  case 69: /* BoolExpr: BoolUnit  */
#line 528 "parser.yacc"
    {
      (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos, (yyvsp[0].boolUnit));
    }
#line 1831 "y.tab.cpp"
    break;

  case 70: /* BoolUnit: LPAREN ExprUnit ComOp ExprUnit RPAREN  */
#line 535 "parser.yacc"
    {
      A_comExpr comExpr = A_ComExpr((yyvsp[-3].exprUnit)->pos, (yyvsp[-2].comOp), (yyvsp[-3].exprUnit), (yyvsp[-1].exprUnit));
      (yyval.boolUnit) = A_ComExprUnit((yyvsp[-3].exprUnit)->pos, comExpr);
    }
#line 1840 "y.tab.cpp"
    break;

  case 71: /* BoolUnit: LPAREN BoolExpr RPAREN  */
#line 540 "parser.yacc"
    {
      (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos), (yyvsp[-1].boolExpr));
    }
#line 1848 "y.tab.cpp"
    break;

  case 72: /* BoolUnit: LPAREN BoolUOp BoolUnit RPAREN  */
#line 544 "parser.yacc"
    {
      A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr((yyvsp[-1].boolUnit)->pos, (yyvsp[-2].boolUOp), (yyvsp[-1].boolUnit));
      (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[-1].boolUnit)->pos, boolUOpExpr);
    }
#line 1857 "y.tab.cpp"
    break;

  case 73: /* BoolUOp: NOT  */
#line 563 "parser.yacc"
    {
      (yyval.boolUOp) = A_not;
    }
#line 1865 "y.tab.cpp"
    break;

  case 74: /* ComOp: GT  */
#line 570 "parser.yacc"
    {
      (yyval.comOp) = A_gt;
    }
#line 1873 "y.tab.cpp"
    break;

  case 75: /* ComOp: LT  */
#line 574 "parser.yacc"
    {
      (yyval.comOp) = A_lt;
    }
#line 1881 "y.tab.cpp"
    break;

  case 76: /* ComOp: GE  */
#line 578 "parser.yacc"
    {
      (yyval.comOp) = A_ge;
    }
#line 1889 "y.tab.cpp"
    break;

  case 77: /* ComOp: LE  */
#line 582 "parser.yacc"
    {
      (yyval.comOp) = A_le;
    }
#line 1897 "y.tab.cpp"
    break;

  case 78: /* ComOp: EQ  */
#line 586 "parser.yacc"
    {
      (yyval.comOp) = A_eq;
    }
#line 1905 "y.tab.cpp"
    break;

  case 79: /* ComOp: NE  */
#line 590 "parser.yacc"
    {
      (yyval.comOp) = A_ne;
    }
#line 1913 "y.tab.cpp"
    break;

  case 80: /* IfStmt: IF BoolUnit CodeBlock  */
#line 597 "parser.yacc"
    {
      (yyval.ifStmt) = A_IfStmt((yyvsp[-2].pos), (yyvsp[-1].boolUnit), (yyvsp[0].codeBlockStmtList), nullptr);
    }
#line 1921 "y.tab.cpp"
    break;

  case 81: /* IfStmt: IF BoolUnit CodeBlock ELSE CodeBlock  */
#line 601 "parser.yacc"
    {
      (yyval.ifStmt) = A_IfStmt((yyvsp[-4].pos), (yyvsp[-3].boolUnit), (yyvsp[-2].codeBlockStmtList), (yyvsp[0].codeBlockStmtList));
    }
#line 1929 "y.tab.cpp"
    break;

  case 82: /* WhileStmt: WHILE BoolUnit CodeBlock  */
#line 608 "parser.yacc"
    {
      (yyval.whileStmt) = A_WhileStmt((yyvsp[-2].pos), (yyvsp[-1].boolUnit), (yyvsp[0].codeBlockStmtList)); 
    }
#line 1937 "y.tab.cpp"
    break;

  case 83: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 615 "parser.yacc"
    {
      (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos), (yyvsp[-1].rightVal));
    }
#line 1945 "y.tab.cpp"
    break;

  case 84: /* ReturnStmt: RET SEMICOLON  */
#line 619 "parser.yacc"
    {
      (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos), nullptr);
    }
#line 1953 "y.tab.cpp"
    break;


#line 1957 "y.tab.cpp"

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

#line 624 "parser.yacc"

    
extern "C"{
void yyerror(const char *s) {
    extern int line, col;
    fprintf(stderr, "Syntax error at line %d, column %d: %s\n", line, col, s);
}

int yywrap()
{
  return(1);
}
}
