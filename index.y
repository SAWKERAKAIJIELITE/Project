
%code requires {
    #include <iostream>
    #include <string>
    #include <unistd.h>
    #include "python_ast_node.hpp"
}

%union{
    AstNode* astNode;
    IdentifierNode* idNode;
    int d;
}

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yydebug=1;
    extern FILE *yyin;
    void yyerror(const char *);
    extern int yylex();
    extern int yyparse();
    AstNode* root = NULL;
    int n_nodes = 0;
%}

%token <astNode> AWAIT ELSE IMPORT PASS NONE BREAK EXCEPT CLASS FALSEE IN RAISE TRUEE FINALLY IS AND CONTINUE MATCH
%token <astNode> NOT WITH ASYNC ELIF IF OR YIELD LAMBDA TRY AS FROM NONLOCAL WHILE ASSERT DEL GLOBAL FOR DEF CASE
%token <astNode> IDENTIFIER
%token <astNode> FN END
%token <astNode> NUMBER STRING RETURN SINGLESTRING ZERO
%token <astNode> EQUAL NOTEQUAL GTE SME
%token <astNode> INTDIVIDE POWER
%token <astNode> ASSIGN ASSIGNADD ASSIGNMINUS ASSIGNMUL ASSIGNDIVIDE ASSIGNINTDIVIDE ASSIGNPOWER ASSIGNMODULUS ASSIGNARRMUL ASSIGNANDBIT ASSIGNRIGHTSHIFT ASSIGNLEFTSHIFT ASSIGNXORBIT ASSIGNORBIT
%token <astNode> RIGHTSHIFT LEFTSHIFT
%token <astNode> INDENT DEDENT NEWLINE
%type <astNode> program statements compound_stmt suite mystatement statement stmt_list mysimplestmt if_stmt
%type <astNode> myelifstmt while_stmt for_stmt try_stmt try1_stmt mytry1 myexcept1 try2_stmt mytry2 myexcept2
%type <astNode> try3_stmt funcdef decorators decorator classdef inheritance type_params mytypeparam type_param
%type <astNode> async_funcdef async_for_stmt atom enclosure parenth_form comprehension comp_for comp_iter
%type <astNode> comp_if list_display set_display dict_display dict_item_list mydictitem dict_item dict_comprehension
%type <astNode> generator_expression yield_atom yield_expression myreduce primary attributeref subscription
%type <astNode> slicing slice_list mysliceitem slice_item proper_slice await_expr power u_expr m_expr a_expr
%type <astNode> shift_expr and_expr xor_expr or_expr comparison mycomparison comp_operator or_test and_test
%type <astNode> not_test assignment_expression conditional_expression expression lambda_expr expression_list
%type <astNode> myexpression starred_list mystarreditem starred_expression mystarredexpression starred_item
%type <astNode> simple_stmt expression_stmt assert_stmt assignment_stmt mytargetlist target_list mytarget
%type <astNode> target augmented_assignment_stmt augtarget augop annotated_assignment_stmt return_stmt
%type <astNode> del_stmt yield_stmt raise_stmt import_stmt mymodule module identifiermodule mymoduleidentifier
%type <astNode> relative_module nonlocal_stmt global_stmt myidentifier parameter_list parameter_list_no_posonly
%type <astNode> mydefparameter parameter_list_starargs parameter defparameter

%right LAMBDA
%right NOTIN ISNOT
%left OR
%left AND
%right NOT
%left '<' '>' EQUAL GTE SME NOTEQUAL IS IN
%left '|'
%left '^'
%left '&'
%left LEFTSHIFT RIGHTSHIFT
%left '+' '-'
%left '*' '@' '/' INTDIVIDE '%'
%right UMINUS UADD '~'
%right POWER
%right AWAIT
%right ':' '.'
%right ')' ']' '(' '[' '}' '{'
%right ','
%right IDENTIFIER NUMBER

%%

program : NEWLINE {
        $$ = new program("Program" + std::to_string(++n_nodes));
        root = $$;
        // YYACCEPT;
        }
        | statements NEWLINE program {
            $$ = new program ("program" + std::to_string(++n_nodes));
            $3->add($1);
            $$ = $3;
        };

statements : simple_stmt {
                $$ = new statements("statemnts\n" + std::to_string(++n_nodes));
                $$->add($1);
                printf("Base simple\n");
            }
            | compound_stmt {
                $$ = new statements("statemnts\n" + std::to_string(++n_nodes));
                $$->add($1);
                printf("Base compound\n");
            };

compound_stmt : if_stmt {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                | while_stmt {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                | for_stmt {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                | try_stmt {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                // | with_stmt
                | funcdef {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                | classdef {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                | async_for_stmt {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }
                | async_funcdef {
                    // $$ = new compound_stmt("compound_stmt" + std::to_string(++n_nodes));
                    // $$->add($1);
                    $$ = $1;
                }

suite : stmt_list NEWLINE {
            $$ = new suite("suite" + std::to_string(++n_nodes)); $$->add($1);
            // $$ = $1;
        }
        | NEWLINE INDENT mystatement DEDENT {
            $$ = new suite("suite" + std::to_string(++n_nodes)); $$->add($3);
            // $$ = $3;
        }

mystatement : statement {
                $$ = new mystatement("mystatement" + std::to_string(++n_nodes));
                $$->add($1);
            }
            | mystatement statement {
                $$ = new mystatement("mystatement" + std::to_string(++n_nodes));
                $1->add($2);
                $$ = $1;
            }

statement : stmt_list NEWLINE {
                // $$ = new statement("statement" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            }
            | compound_stmt {
                // $$ = new statement("statement" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            };

stmt_list : simple_stmt {
                // $$ = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            }
            | simple_stmt ';' {
                // $$ = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            }
            | simple_stmt mysimplestmt {
                $$ = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | simple_stmt mysimplestmt ';' {
                $$ = new stmt_list("stmt_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }

mysimplestmt : ';' simple_stmt {
                $$ = new mysimplestmt("mysimplestmt" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | mysimplestmt ';' simple_stmt {
                $$ = new mysimplestmt("mysimplestmt" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            }

if_stmt : IF assignment_expression ':' suite myelifstmt {
            $$ = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($5);
        }
        | IF assignment_expression ':' suite {
            $$ = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
        }
        | IF assignment_expression ':' suite ELSE ':' suite {
            $$ = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($7);
        }
        | IF assignment_expression ':' suite myelifstmt ELSE ':' suite {
            $$ = new if_stmt("if_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($5);
            $$->add($8);
        }

myelifstmt : ELIF assignment_expression ':' suite {
                $$ = new myelifstmt("myelifstmt" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | myelifstmt ELIF assignment_expression ':' suite {
                $$ = new myelifstmt("myelifstmt" + std::to_string(++n_nodes));
                $1->add($3);
                $1->add($5);
                $$ = $1;
            }

while_stmt : WHILE assignment_expression ':' suite {
                $$ = new while_stmt("while_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | WHILE assignment_expression ':' suite ELSE ':' suite {
                $$ = new while_stmt("while_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
                $$->add($7);
            }

for_stmt : FOR target_list IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($6);
        }
        | FOR target_list IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($6);
            $$->add($9);
        }
        | FOR myreduce IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($6);
        }
        | FOR myreduce IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($2);
            $$->add($4);
            $$->add($6);
            $$->add($9);
        }
        | FOR '*' myreduce IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($3);
            $$->add($5);
            $$->add($7);
        }
        | FOR '*' myreduce IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($3);
            $$->add($5);
            $$->add($7);
            $$->add($10);
        }
        | FOR '[' ']' IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($5);
            $$->add($7);
        }
        | FOR '[' ']' IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($5);
            $$->add($7);
            $$->add($10);
        }
        | FOR '*' '[' ']' IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($6);
            $$->add($8);
        }
        | FOR '*' '[' ']' IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($6);
            $$->add($8);
            $$->add($11);
        }
        | FOR '(' ')' IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($5);
            $$->add($7);
        }
        | FOR '(' ')' IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($5);
            $$->add($7);
            $$->add($10);
        }
        | FOR '*' '(' ')' IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($6);
            $$->add($8);
        }
        | FOR '*' '(' ')' IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $$->add($6);
            $$->add($8);
            $$->add($11);
        }
        | FOR IDENTIFIER IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $2->name = "identifier" + std::to_string(++n_nodes);
            $$->add($2);
            $$->add($4);
            $$->add($6);
        }
        | FOR IDENTIFIER IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $2->name = "identifier" + std::to_string(++n_nodes);
            $$->add($2);
            $$->add($4);
            $$->add($6);
            $$->add($9);
        }
        | FOR '*' IDENTIFIER IN starred_list ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $$->add($3);
            $$->add($5);
            $$->add($7);
        }
        | FOR '*' IDENTIFIER IN starred_list ':' suite ELSE ':' suite {
            $$ = new for_stmt("for_stmt" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $$->add($3);
            $$->add($5);
            $$->add($7);
            $$->add($10);
        }

try_stmt : try1_stmt {
                // $$ = new try_stmt("try_stmt" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            }
            | try2_stmt {
                // $$ = new try_stmt("try_stmt" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            }
            | try3_stmt {
                // $$ = new try_stmt("try_stmt" + std::to_string(++n_nodes));
                // $$->add($1);
                $$ = $1;
            };

try1_stmt : TRY ':' suite mytry1 {
                $$ = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
            }
            | TRY ':' suite mytry1 ELSE ':' suite FINALLY ':' suite {
                $$ = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
                $$->add($7);
                $$->add($10);
            }
            | TRY ':' suite mytry1 ELSE ':' suite {
                $$ = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
                $$->add($7);
            }
            | TRY ':' suite mytry1 FINALLY ':' suite {
                $$ = new try1_stmt("try1_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
                $$->add($7);
            }

mytry1  : myexcept1 {
            $$ = new mytry1("mytry1" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | mytry1 myexcept1 {
            $$ = new mytry1("mytry1" + std::to_string(++n_nodes));
            $1->add($2);
            $$ = $1;
        }

myexcept1 : EXCEPT ':' suite {
                $$ = new myexcept1("myexcept1" + std::to_string(++n_nodes));
                $$->add($3);
                // $$ = $3;
            }
            | EXCEPT expression ':' suite {
                $$ = new myexcept1("myexcept1" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | EXCEPT expression AS IDENTIFIER ':' suite {
                $$ = new myexcept1("myexcept1" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
            }

try2_stmt : TRY ':' suite mytry2 {
                $$ = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
            }
            | TRY ':' suite mytry2 ELSE ':' suite FINALLY ':' suite {
                $$ = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
                $$->add($7);
                $$->add($10);
            }
            | TRY ':' suite mytry2 ELSE ':' suite {
                $$ = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
                $$->add($7);
            }
            | TRY ':' suite mytry2 FINALLY ':' suite {
                $$ = new try2_stmt("try2_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($4);
                $$->add($7);
            }

mytry2 : myexcept2 {
            $$ = new mytry2("mytry2" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | mytry2 myexcept2 {
            $$ = new mytry2("mytry2" + std::to_string(++n_nodes));
            $1->add($2);
            $$ = $1;
        }

myexcept2 : EXCEPT '*' expression ':' suite {
                $$ = new myexcept2("myexcept2" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
            }
            | EXCEPT '*' expression AS IDENTIFIER ':' suite {
                $$ = new myexcept2("myexcept2" + std::to_string(++n_nodes));
                $$->add($3);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($7);
            }

try3_stmt : TRY ':' suite FINALLY ':' suite {
                $$ = new try3_stmt("try3_stmt" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($6);
            }

funcdef     : decorators DEF IDENTIFIER type_params '(' parameter_list ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($6);
                $$->add($9);
                $$->add($11);
            }
            | decorators DEF IDENTIFIER '(' ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($7);
            }
            | decorators DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
                $$->add($8);
                $$->add($10);
            }
            | decorators DEF IDENTIFIER '(' ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($7);
                $$->add($9);
            }
            | decorators DEF IDENTIFIER type_params '(' ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($8);
                $$->add($10);
            }
            | decorators DEF IDENTIFIER type_params '(' ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($8);
            }
            | decorators DEF IDENTIFIER type_params '(' parameter_list ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($6);
                $$->add($9);
            }
            | decorators DEF IDENTIFIER '(' parameter_list ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
                $$->add($8);
            }
            | DEF IDENTIFIER type_params '(' parameter_list ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($5);
                $$->add($8);
                $$->add($10);
            }
            | DEF IDENTIFIER '(' ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($6);
            }
            | DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($4);
                $$->add($7);
                $$->add($9);
            }
            | DEF IDENTIFIER '(' ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($6);
                $$->add($8);
            }
            | DEF IDENTIFIER type_params '(' ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($7);
            }
            | DEF IDENTIFIER '(' parameter_list ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($4);
                $$->add($7);
            }
            | DEF IDENTIFIER type_params '(' ')' FN expression ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($7);
                $$->add($9);
            }
            | DEF IDENTIFIER type_params '(' parameter_list ')' ':' suite {
                $$ = new funcdef("funcdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($5);
                $$->add($8);
            }

decorators  : decorator {
                $$ = new decorators("decorators" + std::to_string(++n_nodes));
                $$->add($1);
            }
            | decorators decorator {
                $$ = new decorators("decorators" + std::to_string(++n_nodes));
                $1->add($2);
                $$ = $1;
            };

decorator   : '@' assignment_expression NEWLINE {
    $$ = new decorator("decorator" + std::to_string(++n_nodes)); $$->add($2);
    // $$ = $2;
}

classdef    : decorators CLASS IDENTIFIER type_params inheritance ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($5);
                $$->add($7);
            }
            | decorators CLASS IDENTIFIER type_params ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($6);
            }
            | decorators CLASS IDENTIFIER inheritance ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($4);
                $$->add($6);
            }
            | decorators CLASS IDENTIFIER ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
            }
            | CLASS IDENTIFIER inheritance ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($5);
            }
            | CLASS IDENTIFIER type_params inheritance ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($4);
                $$->add($6);
            }
            | CLASS IDENTIFIER type_params ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
                $$->add($5);
            }
            | CLASS IDENTIFIER ':' suite {
                $$ = new classdef("classdef" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($4);
            };

inheritance : '(' ')' { $$ = new inheritance("inheritance" + std::to_string(++n_nodes)); } // | '(' argument_list ')'

type_params : '[' type_param ']' {
                    // $$ = new type_params("type_params" + std::to_string(++n_nodes));
                    // $$->add($2);
                    $$ = $2;
                }
                | '[' type_param mytypeparam ']' {
                    $$ = new type_params("type_params" + std::to_string(++n_nodes));
                    $$->add($2);
                    $$->add($3);
                }

mytypeparam : ',' type_param {
                $$ = new mytypeparam("mytypeparam" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | ',' type_param mytypeparam {
                $$ = new mytypeparam("mytypeparam" + std::to_string(++n_nodes));
                $3->add($2);
                $$ = $3;
            }

type_param : IDENTIFIER ':' expression {
                $$ = new type_param("type_param" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $$->add($3);
            }
            | IDENTIFIER {
                $$ = new type_param("type_param" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
            }
            | '*' IDENTIFIER {
                $$ = new type_param("type_param" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }
            | POWER IDENTIFIER {
                $$ = new type_param("type_param" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }

async_funcdef : decorators ASYNC DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
                $$->add($9);
                $$->add($11);
            }
            | decorators ASYNC DEF IDENTIFIER '(' ')' ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($8);
            }
            | ASYNC DEF IDENTIFIER '(' parameter_list ')' ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
                $$->add($8);
            }
            | ASYNC DEF IDENTIFIER '(' ')' FN expression ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($7);
                $$->add($9);
            }
            | decorators ASYNC DEF IDENTIFIER '(' parameter_list ')' ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
                $$->add($9);
            }
            | decorators ASYNC DEF IDENTIFIER '(' ')' FN expression ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $$->add($1);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($8);
                $$->add($10);
            }
            | ASYNC DEF IDENTIFIER '(' parameter_list ')' FN expression ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
                $$->add($8);
                $$->add($10);
            }
            | ASYNC DEF IDENTIFIER '(' ')' ':' suite {
                $$ = new async_funcdef("async_funcdef" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($7);
            };

async_for_stmt : ASYNC for_stmt {
    $$ = new async_for_stmt("async_for_stmt" + std::to_string(++n_nodes)); $$->add($2);
    // $$ = $2;
}

atom : NUMBER {
        $$ = new atom("Atom" + std::to_string(++n_nodes));
        $1->name = "number" + std::to_string(++n_nodes);
        $$->add($1);
    }
    | enclosure {
        // $$ = new atom("Atom" + std::to_string(++n_nodes));
        // $$->add($1);
        $$ = $1;
    };

enclosure : parenth_form {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | list_display {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | dict_display {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | set_display {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | generator_expression {
            //  $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | yield_atom {
            // $$ = new enclosure("enclosure" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;};

parenth_form : '(' starred_expression ')' {
    $$ = new parenth_form("parenth_form" + std::to_string(++n_nodes)); $$->add($2);
    // $$ = $2;
};

comprehension : assignment_expression comp_for {
                    $$ = new comprehension("comprehension" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                };

comp_for    : ASYNC FOR target_list IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
                $$->add($6);
            }
            | FOR target_list IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
                $$->add($5);
            }
            | ASYNC FOR target_list IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
            }
            | FOR target_list IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | ASYNC FOR myreduce IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
                $$->add($6);
            }
            | FOR myreduce IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
                $$->add($5);
            }
            | ASYNC FOR myreduce IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
            }
            | FOR myreduce IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | ASYNC FOR '*' IDENTIFIER IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
                $$->add($7);
            }
            | FOR '*' IDENTIFIER IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
                $$->add($6);
            }
            | ASYNC FOR '*' IDENTIFIER IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
            }
            | FOR '*' IDENTIFIER IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
            }
            | ASYNC FOR '*' myreduce IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($4);
                $$->add($6);
                $$->add($7);
            }
            | FOR '*' myreduce IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
                $$->add($6);
            }
            | ASYNC FOR '*' myreduce IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($4);
                $$->add($6);
            }
            | FOR '*' myreduce IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($3);
                $$->add($5);
            }
            | ASYNC FOR IDENTIFIER IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
                $$->add($6);
            }
            | FOR IDENTIFIER IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($4);
                $$->add($5);
            }
            | ASYNC FOR IDENTIFIER IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
                $$->add($5);
            }
            | FOR IDENTIFIER IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($4);
            }
            | ASYNC FOR '(' ')' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                $$->add($7);
            }
            | FOR '(' ')' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($5);
                $$->add($6);
            }
            | ASYNC FOR '(' ')' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                // $$ = $6;
            }
            | FOR '(' ')' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($5);
                // $$ = $5;
            }
            | ASYNC FOR '[' ']' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                $$->add($7);
            }
            | FOR '[' ']' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($5);
                $$->add($6);
            }
            | ASYNC FOR '[' ']' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                // $$ = $6;
            }
            | FOR '[' ']' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($5);
                // $$ = $5;
            }
            | ASYNC FOR '*' '(' ')' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($7);
                $$->add($8);
            }
            | FOR '*' '(' ')' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                $$->add($7);
            }
            | ASYNC FOR '*' '(' ')' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($7);
                // $$ = $7;
            }
            | FOR '*' '(' ')' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                // $$ = $6;
            }
            | ASYNC FOR '*' '[' ']' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($7);
                $$->add($8);
            }
            | FOR '*' '[' ']' IN or_test comp_iter {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                $$->add($7);
            }
            | ASYNC FOR '*' '[' ']' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($7);
                // $$ = $7;
            }
            | FOR '*' '[' ']' IN or_test {
                $$ = new comp_for("comp_for" + std::to_string(++n_nodes));
                $$->add($6);
                // $$ = $6;
            };

comp_iter : comp_for {
                // $$ = new comp_iter("comp_iter" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | comp_if {
                // $$ = new comp_iter("comp_iter" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;};

comp_if : IF or_test comp_iter { $$ = new comp_if("comp_if" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($3);
        } | IF or_test { $$ = new comp_if("comp_if" + std::to_string(++n_nodes)); $$->add($2);
            // $$ = $2;
        };

list_display : '[' starred_list ']' {
                $$ = new list_display("list_display" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | '[' comprehension ']' {
                $$ = new list_display("list_display" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            };

set_display : '{' starred_list '}' {
                $$ = new set_display("set_display" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | '{' comprehension '}' {
                $$ = new set_display("set_display" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            };

dict_display : '{' '}' {$$ = new dict_display("dict_display" + std::to_string(++n_nodes));}
            | '{' dict_item_list '}' {
                $$ = new dict_display("dict_display" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | '{' dict_comprehension '}' {
                $$ = new dict_display("dict_display" + std::to_string(++n_nodes));$$->add($2);
                // $$ = $2;
            };

dict_item_list : dict_item {
                    // $$ = new dict_item_list("dict_item_list" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}
                | dict_item ',' {
                    // $$ = new dict_item_list("dict_item_list" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}
                | dict_item mydictitem {
                    $$ = new dict_item_list("dict_item_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                }
                | dict_item mydictitem ',' {
                    $$ = new dict_item_list("dict_item_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                };

mydictitem      : ',' dict_item {
                    $$ = new mydictitem("mydictitem" + std::to_string(++n_nodes));
                    $$->add($2);
                }
                | ',' dict_item mydictitem {
                    $$ = new mydictitem("mydictitem" + std::to_string(++n_nodes));
                    $3->add($2);
                    $$ = $3;
                };

dict_item : expression ':' expression {
                $$ = new dict_item("dict_item" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
        }
        | POWER or_expr {
            $$ = new dict_item("dict_item" + std::to_string(++n_nodes)); $$->add($2);
            // $$ = $2;
        };

dict_comprehension : expression ':' expression comp_for {
                        $$ = new dict_comprehension("dict_comprehension" + std::to_string(++n_nodes));
                        $$->add($1);
                        $$->add($3);
                        $$->add($4);
                    };

generator_expression : '(' expression comp_for ')' {
                            $$ = new generator_expression("generator_expression" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($3);
                        };

yield_atom : '(' yield_expression ')' {
    // $$ = new yield_atom("yield_atom" + std::to_string(++n_nodes)); $$->add($2);
    $$ = $2;};

yield_expression : YIELD { $$ = new yield_expression("yield_expression" + std::to_string(++n_nodes)); }
                | YIELD expression_list {
                    $$ = new yield_expression("yield_expression" + std::to_string(++n_nodes)); $$->add($2);
                    // $$ = $2;
                }
                | YIELD FROM expression {
                    $$ = new yield_expression("yield_expression" + std::to_string(++n_nodes)); $$->add($3);
                    // $$ = $3;
                }
                | YIELD expression {
                    $$ = new yield_expression("yield_expression" + std::to_string(++n_nodes)); $$->add($2);
                    // $$ = $2;
                }
                | YIELD expression ',' {
                    $$ = new yield_expression("yield_expression" + std::to_string(++n_nodes)); $$->add($2); 
                    // $$ = $2;
                };

myreduce : attributeref {
            //  $$ = new myreduce("myreduce" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | subscription {
            //  $$ = new myreduce("myreduce" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}
        | slicing {
            //  $$ = new myreduce("myreduce" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;}

primary : atom {
            // $$ = new primary("primary" + std::to_string(++n_nodes)); $$->add($1);
            $$ = $1;} //| call

attributeref : primary '.' IDENTIFIER {
                $$ = new attributeref("attributeref" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
            }
            | myreduce '.' IDENTIFIER {
                $$ = new attributeref("attributeref" + std::to_string(++n_nodes));
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
            }
            | IDENTIFIER '.' IDENTIFIER {
                $$ = new attributeref("attributeref" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $3->name = "identifier" + std::to_string(++n_nodes);
                $$->add($3);
            }
            | '(' ')' '.' IDENTIFIER {
                $$ = new attributeref("attributeref" + std::to_string(++n_nodes));
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
            }
            | '[' ']' '.' IDENTIFIER {
                $$ = new attributeref("attributeref" + std::to_string(++n_nodes));
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
            };

subscription : primary '[' expression_list ']' {
                $$ = new subscription("subscription" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | myreduce '[' expression_list ']' {
                $$ = new subscription("subscription" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | IDENTIFIER '[' expression_list ']' {
                $$ = new subscription("subscription" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $$->add($3);
            }
            // | primary '[' expression ']'
            // | myreduce '[' expression ']'
            // | IDENTIFIER '[' expression ']'
            | '(' ')' '[' expression_list ']' {
                $$ = new subscription("subscription" + std::to_string(++n_nodes)); $$->add($4);
                // $$ = $4;
            }
            // | '(' ')' '[' expression ']'
            | '[' ']' '[' expression_list ']' {
                $$ = new subscription("subscription" + std::to_string(++n_nodes)); $$->add($4);
                // $$ = $4;
            }
            // | '[' ']' '[' expression ']'

slicing     : primary '[' slice_list ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | myreduce '[' slice_list ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | IDENTIFIER '[' slice_list ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $$->add($3);
            }
            | primary '[' expression ',' ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | myreduce '[' expression ',' ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | IDENTIFIER '[' expression ',' ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $$->add($3);
            }
            // | primary '[' expression ',' expression ']'
            // | myreduce '[' expression ',' expression ']'
            // | IDENTIFIER '[' expression ',' expression ']'
            | '(' ')' '[' slice_list ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes)); $$->add($4);
                // $$ = $4;
            }
            | '(' ')' '[' expression ',' ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));$$->add($4);
                // $$ = $4;
            }
            // | '(' ')' '[' expression ',' expression ']'
            | '[' ']' '[' slice_list ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));$$->add($4);
                // $$ = $4;
            }
            | '[' ']' '[' expression ',' ']' {
                $$ = new slicing("slicing" + std::to_string(++n_nodes));$$->add($4);
                // $$ = $4;
            }
            // | '[' ']' '[' expression ',' expression ']'

slice_list  : slice_item {
                // $$ = new slice_list("slice_list" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | slice_item ',' {
                // $$ = new slice_list("slice_list" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | slice_item mysliceitem {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | slice_item mysliceitem ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | expression %prec ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }
            | expression mysliceitem {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | expression mysliceitem ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | slice_item ',' expression {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | slice_item ',' expression ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | slice_item mysliceitem ',' expression {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
                $$->add($4);
            }
            | slice_item mysliceitem ',' expression ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
                $$->add($4);
            }
            | expression ',' expression ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | expression mysliceitem ',' expression {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
                $$->add($4);
            }
            | expression mysliceitem ',' expression ',' {
                $$ = new slice_list("slice_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
                $$->add($4);
            };

mysliceitem  : ',' slice_item {
                $$ = new mysliceitem("mysliceitem" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | ',' slice_item mysliceitem {
                $$ = new mysliceitem("mysliceitem" + std::to_string(++n_nodes));
                $3->add($2);
                $$ = $3;
            }
            | ',' expression mysliceitem {
                $$ = new mysliceitem("mysliceitem" + std::to_string(++n_nodes));
                $3->add($2);
                $$ = $3;
            };

slice_item   : proper_slice {
    // $$ = new slice_item("slice_item" + std::to_string(++n_nodes)); $$->add($1);
    $$ = $1;}

proper_slice : ':' {$$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));}
            | ':' ':' {$$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));}
            | ':' expression {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | ':' expression ':' {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | ':' expression ':' expression {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | ':' ':' expression {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes)); $$->add($3);
                // $$ = $3;
            }
            | expression ':' expression ':' expression {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
                $$->add($5);
            }
            | expression ':' expression ':' {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | expression ':' expression {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            }
            | expression ':' ':' expression {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($4);
            }
            | expression ':' ':' {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }
            | expression ':' {
                $$ = new proper_slice("proper_slice" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            };

await_expr : AWAIT primary {
                $$ = new await_expr("await_expr" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | AWAIT myreduce {
                $$ = new await_expr("await_expr" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | AWAIT IDENTIFIER {
                $$ = new await_expr("await_expr" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }
            | AWAIT '(' ')' {$$ = new await_expr("await_expr" + std::to_string(++n_nodes));}
            | AWAIT '[' ']' {$$ = new await_expr("await_expr" + std::to_string(++n_nodes));};

power : await_expr {
        // $$ = new power("power" + std::to_string(++n_nodes)); $$->add($1);
        $$ = $1;}
    | primary {
        // $$ = new power("power" + std::to_string(++n_nodes));$$->add($1);
        $$ = $1;}
    | '(' ')' {$$ = new power("power" + std::to_string(++n_nodes));}
    | '(' ')' POWER u_expr {
        $$ = new power("power" + std::to_string(++n_nodes)); $$->add($4);
        // $$ = $4;
    }
    | '(' ')' POWER IDENTIFIER {
        $$ = new power("power" + std::to_string(++n_nodes));
        $4->name = "identifier" + std::to_string(++n_nodes);
        $$->add($4);
    }
    | '(' ')' POWER myreduce %prec ',' {
        $$ = new power("power" + std::to_string(++n_nodes)); $$->add($4);
        // $$ = $4;
    }
    | '[' ']' {$$ = new power("power" + std::to_string(++n_nodes));}
    | '[' ']' POWER u_expr {
        $$ = new power("power" + std::to_string(++n_nodes)); $$->add($4);
        // $$ = $4;
    }
    | '[' ']' POWER IDENTIFIER {
        $$ = new power("power" + std::to_string(++n_nodes));
        $4->name = "identifier" + std::to_string(++n_nodes);
        $$->add($4);
    }
    | '[' ']' POWER myreduce %prec ',' {
        $$ = new power("power" + std::to_string(++n_nodes)); $$->add($4);
        // $$ = $4;
    }
    | await_expr POWER u_expr {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $$->add($3);
    }
    | primary POWER u_expr {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $$->add($3);
    }
    | myreduce POWER u_expr {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $$->add($3);
    }
    | IDENTIFIER POWER u_expr {
        $$ = new power("power" + std::to_string(++n_nodes));
        $1->name = "identifier" + std::to_string(++n_nodes);
        $$->add($1);
        $$->add($3);
    }
    | await_expr POWER IDENTIFIER {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $3->name = "identifier" + std::to_string(++n_nodes);
        $$->add($3);
    }
    | primary POWER IDENTIFIER {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $3->name = "identifier" + std::to_string(++n_nodes);
        $$->add($3);
    }
    | myreduce POWER IDENTIFIER {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $3->name = "identifier" + std::to_string(++n_nodes);
        $$->add($3);
    }
    | IDENTIFIER POWER IDENTIFIER {
        $$ = new power("power" + std::to_string(++n_nodes));
        $1->name = "identifier" + std::to_string(++n_nodes);
        $$->add($1);
        $3->name = "identifier" + std::to_string(++n_nodes);
        $$->add($3);
    }
    | await_expr POWER myreduce %prec ',' {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $$->add($3);
    }
    | primary POWER myreduce %prec ',' {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $$->add($3);
    }
    | myreduce POWER myreduce %prec ',' {
        $$ = new power("power" + std::to_string(++n_nodes));
        $$->add($1);
        $$->add($3);
    }
    | IDENTIFIER POWER myreduce %prec ',' {
        $$ = new power("power" + std::to_string(++n_nodes));
        $1->name = "identifier" + std::to_string(++n_nodes);
        $$->add($1);
        $$->add($3);
    };

u_expr : power {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | '-' u_expr {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$ = $2;
        }
        | '+' u_expr {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$ = $2;
        }
        | '~' u_expr {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$ = $2;
        }
        | '-' myreduce %prec ',' {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$->add($2);
        }
        | '+' myreduce %prec ',' {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$->add($2);
        }
        | '~' myreduce %prec ',' {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $$->add($2);
        }
        | '-' IDENTIFIER {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $2->name = "identifier" + std::to_string(++n_nodes);
            $$->add($2);
        }
        | '+' IDENTIFIER {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $2->name = "identifier" + std::to_string(++n_nodes);
            $$->add($2);
        }
        | '~' IDENTIFIER {
            $$ = new u_expr("u_expr" + std::to_string(++n_nodes));
            $2->name = "identifier" + std::to_string(++n_nodes);
            $$->add($2);
        };

m_expr : u_expr {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | m_expr '*' u_expr {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr '@' m_expr {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            // $$->add($1);
            $$ = $1;
        }
        | m_expr INTDIVIDE u_expr {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr '/' u_expr {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr '%' u_expr {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr '*' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr INTDIVIDE myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr '/' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | m_expr '%' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | myreduce '@' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $$->add($1);
            $$->add($3);
        }
        | myreduce '@' m_expr %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $3->add($1);
            $$ = $1;
        }
        | m_expr '@' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | myreduce '*' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $$->add($1);
            $$->add($3);
        }
        | myreduce INTDIVIDE myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $$->add($1);
            $$->add($3);
        }
        | myreduce '/' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $$->add($1);
            $$->add($3);
        }
        | myreduce '%' myreduce %prec ',' {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $$->add($1);
            $$->add($3);
        }
        | m_expr INTDIVIDE IDENTIFIER {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $1->add($3);
            $$ = $1;
        }
        | m_expr '*' IDENTIFIER {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $1->add($3);
            $$ = $1;
        }
        | m_expr '/' IDENTIFIER {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $1->add($3);
            $$ = $1;
        }
        | m_expr '%' IDENTIFIER {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $1->add($3);
            $$ = $1;
        }
        | IDENTIFIER {
            $$ = new m_expr("m_expr" + std::to_string(++n_nodes));
            $1->name = "identifier" + std::to_string(++n_nodes);
            $$->add($1);
        };

a_expr : m_expr {
            $$ = new a_expr("a_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | a_expr '+' m_expr {
            $$ = new a_expr("a_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | a_expr '-' m_expr {
            $$ = new a_expr("a_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | myreduce %prec ',' {
            $$ = new a_expr("a_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | a_expr '+' myreduce %prec ',' {
            $$ = new a_expr("a_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }
        | a_expr '-' myreduce %prec ',' {
            $$ = new a_expr("a_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        };

shift_expr : a_expr {
                $$ = new shift_expr("shift_expr" + std::to_string(++n_nodes));
                $$->add($1);
            }
            | shift_expr LEFTSHIFT a_expr{
                $$ = new shift_expr("shift_expr" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            }
            | shift_expr RIGHTSHIFT a_expr {
                $$ = new shift_expr("shift_expr" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            };

and_expr : shift_expr {
            $$ = new and_expr("and_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | and_expr '&' shift_expr {
            $$ = new and_expr("and_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }

xor_expr : and_expr {
            $$ = new xor_expr("xor_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | xor_expr '^' and_expr {
            $$ = new xor_expr("xor_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }

or_expr : xor_expr {
            $$ = new or_expr("or_expr" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | or_expr '|' xor_expr {
            $$ = new or_expr("or_expr" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        }

comparison  : or_expr {
                $$ = new comparison("comparison" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }
            | or_expr mycomparison {
                $$ = new comparison("comparison" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            };

mycomparison : mycomparison comp_operator or_expr {
                $$ = new mycomparison("mycomparison" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            }
            | comp_operator or_expr {
                $$ = new mycomparison("mycomparison" + std::to_string(++n_nodes));
                $$->add($2);
            };

comp_operator : '<' | '>' | EQUAL | GTE | SME | NOTEQUAL | IS | IS NOT | NOT IN | IN

or_test : and_test {
            $$ = new or_test("or_test" + std::to_string(++n_nodes));
            $$->add($1);
        }
        | or_test OR and_test {
            $$ = new or_test("or_test" + std::to_string(++n_nodes));
            $1->add($3);
            $$ = $1;
        };

and_test : not_test {
                $$ = new and_test("and_test" + std::to_string(++n_nodes));
                $$->add($1);
            }
            | and_test AND not_test {
                $$ = new and_test("and_test" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            };

not_test : comparison {
                $$ = new not_test("not_test" + std::to_string(++n_nodes));
                $$->add($1);
            }
            | NOT not_test {
                $$ = new not_test("not_test" + std::to_string(++n_nodes));
                $$ = $2;
            };

assignment_expression : IDENTIFIER ASSIGN expression {
                            $$ = new assignment_expression("assignment_expression" + std::to_string(++n_nodes));
                            $1->name = "identifier" + std::to_string(++n_nodes);
                            $$->add($1);
                            $$->add($3);
                        }
                        | expression {
                            // $$ = new assignment_expression("assignment_expression" + std::to_string(++n_nodes)); $$->add($1);
                            $$ = $1;};

conditional_expression : or_test {
                        $$ = new conditional_expression("conditional_expression" + std::to_string(++n_nodes)); $$->add($1);
                        // $$ = $1;
                        }
                        | or_test IF or_test ELSE expression {
                            $$ = new conditional_expression("conditional_expression" + std::to_string(++n_nodes));
                            $$->add($1);
                            $$->add($3);
                            $$->add($5);
                        };

expression : conditional_expression {
                // $$ = new expression("expression" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | lambda_expr {
                // $$ = new expression("expression" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;};

lambda_expr : LAMBDA ':' expression {
                $$ = new lambda_expr("lambda_expr" + std::to_string(++n_nodes)); $$->add($3);
                // $$ = $3;
            }
            | LAMBDA parameter_list ':' expression {
                $$ = new lambda_expr("lambda_expr"  + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            };

expression_list : expression myexpression {
                    $$ = new expression_list("expression_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                }
                | expression myexpression ',' {
                    $$ = new expression_list("expression_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                };

myexpression    : ',' expression {
                    $$ = new myexpression("myexpression" + std::to_string(++n_nodes));
                    $$->add($2);
                }
                | ',' expression myexpression {
                    $$ = new myexpression("myexpression" + std::to_string(++n_nodes));
                    $3->add($2);
                    $$ = $3;
                };

starred_list : starred_item {
                // $$ = new starred_list("starred_list" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | starred_item ',' {
                // $$ = new starred_list("starred_list" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | starred_item mystarreditem {
                $$ = new starred_list("starred_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | starred_item mystarreditem ',' {
                $$ = new starred_list("starred_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            };

mystarreditem : ',' starred_item {
                    $$ = new mystarreditem("mystarreditem" + std::to_string(++n_nodes));
                    $$->add($2);
                }
                | ',' starred_item mystarreditem {
                    $$ = new mystarreditem("mystarreditem" + std::to_string(++n_nodes));
                    $3->add($2);
                    $$ = $3;
                };

starred_expression : starred_item {
                    // $$ = new starred_expression("starred_expression" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}
                | mystarredexpression {
                    // $$ = new starred_expression("starred_expression" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}
                | mystarredexpression starred_item {
                    $$ = new starred_expression("starred_expression" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                };

mystarredexpression : starred_item ',' {
                    $$ = new mystarredexpression("mystarredexpression" + std::to_string(++n_nodes));
                    $$->add($1);
                }
                | starred_item ',' mystarredexpression {
                    $$ = new mystarredexpression("mystarredexpression" + std::to_string(++n_nodes));
                    $3->add($1);
                    $$ = $3;
                };

starred_item : '*' or_expr {
                // $$ = new starred_item("starred_item" + std::to_string(++n_nodes)); $$->add($2);
                $$ = $2;}
            | assignment_expression {
                // $$ = new starred_item("starred_item" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}

simple_stmt : assert_stmt               {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | assignment_stmt           {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | expression_stmt           {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | augmented_assignment_stmt {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | annotated_assignment_stmt {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | PASS                      {$$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes));}
            | del_stmt                  {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | return_stmt   /*func*/    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | yield_stmt    /*func*/    {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | raise_stmt                {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | BREAK         /*loop*/    {$$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes));}
            | CONTINUE      /*loop*/    {$$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes));}
            | import_stmt               {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | global_stmt               {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | nonlocal_stmt             {
                // $$ = new simple_stmt("simple_stmt" + std::to_string(++n_nodes)); $$->add($1);}
                $$ = $1;};

expression_stmt : starred_expression {
    $$ = new expression_stmt("expression_stmt" + std::to_string(++n_nodes)); $$->add($1);
    // $$ = $1;
}

assert_stmt : ASSERT expression ',' expression {
                $$ = new assert_stmt("assert_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | ASSERT expression {
                $$ = new assert_stmt("assert_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }

assignment_stmt : mytargetlist starred_item {
                    $$ = new assignment_stmt("assignment_stmt" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                }
                | mytargetlist yield_expression {
                    $$ = new assignment_stmt("assignment_stmt" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                }

mytargetlist    : mytargetlist target_list '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $1->add($2);
                    $$ = $1;
                }
                | target_list '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$->add($1);
                }
                | mytargetlist myreduce '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $1->add($2);
                    $$ = $1;
                }
                | myreduce '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$->add($1);
                }
                | mytargetlist '*' IDENTIFIER '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $3->name = "identifier" + std::to_string(++n_nodes);
                    $1->add($3);
                    $$ = $1;
                }
                | '*' IDENTIFIER '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $2->name = "identifier" + std::to_string(++n_nodes);
                    $$->add($2);
                }
                | mytargetlist IDENTIFIER '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $2->name = "identifier" + std::to_string(++n_nodes);
                    $1->add($2);
                    $$ = $1;
                }
                | IDENTIFIER '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $1->name = "identifier" + std::to_string(++n_nodes);
                    $$->add($1);
                }
                | mytargetlist '(' ')' '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$ = $1;
                }
                | '(' ')' '=' {$$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
                | mytargetlist '*' '(' ')' '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$ = $1;
                }
                | '*' '(' ')' '=' {$$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
                | mytargetlist '[' ']' '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$ = $1;
                }
                | '[' ']' '=' {$$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
                | mytargetlist '*' '[' ']' '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$ = $1;
                }
                | '*' '[' ']' '=' {$$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));}
                | mytargetlist '*' myreduce '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $1->add($3);
                    $$ = $1;
                }
                | '*' myreduce '=' {
                    $$ = new mytargetlist("mytargetlist" + std::to_string(++n_nodes));
                    $$->add($2);
                };

target_list : target {
                // $$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | target ',' {
                // $$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;}
            | target mytarget {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | target mytarget ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | IDENTIFIER ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
            }
            | IDENTIFIER mytarget {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $$->add($2);
            }
            | IDENTIFIER mytarget ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
                $$->add($2);
            }
            | '*' myreduce ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | '*' myreduce mytarget {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($3);
            }
            | '*' myreduce mytarget ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($3);
            }
            | '*' IDENTIFIER ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }
            | '*' IDENTIFIER mytarget {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
            }
            | '*' IDENTIFIER mytarget ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
            }
            | myreduce ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }
            | myreduce mytarget {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | myreduce mytarget ',' {
                $$ = new target_list("target_list" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($2);
            }
            | '(' ')' ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes));}
            | '(' ')' mytarget {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($3);}
            | '(' ')' mytarget ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($3);}
            | '*' '(' ')' ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes));}
            | '*' '(' ')' mytarget {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($4);}
            | '*' '(' ')' mytarget ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($4);}
            | '[' ']' ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes));}
            | '[' ']' mytarget {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($3);}
            | '[' ']' mytarget ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($3);}
            | '*' '[' ']' ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes));}
            | '*' '[' ']' mytarget {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($4);}
            | '*' '[' ']' mytarget ',' {$$ = new target_list("target_list" + std::to_string(++n_nodes)); $$->add($4);};

mytarget    : ',' target {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | mytarget ',' target {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            }
            | ',' IDENTIFIER {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | mytarget ',' IDENTIFIER {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $1->add($3);
                $$ = $1;
            }
            | ',' myreduce {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | mytarget ',' myreduce {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $1->add($3);
                $$ = $1;
            }
            | ',' '*' IDENTIFIER {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$->add($3);
            }
            | mytarget ',' '*' IDENTIFIER {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $4->name = "identifier" + std::to_string(++n_nodes);
                $1->add($4);
                $$ = $1;
            }
            | ',' '*' '*' myreduce {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$->add($4);
            }
            | mytarget ',' '*' '*' myreduce {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $1->add($5);
                $$ = $1;
            }
            | ',' '(' ')' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
            | mytarget ',' '(' ')' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$ = $1;
            }
            | ',' '*' '(' ')' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
            | mytarget ',' '*' '(' ')' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$ = $1;
            }
            | ',' '[' ']' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
            | mytarget ',' '[' ']' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$ = $1;
            }
            | ',' '*' '[' ']' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
            }
            | mytarget ',' '*' '[' ']' {
                $$ = new mytarget("mytarget" + std::to_string(++n_nodes));
                $$ = $1;
            };

target  : '(' target_list ')' {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($2);
            $$ = $2;}
        | '(' '(' ')' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '(' '[' ']' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        // | '(' myreduce ')'
        | '(' '*' '[' ']' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        // | '(' IDENTIFIER ')'
        | '(' '*' '(' ')' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        // | '(' '*' IDENTIFIER ')'
        // | '(' '*' myreduce ')'
        | '[' target_list ']' {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($2);
            $$ = $2;}
        | '[' '*' '[' ']' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '[' '(' ')' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '[' '[' ']' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        // | '[' IDENTIFIER ']'
        // | '[' myreduce ']'
        | '[' '*' '(' ')' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        // | '[' '*' IDENTIFIER ']'
        // | '[' '*' myreduce ']'
        | '*' '(' target_list ')' {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($3);
            $$ = $3;}
        | '*' '(' '*' '[' ']' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '(' '*' '(' ')' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '(' '(' ')' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '(' '[' ']' ')' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '(' IDENTIFIER ')' {
            $$ = new target("target" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $$->add($3);
        }
        | '*' '(' myreduce ')' {
            $$ = new target("target" + std::to_string(++n_nodes)); $$->add($3);
            // $$ = $3;
        }
        | '*' '(' '*' IDENTIFIER ')' {
            $$ = new target("target" + std::to_string(++n_nodes));
            $4->name = "identifier" + std::to_string(++n_nodes);
            $$->add($4);
        }
        | '*' '(' '*' myreduce ')' {
            $$ = new target("target" + std::to_string(++n_nodes)); $$->add($4);
            // $$ = $4;
        }
        | '*' '[' target_list ']' {
            // $$ = new target("target" + std::to_string(++n_nodes)); $$->add($3);
            $$ = $3;}
        | '*' '[' '*' '[' ']' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '[' '*' '(' ')' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '[' '(' ')' ']' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '[' '[' ']'']' {$$ = new target("target" + std::to_string(++n_nodes));}
        | '*' '[' IDENTIFIER ']' {
            $$ = new target("target" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $$->add($3);
        }
        | '*' '[' myreduce ']' {
            $$ = new target("target" + std::to_string(++n_nodes)); $$->add($3);
            // $$ = $3;
        }
        | '*' '[' '*' IDENTIFIER ']' {
            $$ = new target("target" + std::to_string(++n_nodes));
            $4->name = "identifier" + std::to_string(++n_nodes);
            $$->add($4);
        }
        | '*' '[' '*' myreduce ']' {
            $$ = new target("target" + std::to_string(++n_nodes)); $$->add($4);
            // $$ = $4;
        }

augmented_assignment_stmt : augtarget augop expression_list {
                            $$ = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            // $$->add($2);
                            $$->add($3);
                        }
                        | augtarget augop yield_expression {
                            $$ = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            // $$->add($2);
                            $$->add($3);
                        }
                        | augtarget augop expression {
                            $$ = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            // $$->add($2);
                            $$->add($3);
                        }
                        | augtarget augop expression ',' {
                            $$ = new augmented_assignment_stmt("augmented_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            // $$->add($2);
                            $$->add($3);
                        };

augtarget : IDENTIFIER {
                $$ = new augtarget("augtarget" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
            }
            | attributeref {
                $$ = new augtarget("augtarget" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }
            | subscription {
                $$ = new augtarget("augtarget" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }
            | slicing {
                $$ = new augtarget("augtarget" + std::to_string(++n_nodes)); $$->add($1);
                // $$ = $1;
            }

augop : ASSIGNADD | ASSIGNMINUS | ASSIGNMUL | ASSIGNARRMUL | ASSIGNDIVIDE | ASSIGNINTDIVIDE | ASSIGNMODULUS
    | ASSIGNPOWER | ASSIGNLEFTSHIFT | ASSIGNRIGHTSHIFT | ASSIGNANDBIT | ASSIGNXORBIT | ASSIGNORBIT

annotated_assignment_stmt : augtarget ':' expression {
                            $$ = new annotated_assignment_stmt("annotated_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            $$->add($3);
                        }
                        | augtarget ':' expression '=' starred_expression {
                            $$ = new annotated_assignment_stmt("annotated_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            $$->add($3);
                            $$->add($5);
                        }
                        | augtarget ':' expression '=' yield_expression {
                            $$ = new annotated_assignment_stmt("annotated_assignment_stmt" + std::to_string(++n_nodes));
                            $$->add($1);
                            $$->add($3);
                            $$->add($5);
                        }

return_stmt : RETURN expression_list {
                $$ = new return_stmt("return_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | RETURN {$$ = new return_stmt("return_stmt" + std::to_string(++n_nodes));}
            | RETURN expression {
                $$ = new return_stmt("return_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | RETURN expression ',' {
                $$ = new return_stmt("return_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }

del_stmt : DEL target_list {
            $$ = new del_stmt("del_stmt" + std::to_string(++n_nodes)); $$->add($2);
            // $$ = $2;
        }
        | DEL myreduce {
            $$ = new del_stmt("del_stmt" + std::to_string(++n_nodes)); $$->add($2);
            // $$ = $2;
        }
        | DEL '*' IDENTIFIER {
            $$ = new del_stmt("del_stmt" + std::to_string(++n_nodes));
            $3->name = "identifier" + std::to_string(++n_nodes);
            $$->add($3);
        }
        | DEL '*' myreduce {
            $$ = new del_stmt("del_stmt" + std::to_string(++n_nodes)); $$->add($3);
            // $$ = $3;
        }
        | DEL IDENTIFIER {
            $$ = new del_stmt("del_stmt" + std::to_string(++n_nodes));
            $2->name = "identifier" + std::to_string(++n_nodes);
            $$->add($2);
        }
        | DEL '(' ')' {$$ = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
        | DEL '[' ']' {$$ = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
        | DEL '*' '(' ')' {$$ = new del_stmt("del_stmt" + std::to_string(++n_nodes));}
        | DEL '*' '[' ']' {$$ = new del_stmt("del_stmt" + std::to_string(++n_nodes));}

yield_stmt : yield_expression {
    $$ = new yield_stmt("yield_stmt" + std::to_string(++n_nodes)); $$->add($1);
    // $$ = $1;
    }

raise_stmt : RAISE {$$ = new raise_stmt("raise_stmt" + std::to_string(++n_nodes));}
            | RAISE expression FROM expression {
                $$ = new raise_stmt("raise_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($4);
            }
            | RAISE expression {
                $$ = new raise_stmt("raise_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }

import_stmt : IMPORT module AS IDENTIFIER mymodule {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($5);
            }
            | IMPORT module AS IDENTIFIER {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
            }
            | IMPORT module mymodule {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $$->add($3);
            }
            | IMPORT module {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }
            | FROM relative_module IMPORT IDENTIFIER AS IDENTIFIER mymoduleidentifier {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $6->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
                $$->add($7);
            }
            | FROM relative_module IMPORT IDENTIFIER AS IDENTIFIER {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $6->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($6);
            }
            | FROM relative_module IMPORT IDENTIFIER mymoduleidentifier {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
                $$->add($5);
            }
            | FROM relative_module IMPORT IDENTIFIER {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER AS IDENTIFIER mymoduleidentifier ',' ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $7->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($7);
                $$->add($8);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER AS IDENTIFIER mymoduleidentifier ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $7->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($7);
                $$->add($8);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER mymoduleidentifier ',' ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($6);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER mymoduleidentifier ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($6);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER AS IDENTIFIER ',' ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $7->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($7);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER AS IDENTIFIER ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $7->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
                $$->add($7);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER ',' ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
            }
            | FROM relative_module IMPORT '(' IDENTIFIER ')' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes));
                $$->add($2);
                $5->name = "identifier" + std::to_string(++n_nodes);
                $$->add($5);
            }
            | FROM relative_module IMPORT '*' {
                $$ = new import_stmt("import_stmt" + std::to_string(++n_nodes)); $$->add($2);
                // $$ = $2;
            }

mymodule    : ',' module AS IDENTIFIER {
                $$ = new mymodule("mymodule" + std::to_string(++n_nodes));
                $$->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $$->add($4);
            }
            | ',' module {
                $$ = new mymodule("mymodule" + std::to_string(++n_nodes));
                $$->add($2);
            }
            | ',' module mymodule {
                $$ = new mymodule("mymodule" + std::to_string(++n_nodes));
                $3->add($2);
                $$ = $3;
            }
            | ',' module AS IDENTIFIER mymodule {
                $$ = new mymodule("mymodule" + std::to_string(++n_nodes));
                $5->add($2);
                $4->name = "identifier" + std::to_string(++n_nodes);
                $5->add($4);
                $$ = $5;
            };

module      : IDENTIFIER {
                $$ = new module("module" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
            }
            | identifiermodule IDENTIFIER {
                $$ = new module("module" + std::to_string(++n_nodes));
                $$->add($1);
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            };

identifiermodule    : IDENTIFIER '.' {
                        $$ = new identifiermodule("identifiermodule" + std::to_string(++n_nodes));
                        $1->name = "identifier" + std::to_string(++n_nodes);
                        $$->add($1);
                    }
                    | identifiermodule IDENTIFIER '.' {
                        $$ = new identifiermodule("identifiermodule" + std::to_string(++n_nodes));
                        $2->name = "identifier" + std::to_string(++n_nodes);
                        $1->add($2);
                        $$ = $1;
                    }

mymoduleidentifier : ',' IDENTIFIER {
                        $$ = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        $2->name = "identifier" + std::to_string(++n_nodes);
                        $$->add($2);
                    }
                    | ',' IDENTIFIER AS IDENTIFIER {
                        $$ = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        $2->name = "identifier" + std::to_string(++n_nodes);
                        $4->name = "identifier" + std::to_string(++n_nodes);
                        $$->add($2);
                        $$->add($4);
                    }
                    | ',' IDENTIFIER mymoduleidentifier {
                        $$ = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        $2->name = "identifier" + std::to_string(++n_nodes);
                        $3->add($2);
                        $$ = $3;
                    }
                    | ',' IDENTIFIER AS IDENTIFIER mymoduleidentifier {
                        $$ = new mymoduleidentifier("mymoduleidentifier" + std::to_string(++n_nodes));
                        $2->name = "identifier" + std::to_string(++n_nodes);
                        $4->name = "identifier" + std::to_string(++n_nodes);
                        $5->add($2);
                        $5->add($4);
                        $$ = $5;
                    };

relative_module : '.' {$$ = new relative_module("relative_module" + std::to_string(++n_nodes));}
                | module {$$ = new relative_module("relative_module" + std::to_string(++n_nodes)); $$->add($1);}
                | '.' relative_module {
                    $$ = new relative_module("relative_module" + std::to_string(++n_nodes));
                    $$ = $2;
                };

nonlocal_stmt : NONLOCAL IDENTIFIER {
                $$ = new nonlocal_stmt("nonlocal_stmt" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }
            | NONLOCAL IDENTIFIER myidentifier {
                $$ = new nonlocal_stmt("nonlocal_stmt" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
            };

global_stmt : GLOBAL IDENTIFIER {
                $$ = new global_stmt("global_stmt" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }
            | GLOBAL IDENTIFIER myidentifier {
                $$ = new global_stmt("global_stmt" + std::to_string(++n_nodes));
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
                $$->add($3);
            };

myidentifier : ',' IDENTIFIER {
                $$ = new myidentifier("myidentifier");
                $2->name = "identifier" + std::to_string(++n_nodes);
                $$->add($2);
            }
            | myidentifier ',' IDENTIFIER {
                $$ = new myidentifier("myidentifier" + std::to_string(++n_nodes));
                $3->name = "identifier" + std::to_string(++n_nodes);
                $1->add($3);
                $$ = $1;
            };

parameter_list  : defparameter mydefparameter ',' '/' ',' parameter_list_no_posonly {
                    $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                    $$->add($6);
                }
                | defparameter mydefparameter ',' '/' ',' {
                    $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                }
                | defparameter mydefparameter ',' '/' {
                    $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($2);
                }
                | defparameter ',' '/' ',' parameter_list_no_posonly {
                    $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes));
                    $$->add($1);
                    $$->add($5);
                }
                | defparameter ',' '/' ','  {
                    // $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}
                | defparameter ',' '/'      {
                    // $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}
                | parameter_list_no_posonly {
                    // $$ = new parameter_list("parameter_list" + std::to_string(++n_nodes)); $$->add($1);
                    $$ = $1;}

parameter_list_no_posonly : defparameter mydefparameter ',' parameter_list_starargs {
                                $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                $$->add($1);
                                $$->add($2);
                                $$->add($4);
                            }
                            | defparameter mydefparameter ',' {
                                $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                $$->add($1);
                                $$->add($2);
                            }
                            | defparameter mydefparameter {
                                $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                $$->add($1);
                                $$->add($2);
                            }
                            | defparameter ',' parameter_list_starargs {
                                $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes));
                                $$->add($1);
                                $$->add($3);
                            }
                            | defparameter ','          {
                                // $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes)); $$->add($1);
                            $$ = $1;}
                            | defparameter              {
                                // $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes)); $$->add($1);
                            $$ = $1;}
                            | parameter_list_starargs   {
                                // $$ = new parameter_list_no_posonly("parameter_list_no_posonly" + std::to_string(++n_nodes)); $$->add($1);
                            $$ = $1;}

mydefparameter  : ',' defparameter {
                    $$ = new mydefparameter("mydefparameter" + std::to_string(++n_nodes));
                    $$->add($2);
                }
                | ',' defparameter mydefparameter {
                    $$ = new mydefparameter("mydefparameter" + std::to_string(++n_nodes));
                    $3->add($2);
                    $$ = $3;
                }

parameter_list_starargs : '*' parameter mydefparameter ',' POWER parameter ',' {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($3);
                            $$->add($6);
                        }
                        | '*' parameter mydefparameter ',' POWER parameter {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($3);
                            $$->add($6);
                        }
                        | '*' parameter mydefparameter ',' {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($3);
                        }
                        | '*' parameter mydefparameter {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($3);
                        }
                        | '*' parameter ',' POWER parameter ',' {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($5);
                        }
                        | '*' parameter ',' POWER parameter {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($5);
                        }
                        | '*' parameter ',' {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            $$ = $2;}
                        | '*' parameter     {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            $$ = $2;}
                        | '*' mydefparameter ',' POWER parameter ',' {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($5);
                        }
                        | '*' mydefparameter ',' POWER parameter {
                            $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));
                            $$->add($2);
                            $$->add($5);
                        }
                        | '*' mydefparameter ','          {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            $$ = $2;}
                        | '*' mydefparameter              {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            $$ = $2;}
                        | '*' ',' POWER parameter ',' {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($4);
                            $$ = $4;}
                        | '*' ',' POWER parameter     {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($4);
                            $$ = $4;}
                        | '*' ',' {$$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));}
                        | '*' {$$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes));}
                        | POWER parameter ',' {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            $$ = $2;}
                        | POWER parameter     {
                            // $$ = new parameter_list_starargs("parameter_list_starargs" + std::to_string(++n_nodes)); $$->add($2);
                            $$ = $2;}

parameter : IDENTIFIER {
                $$ = new parameter("parameter" + std::to_string(++n_nodes));
                $1->name = "identifier" + std::to_string(++n_nodes);
                $$->add($1);
            }
        // | IDENTIFIER ':' expression ;

defparameter : parameter {
                // $$ = new defparameter("defparameter" + std::to_string(++n_nodes)); $$->add($1);
                $$ = $1;
            }
            | parameter '=' expression {
                $$ = new defparameter("defparameter" + std::to_string(++n_nodes));
                $$->add($1);
                $$->add($3);
            };

/*call        : primary '(' ')'
            | primary '(' argument_list ',' ')'
            | primary '(' argument_list ')'
            | primary '(' comprehension ')'
            | slicing '(' ')'
            | slicing '(' argument_list ',' ')'
            | slicing '(' argument_list ')'
            | slicing '(' comprehension ')'
            | attributeref '(' ')'
            | attributeref '(' argument_list ',' ')'
            | attributeref '(' argument_list ')'
            | attributeref '(' comprehension ')'
            | subscription '(' ')'
            | subscription '(' argument_list ',' ')'
            | subscription '(' argument_list ')'
            | subscription '(' comprehension ')'
            ;

argument_list       : positional_arguments ',' starred_and_keywords ',' keywords_arguments
                    // | positional_arguments ',' starred_and_keywords ',' keyword_item
                    // | positional_arguments ',' keyword_item ',' keywords_arguments
                    // | positional_arguments ',' keyword_item ',' keyword_item
                    | positional_arguments ',' starred_and_keywords
                    | positional_arguments ',' keywords_arguments
                    | starred_and_keywords ',' keywords_arguments
                    // | starred_and_keywords ',' keyword_item
                    // | positional_arguments ',' keyword_item
                    // | keyword_item ',' keywords_arguments
                    // | keyword_item ',' keyword_item
                    | positional_arguments
                    | starred_and_keywords
                    | keywords_arguments
                    // | keyword_item
positional_arguments : positional_item | positional_item mypositionalitem
mypositionalitem     : ',' positional_item | ',' positional_item mypositionalitem
positional_item      : assignment_expression | '*' expression
// starred_and_keywords :  ('*' expression | keyword_item) (',' '*' expression | ',' keyword_item)*
starred_and_keywords : '*' expression ',' starred_and_keywords
                        | '*' expression
                        | keyword_item
                        | keyword_item ',' starred_and_keywords
// keywords_arguments   :  (keyword_item | '**' expression) (',' keyword_item | ',' '**' expression)*
keywords_arguments : keyword_item ',' keywords_arguments
                    | POWER expression ',' keywords_arguments
                    | POWER expression
                    | keyword_item
// mykeyword_item :  ',' keyword_item | ',' keyword_item mykeyword_item
keyword_item         : IDENTIFIER '=' expression ;*/

/*future_stmt ::=  "from" "__future__" "import" feature ["as" identifier] ("," feature ["as" identifier])*
            | "from" "__future__" "import" "(" feature ["as" identifier] ("," feature ["as" identifier])* [","] ")"
feature     ::=  identifier
type_stmt ::=  'type' identifier [type_params] "=" expression*/

/*with_stmt          : WITH '(' with_stmt_contents ',' ')' ':' suite
                    | WITH '(' with_stmt_contents ')' ':' suite
                    | WITH with_stmt_contents ':' suite
with_stmt_contents : with_item | with_item mywithitem
mywithitem         : ',' with_item | mywithitem with_item
with_item          : expression AS target | expression

match_stmt   :  MATCH subject_expr ':' NEWLINE INDENT mycaseblock DEDENT
mycaseblock  : case_block | mycaseblock case_block
subject_expr : star_named_expression ',' star_named_expressions? | named_expression
case_block   :  CASE patterns ':' block | CASE patterns guard ':' block
guard :  IF assignment_expression*/

%%

int main(int argc, char **argv)
{
    if (argc > 1){
        for(int i=0;i<argc;i++)
            printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
    yyparse();

    if (root != NULL) {
        AST ast(root);
        ast.Print();
    }
    return 0;
}

void yyerror(const char *msg)
    {
        printf(" %s \n", msg);
    }