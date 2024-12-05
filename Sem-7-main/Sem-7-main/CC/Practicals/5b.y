%{

#include<stdio.h>
int flag = 0;
extern int yylex();
void yyerror(const char* msg); 
%}

%token DIGIT
%token LETTER EPS


%%
ArithmeticExpression: S {
    printf("\nResult=%d\n", $1);
}
;

S: L A|;
A: M A| D A|;
L: LETTER;
M: LETTER;
D: DIGIT;

%%

int main()
{
    printf("\nEnter the string:\n");
    yyparse();
    if (flag == 0)
        printf("\nEntered String is Valid\n\n");
    return 0;
}

void yyerror(const char* msg)
{
    printf("\nEntered String is Invalid\n\n");
    flag = 1;
}

