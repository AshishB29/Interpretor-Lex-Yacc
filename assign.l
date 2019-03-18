%{
#include<stdio.h>
#include <stdlib.h> 
#include "header.h" 
#include "y.tab.h" 
void yyerror(char *); 
%} 
%% 

"=="            return EQ; 

"while"         return WHILE; 
"if"            return IF; 

"return"        return RETURN;

[a-zA-Z]+       {  yylval.sIndex = *yytext -'a'; return SYMBOL; 
            }

[0-9]+      { 
                yylval.iValue = atoi(yytext);  return INTEGER; 
            }

[@+*<=;\[\]] { 
            	    return *yytext ; 
             }

[?]			{
			printf("Found Exit Character\n");
			exit(0);
}


[ \t\n]+        ;       
.               yyerror("Unknown character"); 
%% 

int yywrap(void) { 
    return 1; 
} 