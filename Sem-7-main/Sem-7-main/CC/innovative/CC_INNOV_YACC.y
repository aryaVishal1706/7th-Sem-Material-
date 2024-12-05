%{
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include <stdarg.h>
 int yylex();
 void yyerror(const char *s);
 extern char yytext[];
 #define YYDEBUG_LEXER_TEXT yytext
 char* code_concatenate(int arg_count,...);
 char* gen_addr(char* string);
 char* get_specifier(char *type);
 int t=0;
 extern int yylineno;
%}
%token BEG END INIT TO IF FOR THEN WHILE DO PRINT READ ASSIGN FLOATING_NUMBER BREAK RETURN END_FUNCTION START_PROCEDURE CLOSE_BRACKET OPEN_BRACKET EXP DIV MUL MINUS PLUS NOT ELSE ENDIF COMMA NEWLINE ENDWHILE

%union {char* dataType; char* IdName; struct attributes{
 char* code;
 char* addr;
 char* specifier;
}A;}

%token <dataType> INT FLOAT CHAR DOUBLE LONG
%token <IdName> ID NUM LESS GREAT LESS_E GREAT_E NOT_EQUAL EQUAL OR AND NAME_PROCEDURE
%type <dataType> datatype
%type <IdName> relOp logOp

%type<A> F T E  assign_stmt initialize_stmt Stmt codes program Expr RelExpr LogExpr parameter_list function_call function read_stmt print_stmt
%type<A> datatypelist namelist
//%left ASSIGN
//%left GREAT_E GREAT LESS_E NOT LESS EQUAL NOT_EQUAL
//%left PLUS MINUS
//%left MUL DIVISON
 
%%
  program: BEG codes END NEWLINE {$$=$2;printf("\nC code: \n%s",$$.code); YYACCEPT;}
          ;

   codes:Stmt {$$.code=$1.code;}
       | codes Stmt {$$.code=code_concatenate(2,$1.code,$2.code);}
       ;

  Stmt:Expr {$$=$1;}
        | RETURN Expr {$$.code=code_concatenate(3,"return b",$2.code,";\n");}
        | assign_stmt {$$.code=$1.code;}
        | initialize_stmt {$$.code=$1.code;}
        | read_stmt {$$.code=$1.code;}  
        | print_stmt {$$.code=$1.code;}
        | BREAK {$$.code=code_concatenate(1,"break;\n");}
        | IF Expr THEN Stmt ENDIF {$$.code=code_concatenate(5,"\nif(",$2.code,"){\n ",$4.code,"\n}");}
        | IF Expr THEN Stmt ELSE Stmt ENDIF {$$.code=code_concatenate(7,"\nif(",$2.code,"){\n ",$4.code,"\n}else{\n ",$6.code,"\n}");}
        | WHILE Expr THEN Stmt ENDWHILE {$$.code=code_concatenate(5,"\nwhile(",$2.code,"){\n ",$4.code," \n}\n");}
        | DO Stmt WHILE Expr {$$.code=code_concatenate(5,"\ndo\n{\n ",$2.code,"\n}while(",$4.code,");\n");}  
        | FOR assign_stmt Expr assign_stmt Stmt {$$.code=code_concatenate(8,"\nfor(", $2.code, $3.code, "; ", $4.code, ")\n{\n ", $5.code, "\n}\n");}          
        | function {$$=$1;}
        | function_call {$$=$1;}
          ;
       
function_call: NAME_PROCEDURE OPEN_BRACKET parameter_list CLOSE_BRACKET { $$.code=code_concatenate(5,"\n",$1,"(",$3.code,");\n");}
              ;

  Expr:RelExpr {$$=$1;}
       | LogExpr {$$=$1;}
       | E {$$=$1;}
       ;

print_stmt: PRINT datatypelist COMMA Expr {$$.code=code_concatenate(5,"printf(\" ",$2.code,"\",",$4.code,");\n");}
   | PRINT datatypelist COMMA ID {$$.code=code_concatenate(5,"printf(\" ",$2.code,"\" ,",$4,");\n");}
          ;

read_stmt: READ datatypelist COMMA namelist {$$.code=code_concatenate(5,"scanf(\"",$2.code,"\",",$4.code,");\n");}
          ;
       
RelExpr:E relOp E {$$.code = code_concatenate(1,code_concatenate(3,$1.addr,$2,$3.addr,";"));}
        ;

LogExpr:E logOp E {$$.code = code_concatenate(1,code_concatenate(3,$1.addr,$2,$3.addr,";"));}
        ;

assign_stmt: INIT ID TO E { $$.addr=gen_addr($2);
    $$.code = code_concatenate(3,$4.code,code_concatenate(3,$$.addr," = ",$4.addr),";");}
            | ID ASSIGN E { $$.addr = gen_addr($1);  
    $$.code = code_concatenate(3,$3.code,code_concatenate(3,$$.addr," = ",$3.addr),";");}
            ;
initialize_stmt: INIT OPEN_BRACKET ID datatype CLOSE_BRACKET {$$.code=code_concatenate(2,code_concatenate(3,$4," ",$3),";\n");}
                ;

function: START_PROCEDURE NAME_PROCEDURE OPEN_BRACKET parameter_list CLOSE_BRACKET Stmt END_FUNCTION datatype { $$.code = code_concatenate(8,$8," ",$2,"(",$4.code,")\n{\n",$6.code,"\n}\n");}
         ;
           

parameter_list: ID datatype {$$.code=code_concatenate(3,$2," ",$1);}
               | parameter_list COMMA ID datatype {$$.code=code_concatenate(5,$1.code,",",$4," ",$3);}
               ;
E: E PLUS T {$$.addr = code_concatenate(1,code_concatenate(3,$1.addr," + ",$3.addr,";")); }
 | E MINUS T {$$.addr = code_concatenate(1,code_concatenate(3,$1.addr," - ",$3.addr,";")); }
    | T {$$.addr = $1.addr;}
    ;

T: T MUL F {$$.addr = code_concatenate(1,code_concatenate(3,$1.addr," * ",$3.addr,";")); }
   | T DIV F {$$.addr = code_concatenate(1,code_concatenate(3,$1.addr," / ",$3.addr,";")); }
   | F {$$.addr = $1.addr;}
 
   ;

F: ID {$$.addr = gen_addr($1); $$.code = code_concatenate(1," ");}
   | NUM {$$.addr = gen_addr($1); $$.code = code_concatenate(1," ");;}
   | OPEN_BRACKET E CLOSE_BRACKET {$$=$2;}
   ;
   



relOp:LESS_E {$$=$1;}
     |GREAT_E {$$=$1;}
     |NOT_EQUAL {$$=$1;}
     |EQUAL {$$=$1;}
   |LESS {$$=$1;}
   |GREAT {$$=$1;}
   ;

logOp:AND {$$=$1;}
      |OR {$$=$1;}
      ;


datatypelist: datatype { $$.specifier=get_specifier($1);$$.code=code_concatenate(1,$$.specifier);}
             | datatypelist COMMA datatype { $$.specifier=get_specifier($3);$$.code=code_concatenate(3,$1.code,",",$$.specifier);}
             ;

namelist: ID {$$.code=code_concatenate(1,$1);}
         | namelist COMMA ID {$$.code=code_concatenate(3,$1.code,",",$3);}  
   
         ;

datatype: CHAR {$$ = $1;}
      | INT {$$ = $1;}
      | DOUBLE {$$ = $1;}
      | FLOAT {$$ = $1;}
      | LONG {$$ = $1;}
      ;
             

%%

int yywrap()
{
  return 1;
}
void yyerror(const char* arg)
{
 printf("%s\n",arg);
}


char* gen_addr(char* string)
{
 char* addr = (char*)malloc(sizeof(string));
 strcpy(addr, string);
 return addr;
}

char* code_concatenate(int arg_count,...)
{
 int i;
 va_list ap;
 va_start(ap, arg_count);
 char* temp = malloc(1000);
 for (i = 1; i <= arg_count; i++)
    {  
      char* a = va_arg(ap,char*);
      temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
      strcat(temp,a);
     }
     return temp;    
}

char* get_specifier(char *type){
 char* data;
 if(strcmp(type,"int")==0|| strcmp(type,"integer")==0)
  data="%d";
 else if(strcmp(type,"float")==0)
  data="%f";
 else if(strcmp(type,"char")==0 || strcmp(type,"character")==0)
  data="%c";
 else if (strcmp(type,"double")==0)
  data="%f";
 else if(strcmp(type,"long")==0)
  data="%ld";
 return data;
}

int main()
{
 extern FILE *yyin;
 yyin=fopen("input.txt","r");
 if(!yyparse())
 {
  printf("\n");
 
 }
 fclose(yyin);
 return 0;
}