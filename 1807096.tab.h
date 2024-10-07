
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     START = 259,
     END = 260,
     NUM = 261,
     VAR = 262,
     IF = 263,
     SWITCH = 264,
     CASE = 265,
     DEFAULT = 266,
     BREAK = 267,
     FOR = 268,
     WHILE = 269,
     VALUE = 270,
     FACTORIAL = 271,
     ODD_EVEN = 272,
     BIGMOD = 273,
     ASSIGN = 274,
     DEFINE = 275,
     EOL = 276,
     ARRAY = 277,
     CLASS = 278,
     INT = 279,
     FLOAT = 280,
     CHAR = 281,
     IFX = 282,
     ELSE = 283,
     LOG10 = 284,
     LOG = 285,
     SEC = 286,
     COT = 287,
     COSEC = 288,
     TAN = 289,
     COS = 290,
     SIN = 291,
     EQ = 292,
     GTE = 293,
     LTE = 294,
     GT = 295,
     LT = 296,
     MINUS = 297,
     PLUS = 298,
     BitAND = 299,
     BitOR = 300,
     BitXOR = 301,
     DIV = 302,
     MUL = 303,
     MOD = 304,
     POW = 305,
     BitNOT = 306,
     INC = 307,
     DEC = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


