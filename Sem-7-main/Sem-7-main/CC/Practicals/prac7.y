%{
  #include<stdio.h>
  int flag=0;
  extern int yylex();
  void yyerror(const char* msg);
%}
 
%token IF OPR NUMBER ID ELSE S

%%
IfExpression: E
  {
         //printf("\nResult=%d\n", $$);
         return 0;
  };
 
 E: IF '('C')''{'C'}' | IF '('C')''{'C'}' ELSE '{'C'}';
 C: T OPR T | S |E;
 T: NUMBER | ID;
%%

void main()
{
   printf("\nEnter Statement\n");
   yyparse();
   if(flag==0)
   printf("\nValid Statement\n\n");
}
 
void yyerror(const char* msg)
{
   printf("\nInvalid Statement\n\n");
   flag=1;
}

