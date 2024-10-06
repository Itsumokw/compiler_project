%{
#include <stdio.h>
#include <string.h>
#include "TeaplAst.h"
#include "y.tab.hpp"

extern int line, col;
int calc(const char *s, int len);
%}

%option noyywrap

%%

/* 忽略空格和制表符 */
[ \t]+        { col += yyleng; }

/* 换行符 */
\n            { line++; col = 1; }

/* 注释处理：单行注释和多行注释 */
"//".*        { /* 忽略单行注释 */ }
"/*"[^*]*"*"*([^/*][^*]*"*"*)*"*/"  { /* 忽略多行注释 */ }

/* 关键字识别 */
"struct"      { yylval.pos = A_Pos(line, col); col += yyleng; return STRUCT; }
"let"         { yylval.pos = A_Pos(line, col); col += yyleng; return LET; }
"fn"          { yylval.pos = A_Pos(line, col); col += yyleng; return FN; }
"if"          { yylval.pos = A_Pos(line, col); col += yyleng; return IF; }
"else"        { yylval.pos = A_Pos(line, col); col += yyleng; return ELSE; }
"while"       { yylval.pos = A_Pos(line, col); col += yyleng; return WHILE; }
"ret"         { yylval.pos = A_Pos(line, col); col += yyleng; return RET; }
"continue"    { yylval.pos = A_Pos(line, col); col += yyleng; return CONTINUE; }
"break"       { yylval.pos = A_Pos(line, col); col += yyleng; return BREAK; }

/* 运算符和分隔符 */
"+"           { yylval.pos = A_Pos(line, col); col += yyleng; return ADD; }
"-"           { yylval.pos = A_Pos(line, col); col += yyleng; return SUB; }
"*"           { yylval.pos = A_Pos(line, col); col += yyleng; return MUL; }
"/"           { yylval.pos = A_Pos(line, col); col += yyleng; return DIV; }
";"           { yylval.pos = A_Pos(line, col); col += yyleng; return SEMICOLON; }
"("           { yylval.pos = A_Pos(line, col); col += yyleng; return LPAREN; }
")"           { yylval.pos = A_Pos(line, col); col += yyleng; return RPAREN; }
"["           { yylval.pos = A_Pos(line, col); col += yyleng; return LBRACKET; }
"]"           { yylval.pos = A_Pos(line, col); col += yyleng; return RBRACKET; }
"{"           { yylval.pos = A_Pos(line, col); col += yyleng; return LBRACE; }
"}"           { yylval.pos = A_Pos(line, col); col += yyleng; return RBRACE; }
","           { yylval.pos = A_Pos(line, col); col += yyleng; return COMMA; }
":"           { yylval.pos = A_Pos(line, col); col += yyleng; return COLON; }
"."           { yylval.pos = A_Pos(line, col); col += yyleng; return DOT; }
"->"          { yylval.pos = A_Pos(line, col); col += yyleng; return ARROW; }
"&&"          { yylval.pos = A_Pos(line, col); col += yyleng; return AND; }
"||"          { yylval.pos = A_Pos(line, col); col += yyleng; return OR; }
"!"           { yylval.pos = A_Pos(line, col); col += yyleng; return NOT; }
">="          { yylval.pos = A_Pos(line, col); col += yyleng; return GE; }
"<="          { yylval.pos = A_Pos(line, col); col += yyleng; return LE; }
"=="          { yylval.pos = A_Pos(line, col); col += yyleng; return EQ; }
"!="          { yylval.pos = A_Pos(line, col); col += yyleng; return NE; }
">"           { yylval.pos = A_Pos(line, col); col += yyleng; return GT; }
"<"           { yylval.pos = A_Pos(line, col); col += yyleng; return LT; }

/* 标识符 */
[a-zA-Z_][a-zA-Z0-9_]* {
    yylval.tokenId = A_TokenId(A_Pos(line, col), strdup(yytext));
    col += yyleng;
    return ID;
}

/* 数字 */
[1-9][0-9]* {
    yylval.tokenNum = A_TokenNum(A_Pos(line, col), atoi(yytext));
    col += yyleng;
    return NUM;
}

0 {
    yylval.tokenNum = A_TokenNum(A_Pos(line, col), 0);
    col += yyleng;
    return NUM;
}

/* 未识别的字符 */
. {
    fprintf(stderr, "Illegal character '%c' at line %d, column %d\n", yytext[0], line, col);
    col += yyleng;
}

%%

/* 辅助函数 */
int calc(const char *s, int len) {
    int ret = 0;
    for(int i = 0; i < len; i++)
        ret = ret * 10 + (s[i] - '0');
    return ret;
}
