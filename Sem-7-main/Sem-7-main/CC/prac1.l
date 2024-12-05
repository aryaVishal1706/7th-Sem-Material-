%{
%}

%%
("//".*"\n") {printf("comment ");}
("/*"(.*)"*/") {printf("m-comment ");}
("for"|"while"|"if"|"else"|"do"|"switch"|"case").* {printf("Keyword ");}
"<="|"=="|"="|"++"|"-"|"*"|"+" {printf("operator ");}
[_a-zA-Z][_a-zA-Z0-9]* {printf("Indentifiers ");}
[0-9]+ {printf("Constants ");}
%%


int yywrap(){}
void main(int argc, char **argv)
{
yylex();

}