%{
  #include<stdio.h>
  int flag=0;
  extern int yylex();
  void yyerror(const char* msg);
%}
 
%token IF OPR NUMBER ID ELSE S WHILE FOR INI INC SEM

%%
IfExpression: W
  {
         //printf("\nResult=%d\n", $$);
         return 0;
  };
 
 
 
 W: WHILE '('C')''{'P'}';
 F: FOR '('I')''{'P'}';
 E: IF '('C')''{'P'}' | IF '('C')''{'P'}' ELSE '{'P'}';
 I: INI S ID OPR T SEM C SEM ID INC;
 C: T OPR T;
 P: S | E | F | W | C;
 T: NUMBER
 | ID;
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