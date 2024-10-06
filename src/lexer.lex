%{
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "TeaplAst.h"
#include "y.tab.hpp"

int extern line , col;
int calc(const char *s, int len);

// 声明 get_keyword_token 函数
int get_keyword_token(const char* word);

%}

%option noyywrap

%start COMMENT1 COMMENT2

DIGIT       [0-9]
LETTER      [a-zA-Z]
ID_START    [a-zA-Z_]
ID_CONT     [a-zA-Z_0-9]
WS          [ \t]
NEWLINE     \n
COMMENT     "//".*
KEYWORD     "struct"|"let"|"fn"|"if"|"else"|"while"|"ret"|"continue"|"break"|"and"|"or"|"not"|"int"

%%

<INITIAL>"//"       {  BEGIN COMMENT1;  }
<COMMENT1>.         { col += yyleng; }
<COMMENT1>"NEWLINE" {  BEGIN INITIAL;  }

<INITIAL>"/*" {  BEGIN COMMENT2;  }
<COMMENT2>{NEWLINE} { line++; col = 1; }
<COMMENT2>.        { col += yyleng; }
<COMMENT2>"*/"    { BEGIN(INITIAL); }


<INITIAL>{WS}+       { col += yyleng; /* 跳过空白字符 */ }

<INITIAL>{NEWLINE}   { line++; col = 1; }

<INITIAL>{COMMENT}   { col += yyleng; /* 跳过注释 */ }

<INITIAL>"=="        {col += yyleng; return EQ; }
<INITIAL>"!="        {col += yyleng; return NE; }
<INITIAL>">="        {col += yyleng; return GE; }
<INITIAL>"<="        {col += yyleng; return LE; }
<INITIAL>"->"        {col += yyleng; return ARROW; }
<INITIAL>"&&"        {col += yyleng; return AND; }
<INITIAL>"||"        {col += yyleng; return OR; }
<INITIAL>"!"         {col += yyleng; return NOT; }
<INITIAL>"+"         {col += yyleng; return ADD; }
<INITIAL>"-"         {col += yyleng; return SUB; }
<INITIAL>"*"         {col += yyleng; return MUL; }
<INITIAL>"/"         {col += yyleng; return DIV; }
<INITIAL>";"         {col += yyleng; return SEMICOLON; }
<INITIAL>"("         {col += yyleng; return LPAREN; }
<INITIAL>")"         {col += yyleng; return RPAREN; }
<INITIAL>"["         {col += yyleng; return LBRACKET; }
<INITIAL>"]"         {col += yyleng; return RBRACKET; }
<INITIAL>"{"         {col += yyleng; return LBRACE; }
<INITIAL>"}"         {col += yyleng; return RBRACE; }
<INITIAL>","         {col += yyleng; return COMMA; }
<INITIAL>":"         {col += yyleng; return COLON; }
<INITIAL>"."         {col += yyleng; return DOT; }
<INITIAL>">"         {col += yyleng; return GT; }
<INITIAL>"<"         {col += yyleng; return LT; }
<INITIAL>"="         {col += yyleng; return ASSIGN; }

<INITIAL>{KEYWORD}   {
                A_pos pos = A_Pos(line, col);
                col += yyleng;
                int tok = get_keyword_token(yytext);
                if (tok == TYPE) {
                    // 对于 'int' 关键字，设置 yylval.type
                    yylval.type = A_NativeType(pos, A_intTypeKind);
                } else {
                    yylval.pos = pos; // 对于其他关键字，设置 yylval.pos
                }
                return tok;
            }


<INITIAL>{ID_START}{ID_CONT}*     {
                            int keyword_token = get_keyword_token(yytext);
                            if (keyword_token) {
                                col += yyleng;
                                yylval.pos = A_Pos(line, col);
                                return keyword_token;
                            } else {
                                yylval.tokenId = A_TokenId(A_Pos(line, col), strdup(yytext));
                                col += yyleng;
                                return ID;
                            }
    /*
                            A_pos pos = A_Pos(line, col);
                            col += yyleng;
                            int tok = get_keyword_token(yytext);
                            if (tok != 0)
                                return tok;
                            yylval.tokenId = A_TokenId(pos, strdup(yytext));
                            return ID;
    */
                        }

<INITIAL>[1-9][0-9]* {
                yylval.tokenNum = A_TokenNum(A_Pos(line, col), calc(yytext, yyleng));
                col += yyleng;
                return NUM;
            }

<INITIAL>0   {
        yylval.tokenNum = A_TokenNum(A_Pos(line, col), 0);
        col++;
        return NUM;
    }

<INITIAL>.           {
                fprintf(stderr, "Unknown character: %s at line %d, col %d\n", yytext, line, col);
                col += yyleng;
            }

%%

int get_keyword_token(const char* word) {
    if (strcmp(word, "struct") == 0) return STRUCT;
    if (strcmp(word, "let") == 0) return LET;
    if (strcmp(word, "fn") == 0) return FN;
    if (strcmp(word, "if") == 0) return IF;
    if (strcmp(word, "else") == 0) return ELSE;
    if (strcmp(word, "while") == 0) return WHILE;
    if (strcmp(word, "ret") == 0) return RET;
    if (strcmp(word, "continue") == 0) return CONTINUE;
    if (strcmp(word, "break") == 0) return BREAK;
    if (strcmp(word, "and") == 0) return AND;
    if (strcmp(word, "or") == 0) return OR;
    if (strcmp(word, "not") == 0) return NOT;
    if (strcmp(word, "int") == 0) return TYPE;
    return 0; // 不是关键字
}

int calc(const char *s, int len) {
    int ret = 0;
    for(int i = 0; i < len; i++)
        ret = ret * 10 + (s[i] - '0');
    return ret;
}
