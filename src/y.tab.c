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
extern int yydebug = 1;

extern int yylex(void);
extern "C"{
    extern void yyerror(const char *s); 
    extern int yywrap();
}

#line 88 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ADD = 258,                     /* ADD  */
    SUB = 259,                     /* SUB  */
    MUL = 260,                     /* MUL  */
    DIV = 261,                     /* DIV  */
    SEMICOLON = 262,               /* SEMICOLON  */
    LPAREN = 263,                  /* LPAREN  */
    RPAREN = 264,                  /* RPAREN  */
    LBRACKET = 265,                /* LBRACKET  */
    RBRACKET = 266,                /* RBRACKET  */
    LBRACE = 267,                  /* LBRACE  */
    RBRACE = 268,                  /* RBRACE  */
    COMMA = 269,                   /* COMMA  */
    ASSIGN = 270,                  /* ASSIGN  */
    COLON = 271,                   /* COLON  */
    DOT = 272,                     /* DOT  */
    STRUCT = 273,                  /* STRUCT  */
    LET = 274,                     /* LET  */
    FN = 275,                      /* FN  */
    ARROW = 276,                   /* ARROW  */
    IF = 277,                      /* IF  */
    ELSE = 278,                    /* ELSE  */
    WHILE = 279,                   /* WHILE  */
    RET = 280,                     /* RET  */
    CONTINUE = 281,                /* CONTINUE  */
    BREAK = 282,                   /* BREAK  */
    AND = 283,                     /* AND  */
    OR = 284,                      /* OR  */
    NOT = 285,                     /* NOT  */
    GT = 286,                      /* GT  */
    LT = 287,                      /* LT  */
    GE = 288,                      /* GE  */
    LE = 289,                      /* LE  */
    EQ = 290,                      /* EQ  */
    NE = 291,                      /* NE  */
    NUM = 292,                     /* NUM  */
    ID = 293,                      /* ID  */
    TYPE = 294,                    /* TYPE  */
    UMINUS = 295                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ADD 258
#define SUB 259
#define MUL 260
#define DIV 261
#define SEMICOLON 262
#define LPAREN 263
#define RPAREN 264
#define LBRACKET 265
#define RBRACKET 266
#define LBRACE 267
#define RBRACE 268
#define COMMA 269
#define ASSIGN 270
#define COLON 271
#define DOT 272
#define STRUCT 273
#define LET 274
#define FN 275
#define ARROW 276
#define IF 277
#define ELSE 278
#define WHILE 279
#define RET 280
#define CONTINUE 281
#define BREAK 282
#define AND 283
#define OR 284
#define NOT 285
#define GT 286
#define LT 287
#define GE 288
#define LE 289
#define EQ 290
#define NE 291
#define NUM 292
#define ID 293
#define TYPE 294
#define UMINUS 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "parser.yacc"

    A_pos pos;
    A_tokenId tokenId;
    A_tokenNum tokenNum;
    A_type type;
    A_program program;
    A_programElementList programElementList;
    A_programElement programElement;
    A_arithExpr arithExpr;
    A_exprUnit exprUnit;
    A_structDef structDef;
    A_varDeclStmt varDeclStmt;
    A_fnDeclStmt fnDeclStmt;
    A_fnDef fnDef;
    A_fnCall fnCall;
    A_fnDecl fnDecl;
    A_leftVal leftVal;
    A_varDecl varDecl;
    A_varDeclList varDeclList;
    A_varDef varDef;
    A_rightVal rightVal;
    A_rightValList rightValList;
    A_paramDecl paramDecl;
    A_codeBlockStmtList codeBlockStmtList;
    A_codeBlockStmt codeBlockStmt;
    A_assignStmt assignStmt;
    A_callStmt callStmt;
    A_ifStmt ifStmt;
    A_whileStmt whileStmt;
    A_returnStmt returnStmt;
    A_boolExpr boolExpr;
    A_boolUnit boolUnit;
    A_boolBiOp boolBiOp;
    A_boolUOp boolUOp;
    A_comOp comOp;

#line 258 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
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
#define YYLAST   164

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
       0,   147,   147,   155,   160,   166,   170,   174,   178,   182,
     189,   194,   199,   204,   209,   216,   220,   224,   228,   232,
     238,   244,   252,   259,   263,   270,   275,   280,   285,   293,
     297,   302,   308,   313,   318,   323,   331,   335,   340,   346,
     353,   357,   363,   369,   377,   384,   388,   395,   402,   412,
     419,   422,   429,   433,   437,   441,   445,   449,   453,   457,
     461,   468,   475,   482,   489,   494,   501,   506,   510,   518,
     522,   529,   536,   540,   544,   548,   552,   556,   563,   567,
     574,   581,   585
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

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      50,  -113,   -26,   -20,   -17,    48,  -113,    50,  -113,  -113,
    -113,    12,  -113,    41,    73,    51,    66,   106,  -113,  -113,
    -113,  -113,  -113,    77,    79,     8,    78,  -113,  -113,    77,
       4,    74,  -113,    62,   107,     8,  -113,    42,    97,  -113,
    -113,    39,  -113,   104,   108,   111,  -113,  -113,     2,     2,
       6,   114,   116,   117,  -113,     5,  -113,  -113,  -113,   119,
    -113,  -113,  -113,    87,    88,  -113,    77,    71,    76,     8,
       8,     8,     8,     8,    67,    90,     8,   109,    -3,  -113,
     120,     2,   120,  -113,   122,  -113,  -113,    69,     8,    93,
    -113,   123,  -113,  -113,   121,    96,  -113,    63,  -113,    92,
      92,  -113,  -113,   125,   126,    44,  -113,   100,    -3,    60,
      38,  -113,   115,  -113,  -113,  -113,   129,   130,   135,  -113,
     127,     8,   131,  -113,     8,    45,    61,  -113,    60,  -113,
    -113,  -113,  -113,  -113,  -113,     8,  -113,  -113,  -113,     2,
     120,  -113,  -113,  -113,   105,    95,   133,  -113,   138,    82,
    -113,  -113,  -113,     8,  -113,    99,  -113
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
       0,     0,     0,    82,     0,    58,    59,     0,     0,     0,
      62,     0,    25,    30,     0,     0,    17,     0,    36,    10,
      11,    12,    13,     0,     0,    21,    32,     0,     0,     0,
       0,    65,    78,    68,    80,    81,     0,     0,     0,    43,
      28,    38,    26,    63,     0,    20,    19,    46,    14,    72,
      73,    74,    75,    76,    77,     0,    67,    69,    70,     0,
       0,    42,    41,    61,     0,     0,     0,    37,     0,    64,
      79,    26,    35,    38,    66,     0,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,   141,  -113,   -34,   -75,  -113,   124,    -1,   128,
    -113,  -112,   -25,   132,  -113,  -113,  -113,  -113,   -76,  -113,
    -113,  -113,  -113,   134,    10,   -41,  -113,  -113,  -113,  -113,
    -113,  -113
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,    38,    39,     8,     9,    32,    33,
      16,    97,    98,    41,    10,    11,    45,    12,    22,    30,
      56,    57,    58,    42,   110,   111,   139,    81,   135,    60,
      61,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    68,    15,   109,   112,   108,   114,    80,    82,   145,
      78,    46,    13,    83,    35,    87,    35,    47,    14,    20,
      88,    17,    89,     3,    21,    84,    48,    79,    49,    50,
      51,    52,    79,   128,    36,    37,    99,   100,   101,   102,
     113,   155,    53,    36,    37,    36,    37,   136,    18,    74,
      69,   106,   -40,    23,   -43,   -42,    75,     1,    27,   -40,
     148,   -43,   -42,   118,   150,    93,   137,   138,     2,     3,
       4,   -41,   123,    28,    68,    65,    66,   124,   -41,    70,
      71,    72,    73,    24,    63,    96,    94,    95,    25,    26,
      64,   129,   130,   131,   132,   133,   134,    72,    73,   147,
      70,    71,    72,    73,   103,   104,   116,   117,   152,   124,
     137,   138,   156,   124,    29,    31,    34,    43,    67,    76,
      77,    85,    66,    86,    91,    69,    90,    92,   105,   115,
     107,   119,    21,   121,   120,   122,   125,   126,   140,   127,
     141,   142,   143,   144,   151,   153,   146,   154,    19,   149,
       0,     0,     0,     0,    54,     0,     0,    44,     0,     0,
       0,     0,    55,     0,    59
};

static const yytype_int16 yycheck[] =
{
      25,    35,     3,    78,    80,     8,    82,    48,    49,   121,
       8,     7,    38,     7,     8,    10,     8,    13,    38,     7,
      15,    38,    17,    19,    12,    50,    22,    30,    24,    25,
      26,    27,    30,   108,    37,    38,    70,    71,    72,    73,
      81,   153,    38,    37,    38,    37,    38,     9,     0,    10,
       8,    76,    10,    12,    10,    10,    17,     7,     7,    17,
     135,    17,    17,    88,   140,    66,    28,    29,    18,    19,
      20,    10,     9,     7,   108,    13,    14,    14,    17,     3,
       4,     5,     6,    10,    10,     9,    15,    16,    15,    16,
      16,    31,    32,    33,    34,    35,    36,     5,     6,   124,
       3,     4,     5,     6,    37,    38,    37,    38,    13,    14,
      28,    29,    13,    14,     8,    38,    37,    39,    11,    15,
       9,     7,    14,     7,    37,     8,     7,    39,    38,     7,
      21,    38,    12,    12,    11,    39,    11,    11,    23,    39,
      11,    11,     7,    16,    39,    12,    15,     9,     7,   139,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    30,    -1,    30
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
      66,    68,    66,     7,    53,     7,     7,    10,    15,    17,
       7,    37,    39,    49,    15,    16,     9,    52,    53,    45,
      45,    45,    45,    37,    38,    38,    53,    21,     8,    46,
      65,    66,    59,    66,    59,     7,    37,    38,    53,    38,
      11,    12,    39,     9,    14,    11,    11,    39,    46,    31,
      32,    33,    34,    35,    36,    69,     9,    28,    29,    67,
      23,    11,    11,     7,    16,    52,    15,    53,    46,    65,
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
#line 148 "parser.yacc"
    {  
      root = A_Program((yyvsp[0].programElementList));
      (yyval.program) = root;
    }
#line 1418 "y.tab.c"
    break;

  case 3: /* ProgramElementList: ProgramElement ProgramElementList  */
#line 156 "parser.yacc"
    {
      (yyval.programElementList) = A_ProgramElementList((yyvsp[-1].programElement), (yyvsp[0].programElementList));
    }
#line 1426 "y.tab.c"
    break;

  case 4: /* ProgramElementList: %empty  */
#line 160 "parser.yacc"
    {
      (yyval.programElementList) = nullptr;
    }
#line 1434 "y.tab.c"
    break;

  case 5: /* ProgramElement: VarDeclStmt  */
#line 167 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
    }
#line 1442 "y.tab.c"
    break;

  case 6: /* ProgramElement: StructDef  */
#line 171 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramStructDef((yyvsp[0].structDef)->pos, (yyvsp[0].structDef));
    }
#line 1450 "y.tab.c"
    break;

  case 7: /* ProgramElement: FnDeclStmt  */
#line 175 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramFnDeclStmt((yyvsp[0].fnDeclStmt)->pos, (yyvsp[0].fnDeclStmt));
    }
#line 1458 "y.tab.c"
    break;

  case 8: /* ProgramElement: FnDef  */
#line 179 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramFnDef((yyvsp[0].fnDef)->pos, (yyvsp[0].fnDef));
    }
#line 1466 "y.tab.c"
    break;

  case 9: /* ProgramElement: SEMICOLON  */
#line 183 "parser.yacc"
    {
      (yyval.programElement) = A_ProgramNullStmt((yyvsp[0].pos));
    }
#line 1474 "y.tab.c"
    break;

  case 10: /* ArithExpr: ArithExpr ADD ArithExpr  */
#line 190 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_add, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1483 "y.tab.c"
    break;

  case 11: /* ArithExpr: ArithExpr SUB ArithExpr  */
#line 195 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_sub, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1492 "y.tab.c"
    break;

  case 12: /* ArithExpr: ArithExpr MUL ArithExpr  */
#line 200 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_mul, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1501 "y.tab.c"
    break;

  case 13: /* ArithExpr: ArithExpr DIV ArithExpr  */
#line 205 "parser.yacc"
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr((yyvsp[-1].pos), A_div, (yyvsp[-2].arithExpr), (yyvsp[0].arithExpr));
      (yyval.arithExpr) = A_ArithBiOp_Expr((yyvsp[-1].pos), arithBiOpExpr);
    }
#line 1510 "y.tab.c"
    break;

  case 14: /* ArithExpr: ExprUnit  */
#line 210 "parser.yacc"
    {
      (yyval.arithExpr) = A_ExprUnit((yyvsp[0].exprUnit)->pos, (yyvsp[0].exprUnit));
    }
#line 1518 "y.tab.c"
    break;

  case 15: /* ExprUnit: NUM  */
#line 217 "parser.yacc"
    {
      (yyval.exprUnit) = A_NumExprUnit((yyvsp[0].tokenNum)->pos, (yyvsp[0].tokenNum)->num);
    }
#line 1526 "y.tab.c"
    break;

  case 16: /* ExprUnit: ID  */
#line 221 "parser.yacc"
    {
      (yyval.exprUnit) = A_IdExprUnit((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
    }
#line 1534 "y.tab.c"
    break;

  case 17: /* ExprUnit: LPAREN ArithExpr RPAREN  */
#line 225 "parser.yacc"
    {
      (yyval.exprUnit) = A_ArithExprUnit((yyvsp[-2].pos), (yyvsp[-1].arithExpr));
    }
#line 1542 "y.tab.c"
    break;

  case 18: /* ExprUnit: FnCall  */
#line 229 "parser.yacc"
    {
      (yyval.exprUnit) = A_CallExprUnit((yyvsp[0].fnCall)->pos, (yyvsp[0].fnCall));
    }
#line 1550 "y.tab.c"
    break;

  case 19: /* ExprUnit: LeftVal LBRACKET ID RBRACKET  */
#line 233 "parser.yacc"
    {
      A_indexExpr idx = A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id);
      A_arrayExpr arrayExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[-3].leftVal)->pos, arrayExpr);
    }
#line 1560 "y.tab.c"
    break;

  case 20: /* ExprUnit: LeftVal LBRACKET NUM RBRACKET  */
#line 239 "parser.yacc"
    {
      A_indexExpr idx = A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num);
      A_arrayExpr arrayExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.exprUnit) = A_ArrayExprUnit((yyvsp[-3].leftVal)->pos, arrayExpr);
    }
#line 1570 "y.tab.c"
    break;

  case 21: /* ExprUnit: LeftVal DOT ID  */
#line 245 "parser.yacc"
    {
      A_memberExpr memberExpr = A_MemberExpr((yyvsp[-1].pos), (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id);
      (yyval.exprUnit) = A_MemberExprUnit((yyvsp[-2].leftVal)->pos, memberExpr);
    }
#line 1579 "y.tab.c"
    break;

  case 22: /* StructDef: STRUCT ID LBRACE VarDeclList RBRACE  */
#line 253 "parser.yacc"
    {
      (yyval.structDef) = A_StructDef((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].varDeclList));
    }
#line 1587 "y.tab.c"
    break;

  case 23: /* VarDeclStmt: LET VarDecl SEMICOLON  */
#line 260 "parser.yacc"
    {
      (yyval.varDeclStmt) = A_VarDeclStmt((yyvsp[-2].pos), (yyvsp[-1].varDecl));
    }
#line 1595 "y.tab.c"
    break;

  case 24: /* VarDeclStmt: LET VarDef SEMICOLON  */
#line 264 "parser.yacc"
    {
      (yyval.varDeclStmt) = A_VarDefStmt((yyvsp[-2].pos), (yyvsp[-1].varDef));
    }
#line 1603 "y.tab.c"
    break;

  case 25: /* VarDecl: ID COLON TYPE  */
#line 271 "parser.yacc"
    {
      A_varDeclScalar declScalar = A_VarDeclScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, (yyvsp[0].type));
      (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[-2].tokenId)->pos, declScalar);
    }
#line 1612 "y.tab.c"
    break;

  case 26: /* VarDecl: ID LBRACKET NUM RBRACKET COLON TYPE  */
#line 276 "parser.yacc"
    {
      A_varDeclArray declArray = A_VarDeclArray((yyvsp[-5].tokenId)->pos, (yyvsp[-5].tokenId)->id, (yyvsp[-3].tokenNum)->num, (yyvsp[0].type));
      (yyval.varDecl) = A_VarDecl_Array((yyvsp[-5].tokenId)->pos, declArray);
    }
#line 1621 "y.tab.c"
    break;

  case 27: /* VarDecl: ID  */
#line 281 "parser.yacc"
    {
      A_varDeclScalar declScalar = A_VarDeclScalar((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id, nullptr);
      (yyval.varDecl) = A_VarDecl_Scalar((yyvsp[0].tokenId)->pos, declScalar);
    }
#line 1630 "y.tab.c"
    break;

  case 28: /* VarDecl: ID LBRACKET NUM RBRACKET  */
#line 286 "parser.yacc"
    {
      A_varDeclArray declArray = A_VarDeclArray((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].tokenNum)->num, nullptr);
      (yyval.varDecl) = A_VarDecl_Array((yyvsp[-3].tokenId)->pos, declArray);
    }
#line 1639 "y.tab.c"
    break;

  case 29: /* VarDeclList: VarDecl  */
#line 294 "parser.yacc"
    {
      (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl), nullptr);
    }
#line 1647 "y.tab.c"
    break;

  case 30: /* VarDeclList: VarDeclList COMMA VarDecl  */
#line 298 "parser.yacc"
    {
      (yyval.varDeclList) = A_VarDeclList((yyvsp[0].varDecl), (yyvsp[-2].varDeclList));
    }
#line 1655 "y.tab.c"
    break;

  case 31: /* VarDeclList: %empty  */
#line 302 "parser.yacc"
    {
      (yyval.varDeclList) = nullptr;
    }
#line 1663 "y.tab.c"
    break;

  case 32: /* VarDef: ID COLON TYPE ASSIGN RightVal  */
#line 309 "parser.yacc"
    {
      A_varDefScalar defScalar = A_VarDefScalar((yyvsp[-4].tokenId)->pos, (yyvsp[-4].tokenId)->id, (yyvsp[-2].type), (yyvsp[0].rightVal));
      (yyval.varDef) = A_VarDef_Scalar((yyvsp[-4].tokenId)->pos, defScalar);
    }
#line 1672 "y.tab.c"
    break;

  case 33: /* VarDef: ID ASSIGN RightVal  */
#line 314 "parser.yacc"
    {
      A_varDefScalar defScalar = A_VarDefScalar((yyvsp[-2].tokenId)->pos, (yyvsp[-2].tokenId)->id, nullptr, (yyvsp[0].rightVal));
      (yyval.varDef) = A_VarDef_Scalar((yyvsp[-2].tokenId)->pos, defScalar);
    }
#line 1681 "y.tab.c"
    break;

  case 34: /* VarDef: ID LBRACKET NUM RBRACKET COLON TYPE ASSIGN LBRACE RightValList RBRACE  */
#line 319 "parser.yacc"
    {
      A_varDefArray defArray = A_VarDefArray((yyvsp[-9].tokenId)->pos, (yyvsp[-9].tokenId)->id, (yyvsp[-7].tokenNum)->num, (yyvsp[-4].type), (yyvsp[-1].rightValList));
      (yyval.varDef) = A_VarDef_Array((yyvsp[-9].tokenId)->pos, defArray);
    }
#line 1690 "y.tab.c"
    break;

  case 35: /* VarDef: ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightValList RBRACE  */
#line 324 "parser.yacc"
    {
      A_varDefArray defArray = A_VarDefArray((yyvsp[-7].tokenId)->pos, (yyvsp[-7].tokenId)->id, (yyvsp[-5].tokenNum)->num, nullptr, (yyvsp[-1].rightValList));
      (yyval.varDef) = A_VarDef_Array((yyvsp[-7].tokenId)->pos, defArray);
    }
#line 1699 "y.tab.c"
    break;

  case 36: /* RightValList: RightVal  */
#line 332 "parser.yacc"
    {
      (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal), nullptr);
    }
#line 1707 "y.tab.c"
    break;

  case 37: /* RightValList: RightValList COMMA RightVal  */
#line 336 "parser.yacc"
    {
      (yyval.rightValList) = A_RightValList((yyvsp[0].rightVal), (yyvsp[-2].rightValList));
    }
#line 1715 "y.tab.c"
    break;

  case 38: /* RightValList: %empty  */
#line 340 "parser.yacc"
    {
      (yyval.rightValList) = nullptr;
    }
#line 1723 "y.tab.c"
    break;

  case 39: /* RightVal: ArithExpr  */
#line 347 "parser.yacc"
    {
      (yyval.rightVal) = A_ArithExprRVal((yyvsp[0].arithExpr)->pos, (yyvsp[0].arithExpr));
    }
#line 1731 "y.tab.c"
    break;

  case 40: /* LeftVal: ID  */
#line 354 "parser.yacc"
    {
      (yyval.leftVal) = A_IdExprLVal((yyvsp[0].tokenId)->pos, (yyvsp[0].tokenId)->id);
    }
#line 1739 "y.tab.c"
    break;

  case 41: /* LeftVal: LeftVal LBRACKET ID RBRACKET  */
#line 358 "parser.yacc"
    {
      A_indexExpr idx = A_IdIndexExpr((yyvsp[-1].tokenId)->pos, (yyvsp[-1].tokenId)->id);
      A_arrayExpr arrExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.leftVal) = A_ArrExprLVal((yyvsp[-3].leftVal)->pos, arrExpr);
    }
#line 1749 "y.tab.c"
    break;

  case 42: /* LeftVal: LeftVal LBRACKET NUM RBRACKET  */
#line 364 "parser.yacc"
    {
      A_indexExpr idx = A_NumIndexExpr((yyvsp[-1].tokenNum)->pos, (yyvsp[-1].tokenNum)->num);
      A_arrayExpr arrExpr = A_ArrayExpr((yyvsp[-2].pos), (yyvsp[-3].leftVal), idx);
      (yyval.leftVal) = A_ArrExprLVal((yyvsp[-3].leftVal)->pos, arrExpr);
    }
#line 1759 "y.tab.c"
    break;

  case 43: /* LeftVal: LeftVal DOT ID  */
#line 370 "parser.yacc"
    {
      A_memberExpr memberExpr = A_MemberExpr((yyvsp[-1].pos), (yyvsp[-2].leftVal), (yyvsp[0].tokenId)->id);
      (yyval.leftVal) = A_MemberExprLVal((yyvsp[-2].leftVal)->pos, memberExpr);
    }
#line 1768 "y.tab.c"
    break;

  case 44: /* FnDeclStmt: FnDecl SEMICOLON  */
#line 378 "parser.yacc"
    {
      (yyval.fnDeclStmt) = A_FnDeclStmt((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl));
    }
#line 1776 "y.tab.c"
    break;

  case 45: /* FnDecl: FN ID LPAREN ParamDecl RPAREN  */
#line 385 "parser.yacc"
    {
      (yyval.fnDecl) = A_FnDecl((yyvsp[-4].pos), (yyvsp[-3].tokenId)->id, (yyvsp[-1].paramDecl), nullptr);
    }
#line 1784 "y.tab.c"
    break;

  case 46: /* FnDecl: FN ID LPAREN ParamDecl RPAREN ARROW TYPE  */
#line 389 "parser.yacc"
    {
      (yyval.fnDecl) = A_FnDecl((yyvsp[-6].pos), (yyvsp[-5].tokenId)->id, (yyvsp[-3].paramDecl), (yyvsp[0].type));
    }
#line 1792 "y.tab.c"
    break;

  case 47: /* ParamDecl: VarDeclList  */
#line 396 "parser.yacc"
    {
      (yyval.paramDecl) = A_ParamDecl((yyvsp[0].varDeclList));
    }
#line 1800 "y.tab.c"
    break;

  case 48: /* FnDef: FnDecl CodeBlock  */
#line 403 "parser.yacc"
    {
      (yyval.fnDef) = A_FnDef((yyvsp[-1].fnDecl)->pos, (yyvsp[-1].fnDecl), (yyvsp[0].codeBlockStmtList));
    }
#line 1808 "y.tab.c"
    break;

  case 49: /* CodeBlock: LBRACE StmtList RBRACE  */
#line 413 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = (yyvsp[-1].codeBlockStmtList);
    }
#line 1816 "y.tab.c"
    break;

  case 50: /* StmtList: %empty  */
#line 419 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = nullptr;
    }
#line 1824 "y.tab.c"
    break;

  case 51: /* StmtList: StmtList Stmt  */
#line 423 "parser.yacc"
    {
      (yyval.codeBlockStmtList) = A_CodeBlockStmtList((yyvsp[0].codeBlockStmt), (yyvsp[-1].codeBlockStmtList));
    }
#line 1832 "y.tab.c"
    break;

  case 52: /* Stmt: VarDeclStmt  */
#line 430 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockVarDeclStmt((yyvsp[0].varDeclStmt)->pos, (yyvsp[0].varDeclStmt));
    }
#line 1840 "y.tab.c"
    break;

  case 53: /* Stmt: AssignStmt  */
#line 434 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockAssignStmt((yyvsp[0].assignStmt)->pos, (yyvsp[0].assignStmt));
    }
#line 1848 "y.tab.c"
    break;

  case 54: /* Stmt: CallStmt  */
#line 438 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockCallStmt((yyvsp[0].callStmt)->pos, (yyvsp[0].callStmt));
    }
#line 1856 "y.tab.c"
    break;

  case 55: /* Stmt: IfStmt  */
#line 442 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockIfStmt((yyvsp[0].ifStmt)->pos, (yyvsp[0].ifStmt));
    }
#line 1864 "y.tab.c"
    break;

  case 56: /* Stmt: WhileStmt  */
#line 446 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockWhileStmt((yyvsp[0].whileStmt)->pos, (yyvsp[0].whileStmt));
    }
#line 1872 "y.tab.c"
    break;

  case 57: /* Stmt: ReturnStmt  */
#line 450 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockReturnStmt((yyvsp[0].returnStmt)->pos, (yyvsp[0].returnStmt));
    }
#line 1880 "y.tab.c"
    break;

  case 58: /* Stmt: CONTINUE SEMICOLON  */
#line 454 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockContinueStmt((yyvsp[-1].pos));
    }
#line 1888 "y.tab.c"
    break;

  case 59: /* Stmt: BREAK SEMICOLON  */
#line 458 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockBreakStmt((yyvsp[-1].pos));
    }
#line 1896 "y.tab.c"
    break;

  case 60: /* Stmt: SEMICOLON  */
#line 462 "parser.yacc"
    {
      (yyval.codeBlockStmt) = A_BlockNullStmt((yyvsp[0].pos));
    }
#line 1904 "y.tab.c"
    break;

  case 61: /* AssignStmt: LeftVal ASSIGN RightVal SEMICOLON  */
#line 469 "parser.yacc"
    {
      (yyval.assignStmt) = A_AssignStmt((yyvsp[-2].pos), (yyvsp[-3].leftVal), (yyvsp[-1].rightVal));
    }
#line 1912 "y.tab.c"
    break;

  case 62: /* CallStmt: FnCall SEMICOLON  */
#line 476 "parser.yacc"
    {
      (yyval.callStmt) = A_CallStmt((yyvsp[-1].fnCall)->pos, (yyvsp[-1].fnCall));
    }
#line 1920 "y.tab.c"
    break;

  case 63: /* FnCall: ID LPAREN RightValList RPAREN  */
#line 483 "parser.yacc"
    {
      (yyval.fnCall) = A_FnCall((yyvsp[-3].tokenId)->pos, (yyvsp[-3].tokenId)->id, (yyvsp[-1].rightValList));
    }
#line 1928 "y.tab.c"
    break;

  case 64: /* BoolExpr: BoolExpr BoolBiOp BoolExpr  */
#line 490 "parser.yacc"
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr((yyvsp[-2].boolExpr)->pos, (yyvsp[-1].boolBiOp), (yyvsp[-2].boolExpr), (yyvsp[0].boolExpr));
      (yyval.boolExpr) = A_BoolBiOp_Expr((yyvsp[-2].boolExpr)->pos, boolBiOpExpr);
    }
#line 1937 "y.tab.c"
    break;

  case 65: /* BoolExpr: BoolUnit  */
#line 495 "parser.yacc"
    {
      (yyval.boolExpr) = A_BoolExpr((yyvsp[0].boolUnit)->pos, (yyvsp[0].boolUnit));
    }
#line 1945 "y.tab.c"
    break;

  case 66: /* BoolUnit: LPAREN ExprUnit ComOp ExprUnit RPAREN  */
#line 502 "parser.yacc"
    {
      A_comExpr comExpr = A_ComExpr((yyvsp[-3].exprUnit)->pos, (yyvsp[-2].comOp), (yyvsp[-3].exprUnit), (yyvsp[-1].exprUnit));
      (yyval.boolUnit) = A_ComExprUnit((yyvsp[-3].exprUnit)->pos, comExpr);
    }
#line 1954 "y.tab.c"
    break;

  case 67: /* BoolUnit: LPAREN BoolExpr RPAREN  */
#line 507 "parser.yacc"
    {
      (yyval.boolUnit) = A_BoolExprUnit((yyvsp[-2].pos), (yyvsp[-1].boolExpr));
    }
#line 1962 "y.tab.c"
    break;

  case 68: /* BoolUnit: BoolUOp BoolUnit  */
#line 511 "parser.yacc"
    {
      A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr((yyvsp[0].boolUnit)->pos, (yyvsp[-1].boolUOp), (yyvsp[0].boolUnit));
      (yyval.boolUnit) = A_BoolUOpExprUnit((yyvsp[0].boolUnit)->pos, boolUOpExpr);
    }
#line 1971 "y.tab.c"
    break;

  case 69: /* BoolBiOp: AND  */
#line 519 "parser.yacc"
    {
      (yyval.boolBiOp) = A_and;
    }
#line 1979 "y.tab.c"
    break;

  case 70: /* BoolBiOp: OR  */
#line 523 "parser.yacc"
    {
      (yyval.boolBiOp) = A_or;
    }
#line 1987 "y.tab.c"
    break;

  case 71: /* BoolUOp: NOT  */
#line 530 "parser.yacc"
    {
      (yyval.boolUOp) = A_not;
    }
#line 1995 "y.tab.c"
    break;

  case 72: /* ComOp: GT  */
#line 537 "parser.yacc"
    {
      (yyval.comOp) = A_gt;
    }
#line 2003 "y.tab.c"
    break;

  case 73: /* ComOp: LT  */
#line 541 "parser.yacc"
    {
      (yyval.comOp) = A_lt;
    }
#line 2011 "y.tab.c"
    break;

  case 74: /* ComOp: GE  */
#line 545 "parser.yacc"
    {
      (yyval.comOp) = A_ge;
    }
#line 2019 "y.tab.c"
    break;

  case 75: /* ComOp: LE  */
#line 549 "parser.yacc"
    {
      (yyval.comOp) = A_le;
    }
#line 2027 "y.tab.c"
    break;

  case 76: /* ComOp: EQ  */
#line 553 "parser.yacc"
    {
      (yyval.comOp) = A_eq;
    }
#line 2035 "y.tab.c"
    break;

  case 77: /* ComOp: NE  */
#line 557 "parser.yacc"
    {
      (yyval.comOp) = A_ne;
    }
#line 2043 "y.tab.c"
    break;

  case 78: /* IfStmt: IF BoolUnit CodeBlock  */
#line 564 "parser.yacc"
    {
      (yyval.ifStmt) = A_IfStmt((yyvsp[-2].pos), (yyvsp[-1].boolUnit), (yyvsp[0].codeBlockStmtList), nullptr);
    }
#line 2051 "y.tab.c"
    break;

  case 79: /* IfStmt: IF BoolUnit CodeBlock ELSE CodeBlock  */
#line 568 "parser.yacc"
    {
      (yyval.ifStmt) = A_IfStmt((yyvsp[-4].pos), (yyvsp[-3].boolUnit), (yyvsp[-2].codeBlockStmtList), (yyvsp[0].codeBlockStmtList));
    }
#line 2059 "y.tab.c"
    break;

  case 80: /* WhileStmt: WHILE BoolUnit CodeBlock  */
#line 575 "parser.yacc"
    {
      (yyval.whileStmt) = A_WhileStmt((yyvsp[-2].pos), (yyvsp[-1].boolUnit), (yyvsp[0].codeBlockStmtList)); 
    }
#line 2067 "y.tab.c"
    break;

  case 81: /* ReturnStmt: RET RightVal SEMICOLON  */
#line 582 "parser.yacc"
    {
      (yyval.returnStmt) = A_ReturnStmt((yyvsp[-2].pos), (yyvsp[-1].rightVal));
    }
#line 2075 "y.tab.c"
    break;

  case 82: /* ReturnStmt: RET SEMICOLON  */
#line 586 "parser.yacc"
    {
      (yyval.returnStmt) = A_ReturnStmt((yyvsp[-1].pos), nullptr);
    }
#line 2083 "y.tab.c"
    break;


#line 2087 "y.tab.c"

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

#line 591 "parser.yacc"

    
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
