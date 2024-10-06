/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "parser.yacc"

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

#line 140 "y.tab.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */
