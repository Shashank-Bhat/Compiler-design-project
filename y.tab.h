/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 30 "AST.y" /* yacc.c:1909  */
char* var_type; char* text; struct AST *node;

#line 155 "y.tab.h" /* yacc.c:1909  */
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
