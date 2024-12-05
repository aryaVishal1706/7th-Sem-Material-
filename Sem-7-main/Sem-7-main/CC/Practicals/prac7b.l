%{
  #include<stdio.h>
  #include "y.tab.h"
%}
 
%%
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"for" {return FOR;}
"int" {return INI;}
"++" {return INC;}
[;] {return SEM;}
"<"|">"|"<="|">="|"=="|"="|"&&"|"||"|"and"|"or" {return OPR;}
[0-9]+ {return NUMBER;}
[A-Za-z][A-Za-z0-9_]* {return ID;}
" " {return S;}
[\t] ;
[\n] return 0;
. return yytext[0];
 
%%
 
int yywrap()
{
 return 1;
}