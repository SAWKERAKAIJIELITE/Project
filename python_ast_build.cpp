#include "python_ast_node.hpp"


// int main() {
//     AstNode* idFunc = new IdentifierNode("id1","identifier","ismaeel");
//     AstNode* idArg1 = new IdentifierNode("id2","identifier","x");
//     AstNode* idArg2 = new IdentifierNode("id3","identifier","y");
//     AstNode* idVariable = new IdentifierNode("id4","identifier","z");
//     AstNode* nodeFunc=new FunctionNode("Func1");
//     AstNode* arguments=new Args("FunctionArgs1");
//     arguments->add(idArg1);
//     arguments->add(idArg2);
//     nodeFunc->add(arguments);
//     AstNode* block=new BlockNode("block1");
//     AstNode* assign=new assignmentStatement("assign1");
//     assign->add(idVariable);
//     assign->add(idArg2);
//     block->add(assign);
//     nodeFunc->add(block);
//     AST ast(nodeFunc);
//     ast.Print();
//     // Clean up
//     delete nodeFunc;
//     return 0;
// }

    // AstNode* number = new NumberNode("y", 42.5);
    // AstNode* binaryExpr = new BinaryExpressionNode('+', identifier, number);
    // AstNode* functionCall = new FunctionNode("foo");
    // functionCall->add(identifier);
    // functionCall->add(number);
    // functionCall->add(binaryExpr);
    // AstNode* statement1 = new StatementsNode("stmt1");
    // statement1->add(new IdentifierNode("a"));
    // statement1->add(new NumberNode("b", 10.0));
    // AstNode* statement2 = new StatementsNode("stmt2");
    // statement2->add(new IdentifierNode("c"));
    // statement2->add(new BinaryExpressionNode('+', identifier, number));
    // AstNode* program = new StatementsNode("program");
    // program->add(functionCall);
    // program->add(statement1);
    // program->add(statement2);
