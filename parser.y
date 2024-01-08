
%code requires {
    #include "python_ast_node.hpp"
}

%code{
    #include <iostream>
    #include <string>
	#include <unistd.h>
}
%union{
    AstNode* astNode;
    double d;
}
%{
    extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
    void yyerror(const char *);
    AstNode* root = nullptr;
%}


%token <astNode> ID NUMBER STRING ASSIGN RETURN IF ELSE ELIF COLON
%token <astNode> EQ PLUS MINUS MUL DIVIDE LBRACKET RBRACKET SEMICOLON EQUAL
%token <astNode> PRINT KEYWORD IDENTIFIER DEF
%token <astNode> INDENT DEDENT NEWLINE
%type  <astNode> function args args_ arg block statements simple_stmt assignment  
%nonassoc EQUAL
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%%

function: DEF IDENTIFIER '(' args ')' COLON block {
    $$ = new FunctionNode( $2->name);
    $$->add($4);
    $$->add($7);
    root = $$;
            //printf("Function successfully parsed:\n"); 
    YYACCEPT;
            };

args  : /* empty params */ { $$ = nullptr;}
    | args_  {  $$ = $1; }
    ;

args_ : arg { $$ = new Args("Args"); $$->add($1);}
    | args_ ',' arg {  $1->add($3); $$ = $1; }
    ;

arg   : IDENTIFIER {$$ = new Arg("Arg"); $$->add($1);};


block : NEWLINE INDENT statements DEDENT { $$ = $3;};

statements : simple_stmt  { $$ = new StatementsNode("Statements"); $$->add($1); }
            | statements simple_stmt {  $1->add($2); $$ = $1;}
            ;

simple_stmt: assignment NEWLINE {  $$ = $1; };


assignment : IDENTIFIER ASSIGN NUMBER 
{   $$ = new assignmentStatement("assign1");
    $$->add($1);
    $$->add($3);} ;

%%

int main(int argc, char **argv)
{
    if (argc > 1){
        for(int i=0;i<argc;i++)
            // printf("value of argv[%d] = %s\n\n",i,argv[i]);
            yyin=fopen(argv[1],"r");
    }
        else
        yyin=stdin;
    printf("now is parse");
    yyparse();
    printf("now after is parse");
    // AST is constructed, you can print it now
    if (root != nullptr) {
        AST ast(root);
        ast.Print();
    }
    return 0;
}

void yyerror(const char* s) {
    std::cerr << "Parser error: " << s << std::endl;
}