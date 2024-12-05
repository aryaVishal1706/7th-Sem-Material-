%{
/* Definition section */
#include<stdio.h>
#include "y.tab.h"

%}

/* Rule Section */
%%
[a-zA-Z] {
   
    return LETTER;
}

[0-9]+ {

    return DIGIT;
}

[\t] ;

[\n] return 0;

. return yytext[0];
%%

int yywrap()
{
    return 1;
}
