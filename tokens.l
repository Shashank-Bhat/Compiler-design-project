%{
#include<stdio.h>
#include "y.tab.h"
extern YYSTYPE yylval;
int flag=0;
int count = 0;
%}
%option yylineno
%%
"//"[' 'a-zA-Z0-9.]* ;
\/\*(.*\n)*.*\*\/ ;
"cout<<\""[' 'a-zA-Z0-9.]*"\";" {ECHO;}
"cout<<"[' 'a-zA-Z0-9.]*";" {ECHO;}

"#include<"[' 'a-zA-Z0-9.]*">" {ECHO;}
"#include \""[' 'a-zA-Z0-9.]*"\"" {ECHO;}
int {ECHO; yylval.var_type=strdup(yytext);return T_INT;}
float {ECHO; yylval.var_type=strdup(yytext);return T_FLOAT;}
char { ECHO;yylval.var_type=strdup(yytext);return T_CHAR;}
case { ECHO; return T_CASE;}
switch {ECHO;return T_SWITCH;}
default {ECHO;return T_DEFAULT;}
"'" {ECHO;return T_SINGLE;}
"," {ECHO;return T_COMMA;}
":" {ECHO;return T_COLON;}
";" { ECHO;return T_SC;}
[0-9]+((\.[0-9]+)?) {ECHO;yylval.text=strdup(yytext);return T_NUM;}
"."  { ECHO;return T_DOT;}


"+=" { ECHO;yylval.text=strdup(yytext); return T_SPLUS;}
"-=" { ECHO;yylval.text=strdup(yytext); return T_SMINUS;}
"*=" { ECHO;yylval.text=strdup(yytext); return T_SMULT;}
"/=" { ECHO;yylval.text=strdup(yytext); return T_SDIV;}
"++" { ECHO;yylval.text=strdup(yytext); return T_INC;}
"--" { ECHO;yylval.text=strdup(yytext); return T_DEC;}
"("  {ECHO;return T_OPEN;}
")"  {ECHO;return T_CLOSE;}
"<=" {ECHO;yylval.text=strdup(yytext); return T_LESEQ; }
">=" {ECHO;yylval.text=strdup(yytext); return T_GRTEQ;}
"!=" { ECHO;yylval.text=strdup(yytext); return T_NOTEQ;}
"==" { ECHO;yylval.text=strdup(yytext); return T_EQEQ; }
"<"  {ECHO; yylval.text=strdup(yytext); return T_LESS;}
">"	 { ECHO;yylval.text=strdup(yytext); return T_GREAT;}
"{"	 { ECHO;return T_OPBRACE;}
"}"  {ECHO;return T_CLBRACE;}
"+"  {ECHO;yylval.text=strdup(yytext); return T_PLUS;}
"-"  {ECHO;yylval.text=strdup(yytext); return T_MINUS;}
"="	{ECHO;yylval.text=strdup(yytext); return T_ASSIGN; }
"*"	 {ECHO;yylval.text=strdup(yytext); return T_MULT;}
"/"	 {ECHO;yylval.text=strdup(yytext); return T_DIV;}
"^"	 {ECHO;yylval.text=strdup(yytext); return T_POW;}
"||" {ECHO;yylval.text=strdup(yytext); return T_OR;}
"&&" {ECHO;yylval.text=strdup(yytext); return T_AND;}
[' '\n\t\s] {ECHO;}
continue  {ECHO;return T_CONTINUE;}
break  {ECHO;return T_BREAK;}
return  {ECHO;return T_RETURN;}
if  {ECHO;return T_IF;}
while  {ECHO;return T_WHILE;}
else  {ECHO;return T_ELSE;}
main	{ ECHO;return T_MAIN;}


[a-zA-Z]+[a-zA-Z0-9]* {ECHO;yylval.text=strdup(yytext); return T_ID;}
#					  return 0;
%%
