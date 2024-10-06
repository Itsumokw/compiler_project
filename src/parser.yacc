%{
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
%}

// 定义符号类型
%union {
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
}

// 定义终结符（Tokens）
%token <pos> ADD        // '+'
%token <pos> SUB        // '-'
%token <pos> MUL        // '*'
%token <pos> DIV        // '/'
%token <pos> SEMICOLON  // ';'

%token <pos> LPAREN     // '('
%token <pos> RPAREN     // ')'
%token <pos> LBRACKET   // '['
%token <pos> RBRACKET   // ']'
%token <pos> LBRACE     // '{'
%token <pos> RBRACE     // '}'
%token <pos> COMMA      // ','
%token <pos> ASSIGN     // '='
%token <pos> COLON      // ':'
%token <pos> DOT        // '.'

%token <pos> STRUCT     // "struct"
%token <pos> LET        // "let"
%token <pos> FN         // "fn"
%token <pos> ARROW      // "->"
%token <pos> IF         // "if"
%token <pos> ELSE       // "else"
%token <pos> WHILE      // "while"
%token <pos> RET        // "ret"
%token <pos> CONTINUE   // "continue"
%token <pos> BREAK      // "break"

%token <pos> AND        // "&&"
%token <pos> OR         // "||"
%token <pos> NOT        // "!"
%token <pos> GT         // ">"
%token <pos> LT         // "<"
%token <pos> GE         // ">="
%token <pos> LE         // "<="
%token <pos> EQ         // "=="
%token <pos> NE         // "!="

%token <tokenNum> NUM
%token <tokenId> ID
%token <type> TYPE

// 定义非终结符（Non-terminals）及其类型
%type <program> Program
%type <arithExpr> ArithExpr
%type <programElementList> ProgramElementList
%type <programElement> ProgramElement
%type <exprUnit> ExprUnit
%type <structDef> StructDef
%type <varDeclStmt> VarDeclStmt
%type <varDef> VarDef
%type <varDecl> VarDecl
%type <varDeclList> VarDeclList
%type <fnDeclStmt> FnDeclStmt
%type <fnDecl> FnDecl
%type <fnDef> FnDef
%type <fnCall> FnCall
%type <leftVal> LeftVal
%type <rightVal> RightVal
%type <rightValList> RightValList
%type <paramDecl> ParamDecl
%type <codeBlockStmtList> CodeBlock
%type <codeBlockStmtList> StmtList
%type <codeBlockStmt> Stmt
%type <assignStmt> AssignStmt
%type <callStmt> CallStmt
%type <ifStmt> IfStmt
%type <whileStmt> WhileStmt
%type <returnStmt> ReturnStmt
%type <boolExpr> BoolExpr
%type <boolUnit> BoolUnit
%type <boolBiOp> BoolBiOp
%type <boolUOp> BoolUOp
%type <comOp> ComOp

// 定义优先级和结合性
%left OR
%left AND
%left EQ NE
%left GT LT GE LE
%left ADD SUB
%left MUL DIV
%right NOT
%right UMINUS

%start Program

%%                   /* 规则部分 */

Program:
    ProgramElementList 
    {  
      root = A_Program($1);
      $$ = root;
    }
    ;

ProgramElementList:
      ProgramElement ProgramElementList
    {
      $$ = A_ProgramElementList($1, $2);
    }
    |
    {
      $$ = NULL;
    }
    ;

ProgramElement:
      VarDeclStmt
    {
      $$ = A_ProgramVarDeclStmt($1->pos, $1);
    }
    | StructDef
    {
      $$ = A_ProgramStructDef($1->pos, $1);
    }
    | FnDeclStmt
    {
      $$ = A_ProgramFnDeclStmt($1->pos, $1);
    }
    | FnDef
    {
      $$ = A_ProgramFnDef($1->pos, $1);
    }
    | SEMICOLON
    {
      $$ = A_ProgramNullStmt($1);
    }
    ;

ArithExpr:
      ArithExpr ADD ArithExpr
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr($2, A_add, $1, $3);
      $$ = A_ArithBiOp_Expr($2, arithBiOpExpr);
    }
    | ArithExpr SUB ArithExpr
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr($2, A_sub, $1, $3);
      $$ = A_ArithBiOp_Expr($2, arithBiOpExpr);
    }
    | ArithExpr MUL ArithExpr
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr($2, A_mul, $1, $3);
      $$ = A_ArithBiOp_Expr($2, arithBiOpExpr);
    }
    | ArithExpr DIV ArithExpr
    {
      A_arithBiOpExpr arithBiOpExpr = A_ArithBiOpExpr($2, A_div, $1, $3);
      $$ = A_ArithBiOp_Expr($2, arithBiOpExpr);
    }
    | ExprUnit
    {
      $$ = A_ExprUnit($1->pos, $1);
    }
    ;

ExprUnit:
      NUM
    {
      $$ = A_NumExprUnit($1->pos, $1->num);
    }
    | ID
    {
      $$ = A_IdExprUnit($1->pos, $1->id);
    } 
    | LPAREN ArithExpr RPAREN
    {
      $$ = A_ArithExprUnit($1, $2);
    }
    | FnCall
    {
      $$ = A_CallExprUnit($1->pos, $1);
    }
    | LeftVal LBRACKET ID RBRACKET
    {
      A_indexExpr idx = A_IdIndexExpr($3->pos, $3->id);
      A_arrayExpr arrayExpr = A_ArrayExpr($2, $1, idx);
      $$ = A_ArrayExprUnit($2, arrayExpr);
    }
    | LeftVal LBRACKET NUM RBRACKET
    {
      A_indexExpr idx = A_NumIndexExpr($3->pos, $3->num);
      A_arrayExpr arrayExpr = A_ArrayExpr($2, $1, idx);
      $$ = A_ArrayExprUnit($2, arrayExpr);
    }
    | LeftVal DOT ID
    {
      A_memberExpr memberExpr = A_MemberExpr($2, $1, $3->id);
      $$ = A_MemberExprUnit($2, memberExpr);
    }
    ;

StructDef:
      STRUCT ID LBRACE VarDeclList RBRACE
    {
      $$ = A_StructDef($1->pos, $2->id, $4);
    }
    ;

VarDeclStmt:
      LET VarDecl SEMICOLON
    {
      $$ = A_VarDeclStmt($1->pos, $2);
    }
    | LET VarDef SEMICOLON
    {
      $$ = A_VarDefStmt($1->pos, $2);
    }
    ;

VarDecl:
      ID COLON TYPE
    {
      A_varDeclScalar declScalar = A_VarDeclScalar($1->pos, $1->id, $3);
      $$ = A_VarDecl_Scalar($1->pos, declScalar);
    }
    | ID LBRACKET NUM RBRACKET COLON TYPE
    {
      A_varDeclArray declArray = A_VarDeclArray($1->pos, $1->id, $3->num, $6);
      $$ = A_VarDecl_Array($1->pos, declArray);
    }
    | ID
    {
      A_varDeclScalar declScalar = A_VarDeclScalar($1->pos, $1->id, NULL);
      $$ = A_VarDecl_Scalar($1->pos, declScalar);
    }
    | ID LBRACKET NUM RBRACKET
    {
      A_varDeclArray declArray = A_VarDeclArray($1->pos, $1->id, $3->num, NULL);
      $$ = A_VarDecl_Array($1->pos, declArray);
    }
    ;

VarDeclList:
      VarDecl
    {
      $$ = A_VarDeclList($1, NULL);
    }
    | VarDeclList COMMA VarDecl
    {
      $$ = A_VarDeclList($3, $1);
    }
    |
    {
      $$ = NULL;
    }
    ;

VarDef:
      ID COLON TYPE ASSIGN RightVal
    {
      A_varDefScalar defScalar = A_VarDefScalar($1->pos, $1->id, $3, $5);
      $$ = A_VarDef_Scalar($1->pos, defScalar);
    }
    | ID ASSIGN RightVal
    {
      A_varDefScalar defScalar = A_VarDefScalar($1->pos, $1->id, NULL, $3);
      $$ = A_VarDef_Scalar($1->pos, defScalar);
    }
    | ID LBRACKET NUM RBRACKET COLON TYPE ASSIGN LBRACE RightValList RBRACE
    {
      A_varDefArray defArray = A_VarDefArray($1->pos, $1->id, $3->num, $6, $9);
      $$ = A_VarDef_Array($1->pos, defArray);
    }
    | ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightValList RBRACE
    {
      A_varDefArray defArray = A_VarDefArray($1->pos, $1->id, $3->num, NULL, $7);
      $$ = A_VarDef_Array($1->pos, defArray);
    }
    ;

RightValList:
      RightVal
    {
      $$ = A_RightValList($1, NULL);
    }
    | RightValList COMMA RightVal
    {
      $$ = A_RightValList($3, $1);
    }
    |
    {
      $$ = NULL;
    }
    ;

RightVal:
      ArithExpr
    {
      $$ = A_ArithExprRVal($1->pos, $1);
    }
    ;

LeftVal:
      ID
    {
      $$ = A_IdExprLVal($1->pos, $1->id);
    }
    | LeftVal LBRACKET ID RBRACKET
    {
      A_indexExpr idx = A_IdIndexExpr($3->pos, $3->id);
      A_arrayExpr arrExpr = A_ArrayExpr($2, $1, idx);
      $$ = A_ArrExprLVal($2, arrExpr);
    }
    | LeftVal LBRACKET NUM RBRACKET
    {
      A_indexExpr idx = A_NumIndexExpr($3->pos, $3->num);
      A_arrayExpr arrExpr = A_ArrayExpr($2, $1, idx);
      $$ = A_ArrExprLVal($2, arrExpr);
    }
    | LeftVal DOT ID
    {
      A_memberExpr memberExpr = A_MemberExpr($2, $1, $3->id);
      $$ = A_MemberExprLVal($2, memberExpr);
    }
    ;

FnDeclStmt:
      FnDecl SEMICOLON
    {
      $$ = A_FnDeclStmt($1->pos, $1);
    }
    ;

FnDecl:
      FN ID LPAREN ParamDecl RPAREN
    {
      $$ = A_FnDecl($1->pos, $2->id, $4, NULL);
    }
    | FN ID LPAREN ParamDecl RPAREN ARROW TYPE
    {
      $$ = A_FnDecl($1->pos, $2->id, $4, $7);
    }
    ;

ParamDecl:
      VarDeclList
    {
      $$ = A_ParamDecl($1);
    }
    ;

FnDef:
      FnDecl CodeBlock
    {
      $$ = A_FnDef($1->pos, $1, $2);
    }
    ;

CodeBlock:
      LBRACE StmtList RBRACE
    {
      $$ = $2;
    }
    ;

StmtList:
    {
      $$ = nullptr;
    }
    | StmtList Stmt
    {
      $$ = A_CodeBlockStmtList($2, $1);
    }
    ;

Stmt:
      VarDeclStmt
    {
      $$ = A_BlockVarDeclStmt($1->pos, $1);
    }
    | AssignStmt
    {
      $$ = A_BlockAssignStmt($1->pos, $1);
    }
    | CallStmt
    {
      $$ = A_BlockCallStmt($1->pos, $1);
    }
    | IfStmt
    {
      $$ = A_BlockIfStmt($1->pos, $1);
    }
    | WhileStmt
    {
      $$ = A_BlockWhileStmt($1->pos, $1);
    }
    | ReturnStmt
    {
      $$ = A_BlockReturnStmt($1->pos, $1);
    }
    | CONTINUE SEMICOLON
    {
      $$ = A_BlockContinueStmt($1->pos);
    }
    | BREAK SEMICOLON
    {
      $$ = A_BlockBreakStmt($1->pos);
    }
    | SEMICOLON
    {
      $$ = A_BlockNullStmt($1);
    }
    ;

AssignStmt:
      LeftVal ASSIGN RightVal SEMICOLON
    {
      $$ = A_AssignStmt($2->pos, $1, $3);
    }
    ;

CallStmt:
      FnCall SEMICOLON
    {
      $$ = A_CallStmt($1->pos, $1);
    }
    ;

FnCall:
      ID LPAREN RightValList RPAREN
    {
      $$ = A_FnCall($1->pos, $1->id, $3);
    }
    ;

BoolExpr:
      BoolExpr BoolBiOp BoolExpr
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr($2, $2, $1, $3);
      $$ = A_BoolBiOp_Expr($2, boolBiOpExpr);
    }
    | BoolUnit
    {
      $$ = A_BoolExpr($1->pos, $1);
    }
    ;

BoolUnit:
      LPAREN ExprUnit ComOp ExprUnit RPAREN
    {
      A_comExpr comExpr = A_ComExpr($3, $3, $2, $4);
      $$ = A_ComExprUnit($3, comExpr);
    }
    | LPAREN BoolExpr RPAREN
    {
      $$ = A_BoolExprUnit($1->pos, $2);
    }
    | BoolUOp BoolUnit
    {
      A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr($1, $1, $2);
      $$ = A_BoolUOpExprUnit($1, boolUOpExpr);
    }
    ;

BoolBiOp:
      AND
    {
      $$ = A_and;
    }
    | OR
    {
      $$ = A_or;
    }
    ;

BoolUOp:
      NOT
    {
      $$ = A_not;
    }
    ;

ComOp:
      GT
    {
      $$ = A_gt;
    }
    | LT
    {
      $$ = A_lt;
    }
    | GE
    {
      $$ = A_ge;
    }
    | LE
    {
      $$ = A_le;
    }
    | EQ
    {
      $$ = A_eq;
    }
    | NE
    {
      $$ = A_ne;
    }
    ;

IfStmt:
      IF BoolExpr CodeBlock
    {
      $$ = A_IfStmt($1->pos, $2, $3, NULL);
    }
    | IF BoolExpr CodeBlock ELSE CodeBlock
    {
      $$ = A_IfStmt($1->pos, $2, $3, $5);
    }
    ;

WhileStmt:
      WHILE BoolExpr CodeBlock
    {
      $$ = A_WhileStmt($1->pos, $2, $3); 
    }
    ;

ReturnStmt:
      RET RightVal SEMICOLON
    {
      $$ = A_ReturnStmt($1->pos, $2);
    }
    | RET SEMICOLON
    {
      $$ = A_ReturnStmt($1->pos, NULL);
    }
    ;

%%
    
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
