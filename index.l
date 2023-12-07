%x STRINGG
%x SINGLESTRINGG
%x MLCOMMENTSTATE
%s newline

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <ctype.h>
    #include <math.h>
    #include <string.h>
    #include "y.tab.h"

    int yylineno=1;
    int numberofindent=0;
    char* string_literal_value = NULL;
%}

letter          [a-zA-Z]

digit           [1-9]

id              ({letter}|_)({letter}|{digit}|0|_)*

num             {digit}({digit}|0)*

floatnum        0?{num}(\.|([eE][^jJ][+-]?)|(\.([eE][^jJ][+-]?)))({digit}|0)*

complexnumber   0?({floatnum}|{num})[jJ]

binarynum       0[bB](0|1)*

octalnum        0[oO][0-7]*

hexadecimalnum  0[xX]({digit}|[0a-fA-F])*

zero            0

indent          ^[ \t]+

ws              [ \t\v\f\r]+

comment         "#".*[^\n]

mlcomment       \"\"\"(.[^\"\"\"]|\n)*

%%

<newline>{
{num}|{floatnum}|{complexnumber}|{binarynum}|{octalnum}|{hexadecimalnum}|{id}|{zero}|"("|")"|"["|"]"|"{"|"}"|\"|\'|\n|def|False|await|import|else|pass|break|None|except|in|raise|True|class|finally|is|return|and|continue|for|lambda|try|as|from|nonlocal|while|assert|del|global|not|with|async|elif|if|or|yield {

    for(int i = 0; i < yyleng; i++){
        unput(yytext[i]);
    }
    BEGIN(INITIAL);
    return DEDENT;
}
}
def                         {return DEF;}
False                       {return FALSE;}
await                       {return AWAIT;}
import                        {return IMPORT;}
else                        {return ELSE;}
pass                        {return PASS;}
break                        {return BREAK;}
None                        {return NONE;}
except                        {return EXCEPT;}
in                        {return IN;}
raise                        {return RAISE;}
True                        {return TRUE;}
class                        {return CLASS;}
finally                        {return FINALLY;}
is                        {return IS;}
return                        {return RETURN;}
and                        {return AND;}
continue                        {return CONTINUE;}
for                        {return FOR;}
lambda                        {return LAMBDA;}
try                        {return TRY;}
as                        {return AS;}
from                        {return FROM;}
nonlocal                        {return NONLOCAL;}
while                        {return WHILE;}
assert                        {return ASSERT;}
del                        {return DEL;}
global                        {return GLOBAL;}
not                        {return NOT;}
with                        {return WITH;}
async                        {return ASYNC;}
elif                        {return ELIF;}
if                        {return IF;}
or                        {return OR;}
yield                        {return YIELD;}
match                        {return MATCH;}
case                        {return CASE;}

[\n]                        {
                                yylineno++;
                                BEGIN(newline);
                                return NEWLINE;
                            }

{indent}                    {
                                int dis = yyleng - numberofindent;
                                numberofindent = yyleng;
                                if(dis > 0)
                                {
                                    BEGIN(INITIAL);
                                    return INDENT;
                                }
                                else if(dis < 0)
                                {
                                    BEGIN(INITIAL);
                                    return DEDENT;
                                }
                                else
                                    BEGIN(INITIAL);
                            }

{ws}                        {}

<STRINGG>[^\"\n\\]+          {
                                string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
                                strcat(string_literal_value, yytext);
                            }

<STRINGG,SINGLESTRINGG>\\n   {
                                string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + 1);
                                strcat(string_literal_value, "\n");
                                printf("new line\n");
                            }

<STRINGG,SINGLESTRINGG>\\\"           {
                                        string_literal_value = realloc(string_literal_value, strlen(string_literal_value) +1);
                                        strcat(string_literal_value, "\"");
                                    }

<STRINGG,SINGLESTRINGG>(\\|\\\\)      {
                                        string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + 1);
                                        strcat(string_literal_value, "\\");
                                        printf("backslash\n");
                                    }

<STRINGG,SINGLESTRINGG>\\\n         {
                                        string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + 1);
                                        strcat(string_literal_value, "");
                                        printf("backslash gone with new line\n");
                                    }

<STRINGG,SINGLESTRINGG>\n           {
                                        string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + 1);
                                        strcat(string_literal_value, "");
                                        printf("Error\n");
                                    }

<STRINGG,SINGLESTRINGG>\\'          {
                                        string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + 1);
                                        strcat(string_literal_value, "'");
                                        printf("single quotation\n");
                                    }

<STRINGG>\"                 {
                                BEGIN(INITIAL);
                                printf("the end of STate: %s\n", string_literal_value);
                            }

<SINGLESTRINGG>[^\'\n\\]+   {
                                string_literal_value = realloc(string_literal_value, strlen(string_literal_value) + yyleng + 1);
                                strcat(string_literal_value, yytext);
                            }

<SINGLESTRINGG>\'           {
                                BEGIN(INITIAL);
                                printf("the end of STate: %s\n", string_literal_value);
                            }

{comment}                           {printf("comment = %s in line = %d\n",yytext,yylineno);}

">>="   {return ASSIGNRIGHTSHIFT;}

"+="    {return ASSIGNADD;}

"-="    {return ASSIGNMINUS;}

"*="    {return ASSIGNMUL;}

"/="    {return ASSIGNDIVIDE;}

"//="    {return ASSIGNINTDIVIDE;}

"**="    {return ASSIGNPOWER;}

"%="    {return ASSIGNMODULUS;}

"@="    {return ASSIGNARRMUL;}

"&="    {return ASSIGNANDBIT;}

"|="    {return ASSIGNORBIT;}

"^="    {return ASSIGNXORBIT;}

"<<="    {return ASSIGNLEFTSHIFT;}

"**"    {return POWER;}

"//"    {return INTDIVIDE;}

"<="    {return SME;}

">="    {return GTE;}

"=="    {return EQUAL;}

"!="    {return NOTEQUAL;}

">>"    {return RIGHTSHIFT;}

"<<"    {return LEFTSHIFT;}

":="    {return ASSIGN;}

"->"    {return FN;}

{id}                         {return IDENTIFIER;}

{zero}|{num}|{floatnum}|{complexnumber}|{binarynum}|{octalnum}|{hexadecimalnum}           {return NUMBER;}

\" {
                    BEGIN(STRINGG);
                    string_literal_value = strdup("");  // Initialize the string literal value
}

\' {
                    BEGIN(SINGLESTRINGG);
                    string_literal_value = strdup("");  // Initialize the string literal value
}

{mlcomment}         {
                        BEGIN(MLCOMMENTSTATE);
                        printf("multiline comment = %s\n",yytext,yylineno);
                    }

<MLCOMMENTSTATE>\"\"\"      {
                            BEGIN(INITIAL);
                            printf("End of multiline comment = %s in line = %d\n",yytext,yylineno);
                            }

"("|")"|"["|"]"|"{"|"}"|":"|"="|","|"+"|"-"|"*"|"/"|"%"|"@"|">"|"<"|"&"|"|"|"^"|"~"|";"                {return yytext[0];}

%%

// void main(int argc, char **argv)
// {
//     if (argc > 1){
//         for(int i = 0; i < argc; i++)
//             printf("value of argv[%d] = %s\n\n",i,argv[i]);
//         yyin = fopen(argv[1], "r");
//     }
//     else
//         yyin = stdin;
//     yylex();
// }
/*yywrap is called whenever lex reaches an end-of-file we must define this function because yylex() need it*/
int yywrap(){
    exit(0);
}