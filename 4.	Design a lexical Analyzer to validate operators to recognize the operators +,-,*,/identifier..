%{
#include<stdio.h>
%}
%%
[a-zA-Z][a-zA-Z0-9]+ {printf("\n%s is identifier",yytext);}
.+ {printf("\n%s is not an identifier",yytext);}
%%

int yywrap(){}
int main()
{
while(yylex());
}
