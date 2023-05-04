%{
#include<stdio.h>
%}
%%
[6-9][0-9]+ {printf("\ngiven number is valid.",yytext);}
.+ {printf("\number is not valid.",yytext);}
%%

int yywrap(){}
int main()
{
while(yylex());
}
