%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int yydebug=1;
FILE *yyin;
void yyerror(const char *);
extern int yylex();
%}

%token AWAIT ELSE IMPORT PASS NONE BREAK EXCEPT CLASS FALSE IN RAISE TRUE FINALLY IS AND CONTINUE MATCH
%token NOT WITH ASYNC ELIF IF OR YIELD LAMBDA TRY AS FROM NONLOCAL WHILE ASSERT DEL GLOBAL FOR DEF CASE
%token IDENTIFIER
%token FN
%token NUMBER STRING RETURN SINGLESTRING ZERO
%token EQUAL NOTEQUAL GTE SME
%token INTDIVIDE POWER
%token ASSIGN ASSIGNADD ASSIGNMINUS ASSIGNMUL ASSIGNDIVIDE ASSIGNINTDIVIDE ASSIGNPOWER ASSIGNMODULUS ASSIGNARRMUL ASSIGNANDBIT ASSIGNRIGHTSHIFT ASSIGNLEFTSHIFT ASSIGNXORBIT ASSIGNORBIT
%token RIGHTSHIFT LEFTSHIFT
%token INDENT DEDENT NEWLINE

%nonassoc EQUAL
%right ASSIGN
%right LAMBDA
%left '+' '-'
%left '*' '@' '/' INTDIVIDE '%'
%left LEFTSHIFT RIGHTSHIFT
%right NOT
%right POWER
%nonassoc '|'
%right ':'
%right '='
%right ')' ']'
%right '['
%right ','
%right AS
%right IDENTIFIER

%%

program :  {YYACCEPT;}
        | statements {YYACCEPT;}
        ;

statements : simple_stmt    {printf("simple\n");}
            // | compound_stmt {printf("compound\n");}
            ;

// compound_stmt : if_stmt
//                 | while_stmt
//                 | for_stmt
//                 | try_stmt
//                 // | with_stmt
//                 // | match_stmt
//                 | funcdef
//                 | classdef
//                 // | async_with_stmt
//                 | async_for_stmt
//                 | async_funcdef

// suite         : stmt_list NEWLINE | NEWLINE INDENT mystatement DEDENT
// mystatement   : statement | mystatement statement
// statement     : stmt_list NEWLINE | compound_stmt
// stmt_list     : simple_stmt
//                 | simple_stmt ';'
//                 | simple_stmt mysimplestmt
//                 | simple_stmt mysimplestmt ';'
// mysimplestmt  : ';' | mysimplestmt ';' simple_stmt

// if_stmt : IF assignment_expression ':' suite myelifstmt
//         | IF assignment_expression ':' suite
//         | IF assignment_expression ':' suite ELSE ':' suite
//         | IF assignment_expression ':' suite myelifstmt ELSE ':' suite

// myelifstmt : ELIF assignment_expression ':' suite | myelifstmt ELIF assignment_expression ':' suite

// while_stmt :  WHILE assignment_expression ':' suite | WHILE assignment_expression ':' suite ELSE ':' suite

// for_stmt :  FOR target_list IN starred_list ':' suite | FOR target_list IN starred_list ':' suite ELSE ':' suite

// try_stmt  :  try1_stmt | try2_stmt | try3_stmt

// try1_stmt : TRY ':' suite mytry1
//             | TRY ':' suite mytry1 ELSE ':' suite FINALLY ':' suite
//             | TRY ':' suite mytry1 ELSE ':' suite
//             | TRY ':' suite mytry1 FINALLY ':' suite

// mytry1    : myexcept1 | mytry1 myexcept1

// myexcept1 : EXCEPT ':' suite
//         | EXCEPT expression ':' suite
//         | EXCEPT expression AS IDENTIFIER ':' suite

// try2_stmt :TRY ':' suite mytry2
//             | TRY ':' suite mytry2 ELSE ':' suite FINALLY ':' suite
//             | TRY ':' suite mytry2 ELSE ':' suite
//             | TRY ':' suite mytry2 FINALLY ':' suite

// mytry2 : myexcept2 | mytry2 myexcept2

// myexcept2 : EXCEPT '*' expression ':' suite
//         | EXCEPT '*' expression AS IDENTIFIER ':' suite

// try3_stmt :  TRY ':' suite FINALLY ':' suite

// funcdef     : decorators DEF IDENTIFIER type_params '(' parameter_list ')' FN expression ':' suite
//             | DEF IDENTIFIER type_params '(' parameter_list ')' FN expression ':' suite
//             | DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite
//             | decorators DEF IDENTIFIER '(' ')' ':' suite
//             | DEF IDENTIFIER type_params '(' ')' ':' suite
//             | DEF IDENTIFIER '(' parameter_list ')' ':' suite
//             | DEF IDENTIFIER '(' ')' FN expression ':' suite
//             | DEF IDENTIFIER '(' ')' ':' suite
//             | DEF IDENTIFIER type_params '(' ')' FN expression ':' suite
//             | DEF IDENTIFIER type_params '(' parameter_list ')' ':' suite
//             | decorators DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite
//             | decorators DEF IDENTIFIER '(' ')' FN expression ':' suite
//             | decorators DEF IDENTIFIER type_params '(' ')' FN expression ':' suite
//             | decorators DEF IDENTIFIER type_params '(' ')' ':' suite
//             | decorators DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite
//             | decorators DEF IDENTIFIER type_params '(' parameter_list ')' FN expression ':' suite
// decorators  :  decorator | decorators decorator
// decorator   :  '@' assignment_expression NEWLINE

// classdef    : decorators CLASS IDENTIFIER type_params inheritance ':' suite
//             | decorators CLASS IDENTIFIER type_params ':' suite
//             | decorators CLASS IDENTIFIER inheritance ':' suite
//             | decorators CLASS IDENTIFIER ':' suite
//             | CLASS IDENTIFIER inheritance ':' suite
//             | CLASS IDENTIFIER type_params inheritance ':' suite
//             | CLASS IDENTIFIER type_params ':' suite
//             | CLASS IDENTIFIER ':' suite
// inheritance : '(' ')'
//             // | '(' argument_list ')'

// async_funcdef : decorators ASYNC DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite
//             | decorators ASYNC DEF IDENTIFIER '(' ')' ':' suite
//             | ASYNC DEF IDENTIFIER '(' parameter_list ')' ':' suite
//             | ASYNC DEF IDENTIFIER '(' ')' FN expression ':' suite
//             | decorators ASYNC DEF IDENTIFIER '(' parameter_list ')' ':' suite
//             | decorators ASYNC DEF IDENTIFIER '(' ')' FN expression ':' suite
//             | ASYNC DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite
//             | ASYNC DEF IDENTIFIER '(' ')' ':' suite

// async_for_stmt : ASYNC for_stmt

// type_params  :  '[' type_param ']' | '[' type_param mytypeparam ']'
// mytypeparam  : ',' type_param | ',' type_param mytypeparam
// type_param   :  typevar | typevartuple | paramspec
// typevar      :  IDENTIFIER ':' expression | IDENTIFIER
// typevartuple :  '*' IDENTIFIER
// paramspec    :  POWER IDENTIFIER

simple_stmt : assert_stmt
            | assignment_stmt
            | starred_item
            | augmented_assignment_stmt
            | PASS
            | del_stmt
            | return_stmt
            | yield_expression
            | raise_stmt
            | BREAK
            | CONTINUE
            | import_stmt
            | global_stmt
            | nonlocal_stmt
            ;

assert_stmt :  ASSERT expression ',' expression | ASSERT expression

assignment_stmt : mytargetlist starred_item {printf("assignment_stmt\n");}
                | mytargetlist yield_expression

mytargetlist    : mytargetlist target_list '='
                | mytargetlist IDENTIFIER '='
                | mytargetlist slicing '='
                | mytargetlist '[' ']' '='
                | mytargetlist '(' ')' '='
                | target_list '='
                | IDENTIFIER '=' {printf("assign identifier\n");}
                | slicing '='
                | '(' ')' '='
                | '[' ']' '='

augmented_assignment_stmt : slicing augop expression_list
                            | IDENTIFIER augop expression_list
                            | slicing augop yield_expression
                            | IDENTIFIER augop yield_expression

augop : ASSIGNADD | ASSIGNMINUS | ASSIGNMUL | ASSIGNARRMUL | ASSIGNDIVIDE | ASSIGNINTDIVIDE | ASSIGNMODULUS
    | ASSIGNPOWER | ASSIGNLEFTSHIFT | ASSIGNRIGHTSHIFT | ASSIGNANDBIT | ASSIGNXORBIT | ASSIGNORBIT

return_stmt : RETURN expression_list | RETURN

raise_stmt :  RAISE | RAISE expression FROM expression | RAISE expression

del_stmt : DEL target_list | DEL IDENTIFIER | DEL slicing | DEL '(' ')' | DEL '[' ']'

relative_module : '.' | module | '.' relative_module

comparison    : or_expr %prec NOT | or_expr mycomparison %prec NOT ;

mycomparison : mycomparison comp_operator or_expr | comp_operator or_expr ;

comp_operator : '<' | '>' | EQUAL | GTE | SME | NOTEQUAL | IS | IS NOT | NOT IN| IN

and_expr : shift_expr | and_expr '&' shift_expr

xor_expr : and_expr | xor_expr '^' and_expr

or_expr  : xor_expr | or_expr '|' xor_expr

shift_expr : a_expr | shift_expr shifter a_expr

shifter : LEFTSHIFT | RIGHTSHIFT;

u_expr : power | '-' u_expr | '+' u_expr | '~' u_expr | IDENTIFIER;

m_expr : u_expr | m_expr '*' u_expr | m_expr '@' m_expr | m_expr INTDIVIDE u_expr | m_expr '/' u_expr | m_expr '%' u_expr ;

a_expr : m_expr | a_expr '+' m_expr | a_expr '-' m_expr ;

await_expr : AWAIT primary  | AWAIT slicing  | AWAIT IDENTIFIER ;

power : firstpower | firstpower mypower | IDENTIFIER mypower | slicing %prec ')' | slicing mypower;

firstpower : await_expr | primary;

mypower : POWER u_expr{};

primary : atom
        // | call
        ;

slicing     : primary '[' slice_list ']'
            | slicing '[' slice_list ']' 
            | IDENTIFIER '[' slice_list ']'
            ;

slice_list   : slice_item mysliceitem

mysliceitem  : {} | ',' slice_item mysliceitem | ','

slice_item   : expression | proper_slice

proper_slice : ':'
            | ':' ':'
            | ':' ':' expression
            | ':' expression ':'
            | ':' expression ':' expression
            | expression ':' expression ':' expression
            | expression ':' expression ':'
            | expression ':' expression
            | expression ':' ':' expression
            | expression ':' ':'
            | expression ':'
            ;

parameter_list          : defparameter mydefparameter ',' '/' ',' parameter_list_no_posonly
                        | defparameter mydefparameter ',' '/' ','
                        | defparameter mydefparameter ',' '/'
                        | parameter_list_no_posonly

parameter_list_no_posonly : defparameter mydefparameter ',' parameter_list_starargs
                            | defparameter mydefparameter ','
                            | defparameter mydefparameter
                            | parameter_list_starargs

mydefparameter            :  {} %prec ',' | ',' defparameter mydefparameter

parameter_list_starargs : '*' parameter mydefparameter ',' POWER parameter ','
                        | '*' parameter mydefparameter ',' POWER parameter
                        | '*' parameter mydefparameter ','
                        | '*' parameter mydefparameter
                        | '*' mydefparameter ',' POWER parameter ','
                        | '*' mydefparameter ',' POWER parameter
                        | '*' mydefparameter ','
                        | '*' mydefparameter
                        | POWER parameter ','
                        | POWER parameter

defparameter              : parameter | parameter '=' expression

//######
enclosure : parenth_form | list_display | dict_display | set_display | generator_expression | yield_atom ;

parenth_form : '(' starred_item ')' | '(' expression ')';

list_display : '[' starred_list ']' | '[' comprehension ']' ;

set_display :  '{' starred_list  '}' | '{' comprehension '}' ;

dict_display       : '{' '}' | '{' dict_item_list '}' | '{' dict_comprehension '}' ;

generator_expression : '(' expression comp_for ')' ;

yield_atom : '(' yield_expression ')' ;

//######
starred_list       : starred_item mystarreditem ;

comprehension :  assignment_expression comp_for | expression comp_for ;

dict_item_list     : dict_item | dict_item ',' | dict_item mydictitem | dict_item mydictitem ',' ;

mydictitem         : ',' dict_item | ',' dict_item mydictitem;

dict_comprehension :  expression ':' expression comp_for ;

yield_expression : YIELD | YIELD expression_list | YIELD FROM expression ;

comp_for    : ASYNC FOR target_list IN or_test comp_iter
            | ASYNC FOR IDENTIFIER IN or_test comp_iter
            | ASYNC FOR slicing IN or_test comp_iter
            | ASYNC FOR '[' ']' IN or_test comp_iter
            | ASYNC FOR '(' ')' IN or_test comp_iter
            | FOR target_list IN or_test comp_iter
            | FOR IDENTIFIER IN or_test comp_iter
            | FOR slicing IN or_test comp_iter
            | FOR '(' ')' IN or_test comp_iter
            | FOR '[' ']' IN or_test comp_iter
            | ASYNC FOR target_list IN or_test
            | ASYNC FOR IDENTIFIER IN or_test
            | ASYNC FOR slicing IN or_test
            | ASYNC FOR '[' ']' IN or_test
            | ASYNC FOR '(' ')' IN or_test
            | FOR target_list IN or_test
            | FOR IDENTIFIER IN or_test
            | FOR slicing IN or_test
            | FOR '(' ')' IN or_test
            | FOR '[' ']' IN or_test
            ;

expression : conditional_expression
            | lambda_expr
            ;

//######
starred_item : starred_item assignment_expression ','
            | starred_item expression ',';
            | assignment_expression
            | expression %prec ')'

mystarreditem      :  {} | ',' starred_item mystarreditem | ',' ;

dict_item          :  expression ':' expression | POWER or_expr ;

expression_list    :  expression myexpression ;

myexpression       :  {} | ',' expression myexpression | ',' ;

conditional_expression : or_test | or_test IF or_test ELSE expression ;

lambda_expr : LAMBDA ':' expression | LAMBDA parameter_list ':' expression ;

target_list     : target %prec ','
                | target ','
                | target mytarget %prec ','
                | target mytarget ','
                | slicing mytarget %prec ','
                | slicing mytarget ','
                | slicing ','
                | '[' ']' mytarget %prec ','
                | '[' ']' mytarget ','
                | '[' ']' ','
                | '(' ')' mytarget %prec ','
                | '(' ')' mytarget ','
                | '(' ')' ','
                | IDENTIFIER mytarget %prec ','
                | IDENTIFIER mytarget ','
                | IDENTIFIER ','
                ;

mytarget        : ',' target
                | mytarget ',' target
                // | myidentifier %prec ','
                | IDENTIFIER
                | mytarget ',' slicing
                | ',' slicing
                | mytarget ',' '[' ']'
                | ',' '[' ']'
                | mytarget ',' '(' ')'
                | ',' '(' ')'
                | mytarget ',' '*' target
                | ',' '*' target
                ;

or_test  : and_test | or_test OR and_test ;

and_test : not_test | and_test AND not_test ;

not_test : comparison | NOT not_test ;

comp_iter     :  comp_for | comp_if ;

comp_if       :  IF or_test comp_iter | IF or_test ;

//####
target : '[' target_list ']'
        | '[' IDENTIFIER ']'
        | '[' slicing ']'
        | '[' '[' ']' ']'
        | '[' '(' ')' ']'
        | '(' target_list ')'
        | '(' slicing ')'
        | '(' '(' ')' ')'
        | '(' '[' ']' ')'
        | '(' IDENTIFIER ')'
        | '(' '*' target ')'
        | '[' '*' target ']'
        ;

assignment_expression : IDENTIFIER ASSIGN expression %prec ASSIGN;

parameter : IDENTIFIER %prec ':' | IDENTIFIER ':' expression ;

atom      : NUMBER {printf("number\n");} | enclosure | '[' ']' | '(' ')' ;

nonlocal_stmt : NONLOCAL IDENTIFIER
                // | NONLOCAL IDENTIFIER myidentifier ;

global_stmt : GLOBAL IDENTIFIER
            // | GLOBAL IDENTIFIER myidentifier ;

// myidentifier : ',' IDENTIFIER | myidentifier ',' IDENTIFIER ;

import_stmt     : IMPORT module AS IDENTIFIER mymodule
                | IMPORT module mymodule
                | FROM relative_module IMPORT IDENTIFIER AS IDENTIFIER mymoduleidentifier
                | FROM relative_module IMPORT IDENTIFIER mymoduleidentifier
                | FROM relative_module IMPORT '(' IDENTIFIER AS IDENTIFIER mymoduleidentifier ',' ')'
                | FROM relative_module IMPORT '(' IDENTIFIER AS IDENTIFIER mymoduleidentifier ')'
                | FROM relative_module IMPORT '(' IDENTIFIER mymoduleidentifier ',' ')'
                | FROM relative_module IMPORT '(' IDENTIFIER mymoduleidentifier ')'
                | FROM relative_module IMPORT '*'

mymodule        :  {} | ',' module mymodule | ',' module AS IDENTIFIER mymodule ;

module          : identifiermodule IDENTIFIER ;

identifiermodule    :  {} | identifiermodule IDENTIFIER '.'

mymoduleidentifier :  {} %prec ','
                    // | myidentifier %prec AS
                    | ',' IDENTIFIER %prec AS
                    | ',' IDENTIFIER AS IDENTIFIER
                    // | mymoduleidentifier myidentifier AS IDENTIFIER ;

/*call        : primary '(' ')'
            | primary '(' argument_list ',' ')'
            | primary '(' argument_list ')'
            | primary '(' comprehension ')'
            | slicing '(' ')'
            | slicing '(' argument_list ',' ')'
            | slicing '(' argument_list ')'
            | slicing '(' comprehension ')'
            ;
argument_list       : positional_arguments ',' starred_and_keywords ',' keywords_arguments
                    | positional_arguments ',' starred_and_keywords ',' keyword_item %prec '='
                    | positional_arguments ',' keywords_arguments
                    | positional_arguments ',' keyword_item %prec '='
                    | positional_arguments ',' starred_and_keywords
                    | starred_and_keywords ',' keywords_arguments
                    | starred_and_keywords ',' keyword_item %prec '='
                    | starred_and_keywords %prec ','
                    | positional_arguments %prec ','
                    | keyword_item %prec '='
                    | keywords_arguments
positional_arguments :  positional_item mypositionalitem
mypositionalitem     :  {} %prec ',' | ',' positional_item mypositionalitem
positional_item      :  assignment_expression | '*' expression
// starred_and_keywords :  ('*' expression | keyword_item) (',' '*' expression | ',' keyword_item)*
starred_and_keywords :  '*' expression expressionkeyworditem
                        | '*' expression %prec '='
                        | keyword_item %prec '='
                        | keyword_item expressionkeyworditem
expressionkeyworditem :  {} %prec ',' | ',' '*' expression expressionkeyworditem | ',' keyword_item expressionkeyworditem
// keywords_arguments   :  (keyword_item | '**' expression) (',' keyword_item | ',' '**' expression)*
keywords_arguments : keyword_item expressionkeywordsarguments
                    | POWER expression expressionkeywordsarguments
                    | POWER expression %prec '='
expressionkeywordsarguments :  {} %prec ',' | ',' POWER expression | ',' keyword_item expressionkeywordsarguments
keyword_item         : IDENTIFIER '=' expression %prec '=' ;

starred_expression ::=  expression | (starred_item ",")* [starred_item]
annotated_assignment_stmt ::=  augtarget ":" expression ["=" (starred_expression | yield_expression)]
subscription ::=  primary "[" expression_list "]"
attributeref ::=  primary "." identifier
future_stmt ::=  "from" "__future__" "import" feature ["as" identifier] ("," feature ["as" identifier])*
            | "from" "__future__" "import" "(" feature ["as" identifier] ("," feature ["as" identifier])* [","] ")"
feature     ::=  identifier
type_stmt ::=  'type' identifier [type_params] "=" expression
with_stmt          :  WITH ( '(' with_stmt_contents ','? ')' | with_stmt_contents ) ':' suite
with_stmt_contents :  with_item | with_item mywithitem
mywithitem         :  ',' with_item | mywithitem with_item
with_item          : expression AS target | expression
match_stmt   :  MATCH subject_expr ':' NEWLINE INDENT mycaseblock DEDENT
mycaseblock  : case_block | mycaseblock case_block
subject_expr : star_named_expression ',' star_named_expressions? | named_expression
case_block   :  CASE patterns ':' block | CASE patterns guard ':' block
guard :  IF assignment_expression
*/

%%

void main(int argc, char **argv)
{
    if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
    yyparse();
}

void yyerror(const char *msg)
    {
        printf(" %s \n", msg);
    }