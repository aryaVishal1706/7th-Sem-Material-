%{
#include<stdio.h>
%}

%%


[0-9]+\s*[=]\s*[0-9]+\s*[+]\s*[0-9]+\s* {printf("This is an Equation.");}
[a-z A-Z _][a-z A-Z 0-9 _]* {printf("It is an Identifier.");}
[0-9 a-z A-Z _]* {printf("Wrong Identifier.");}

%%
 
int main(){
yylex();
}