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
    IFX = 258,
    ELSE = 259,
    start_decl = 260,
    INTEGER = 261,
    CHR = 262,
    FLOAT = 263,
    BOOL = 264,
    ID = 265,
    vect = 266,
    matr = 267,
    STRUCT = 268,
    CONST = 269,
    pls = 270,
    min = 271,
    ori = 272,
    slsh = 273,
    verf = 274,
    mod = 275,
    ASSIGN = 276,
    AND = 277,
    OR = 278,
    INCR = 279,
    NOT = 280,
    sprnt = 281,
    dprnt = 282,
    sacoal = 283,
    dacoal = 284,
    pnct = 285,
    vir = 286,
    pnctvir = 287,
    end_defines = 288,
    end_instr = 289,
    IF = 290,
    WHILE = 291,
    FOR = 292,
    RETURN = 293,
    print = 294,
    INTEGER_VAL = 295,
    FLOAT_VAL = 296,
    CHR_VAL = 297,
    BOOL_VAL = 298,
    EQ = 299,
    NEQ = 300,
    LEQ = 301,
    GEQ = 302,
    GRE = 303,
    LES = 304
  };
#endif
/* Tokens.  */
#define IFX 258
#define ELSE 259
#define start_decl 260
#define INTEGER 261
#define CHR 262
#define FLOAT 263
#define BOOL 264
#define ID 265
#define vect 266
#define matr 267
#define STRUCT 268
#define CONST 269
#define pls 270
#define min 271
#define ori 272
#define slsh 273
#define verf 274
#define mod 275
#define ASSIGN 276
#define AND 277
#define OR 278
#define INCR 279
#define NOT 280
#define sprnt 281
#define dprnt 282
#define sacoal 283
#define dacoal 284
#define pnct 285
#define vir 286
#define pnctvir 287
#define end_defines 288
#define end_instr 289
#define IF 290
#define WHILE 291
#define FOR 292
#define RETURN 293
#define print 294
#define INTEGER_VAL 295
#define FLOAT_VAL 296
#define CHR_VAL 297
#define BOOL_VAL 298
#define EQ 299
#define NEQ 300
#define LEQ 301
#define GEQ 302
#define GRE 303
#define LES 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "mathc.y" /* yacc.c:1909  */
int val; char val_ch; char *nume; 

#line 155 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
