%{
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
    //A_boolBiOp boolBiOp;
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

%token <pos> NEG     // "-"

%token <tokenNum> NUM
%token <tokenId> ID
%token <type> TYPE

// 定义非终结符（Non-terminals）及其类型
%type <type> Type
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
//%type <boolBiOp> BoolBiOp
%type <boolUOp> BoolUOp
%type <comOp> ComOp

// 定义优先级和结合性
%left OR
%left AND
%left EQ NE
%left GT LT GE LE
%left ADD SUB
%left MUL DIV
%right NEG
%right NOT

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
      $$ = nullptr;
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

Type:
      TYPE
        {
            // 对于内置类型，直接使用 yylval.type
            $$ = A_NativeType($1->pos, A_intTypeKind);;
        }
    | ID
        {
            // 对于用户自定义类型，创建结构体类型
            $$ = A_StructType($1->pos, $1->id);
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
      $$ = A_ArrayExprUnit($1->pos, arrayExpr);
    }
    | LeftVal LBRACKET NUM RBRACKET
    {
      A_indexExpr idx = A_NumIndexExpr($3->pos, $3->num);
      A_arrayExpr arrayExpr = A_ArrayExpr($2, $1, idx);
      $$ = A_ArrayExprUnit($1->pos, arrayExpr);
    }
    | LeftVal DOT ID
    {
      A_memberExpr memberExpr = A_MemberExpr($2, $1, $3->id);
      $$ = A_MemberExprUnit($1->pos, memberExpr);
    }
    | SUB ExprUnit %prec NEG
    {
        // 优化：如果 ExprUnit 是数字，则直接创建负数节点
        if ($2->kind == A_numExprKind) {
            $$ = A_NumExprUnit($2->pos, -($2->u.num));
        } else {
            A_arithUExpr arithUExpr = A_ArithUExpr($1, A_neg, $2);
            $$ = A_ArithUExprUnit($1, arithUExpr);
        }
    }
    ;

StructDef:
      STRUCT ID LBRACE VarDeclList RBRACE
    {
      $$ = A_StructDef($1, $2->id, $4);
    }
    ;

VarDeclStmt:
      LET VarDecl SEMICOLON
    {
      $$ = A_VarDeclStmt($1, $2);
    }
    | LET VarDef SEMICOLON
    {
      $$ = A_VarDefStmt($1, $2);
    }
    ;

VarDecl:
     ID LBRACKET NUM RBRACKET COLON Type
    {
      A_varDeclArray declArray = A_VarDeclArray($1->pos, $1->id, $3->num, $6);
      $$ = A_VarDecl_Array($1->pos, declArray);
    }
    | ID COLON Type
    {
      A_varDeclScalar declScalar = A_VarDeclScalar($1->pos, $1->id, $3);
      $$ = A_VarDecl_Scalar($1->pos, declScalar);
    }
    | ID LBRACKET NUM RBRACKET
    {
      A_varDeclArray declArray = A_VarDeclArray($1->pos, $1->id, $3->num, nullptr);
      $$ = A_VarDecl_Array($1->pos, declArray);
    }
    | ID
    {
      A_varDeclScalar declScalar = A_VarDeclScalar($1->pos, $1->id, nullptr);
      $$ = A_VarDecl_Scalar($1->pos, declScalar);
    }
    ;

VarDeclList:
      VarDecl
    {
      $$ = A_VarDeclList($1, nullptr);
    }
    | VarDecl COMMA VarDeclList
    {
      $$ = A_VarDeclList($1, $3);
    }
    |
    {
      $$ = nullptr;
    }
    ;

VarDef:
      ID LBRACKET NUM RBRACKET COLON Type ASSIGN LBRACE RightValList RBRACE
    {
      A_varDefArray defArray = A_VarDefArray($1->pos, $1->id, $3->num, $6, $9);
      $$ = A_VarDef_Array($1->pos, defArray);
    }
    | ID LBRACKET NUM RBRACKET ASSIGN LBRACE RightValList RBRACE
    {
      A_varDefArray defArray = A_VarDefArray($1->pos, $1->id, $3->num, nullptr, $7);
      $$ = A_VarDef_Array($1->pos, defArray);
    }
    | ID COLON Type ASSIGN RightVal
    {
      A_varDefScalar defScalar = A_VarDefScalar($1->pos, $1->id, $3, $5);
      $$ = A_VarDef_Scalar($1->pos, defScalar);
    }
    | ID ASSIGN RightVal
    {
      A_varDefScalar defScalar = A_VarDefScalar($1->pos, $1->id, nullptr, $3);
      $$ = A_VarDef_Scalar($1->pos, defScalar);
    }
    ;

RightValList:
      RightVal
    {
      $$ = A_RightValList($1, nullptr);
    }
    | RightVal COMMA RightValList
    {
      $$ = A_RightValList($1, $3);
    }
    |
    {
      $$ = nullptr;
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
      $$ = A_ArrExprLVal($1->pos, arrExpr);
    }
    | LeftVal LBRACKET NUM RBRACKET
    {
      A_indexExpr idx = A_NumIndexExpr($3->pos, $3->num);
      A_arrayExpr arrExpr = A_ArrayExpr($2, $1, idx);
      $$ = A_ArrExprLVal($1->pos, arrExpr);
    }
    | LeftVal DOT ID
    {
      A_memberExpr memberExpr = A_MemberExpr($2, $1, $3->id);
      $$ = A_MemberExprLVal($1->pos, memberExpr);
    }
    ;

FnDeclStmt:
      FnDecl SEMICOLON
    {
      $$ = A_FnDeclStmt($1->pos, $1);
    }
    ;

FnDecl:
      FN ID LPAREN ParamDecl RPAREN ARROW Type
    {
      $$ = A_FnDecl($1, $2->id, $4, $7);
    }
    | FN ID LPAREN ParamDecl RPAREN
    {
      $$ = A_FnDecl($1, $2->id, $4, nullptr);
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


//这里或许应该合并成为CodeBlockStmtList，因为与TeaplAst中的定义有点偏差
//但是可以先留下来，如果没问题就算辽，不过这里提供了"()"
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
    | Stmt StmtList
    {
      $$ = A_CodeBlockStmtList($1, $2);
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
      $$ = A_BlockContinueStmt($1);
    }
    | BREAK SEMICOLON
    {
      $$ = A_BlockBreakStmt($1);
    }
    | SEMICOLON
    {
      $$ = A_BlockNullStmt($1);
    }
    ;

AssignStmt:
      LeftVal ASSIGN RightVal SEMICOLON
    {
      $$ = A_AssignStmt($2, $1, $3);
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
      BoolExpr AND BoolExpr
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr($1->pos, A_and, $1, $3);
      $$ = A_BoolBiOp_Expr($1->pos, boolBiOpExpr);
    }
    | BoolExpr OR BoolExpr
    {
      A_boolBiOpExpr boolBiOpExpr = A_BoolBiOpExpr($1->pos, A_or, $1, $3);
      $$ = A_BoolBiOp_Expr($1->pos, boolBiOpExpr);
    }
    | BoolUnit
    {
      $$ = A_BoolExpr($1->pos, $1);
    }
    ;

BoolUnit:
      LPAREN ExprUnit ComOp ExprUnit RPAREN
    {
      A_comExpr comExpr = A_ComExpr($2->pos, $3, $2, $4);
      $$ = A_ComExprUnit($2->pos, comExpr);
    }
    | LPAREN BoolExpr RPAREN
    {
      $$ = A_BoolExprUnit($1, $2);
    }
    | LPAREN BoolUOp BoolUnit RPAREN
    {
      A_boolUOpExpr boolUOpExpr = A_BoolUOpExpr($3->pos, $2, $3);
      $$ = A_BoolUOpExprUnit($3->pos, boolUOpExpr);
    }
    ;
/*
BoolBiOp:
      OR
    {
      $$ = A_and;
    }
    | AND
    {
      $$ = A_or;
    }
    ;
*/
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
      IF BoolUnit CodeBlock
    {
      $$ = A_IfStmt($1, $2, $3, nullptr);
    }
    | IF BoolUnit CodeBlock ELSE CodeBlock
    {
      $$ = A_IfStmt($1, $2, $3, $5);
    }
    ;

WhileStmt:
      WHILE BoolUnit CodeBlock
    {
      $$ = A_WhileStmt($1, $2, $3); 
    }
    ;

ReturnStmt:
      RET RightVal SEMICOLON
    {
      $$ = A_ReturnStmt($1, $2);
    }
    | RET SEMICOLON
    {
      $$ = A_ReturnStmt($1, nullptr);
    }
    ;

%%
    
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
