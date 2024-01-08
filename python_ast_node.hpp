/** @name python_ast_node.h
* @description Hierarchy of AST
* @author Ismaeel_J_K 
* @example x=y+99
*                        |---------|
*                        | AstNode |
*                        |---------|
*                             |
*                             |
*                      |--------------|
*                      |    Assign    |
*                      |--------------|
*                          |        |
*                         |           |
*                        |              |
*                    |------------|   |--------------|
*                    |     x      |   |      Plus    |
*                    |------------|   |--------------|
*                                       |          |
*                                      |            |
*                                     |              |
*                           |-------------|     |-------------|
*                           |       y     |     |       99    |
*                           |-------------|     |-------------|
*                                       
*/

#ifndef AST_NODE_H
#define AST_NODE_H

#include <iostream>
#include <vector>
// #include <stdlib.h>


// Abstract base class for AST nodes
class AstNode {

    public:
        std::string name = "undefined";   // String member variable with default value

        std::string label = "undefined";

        virtual void add(AstNode* node) = 0;

        virtual void print() const = 0;

        virtual ~AstNode() {}
};

class NonTerminal : public AstNode {
    public:
        std::vector<AstNode*> next;

        void add(AstNode* node) override {
            next.push_back(node);
        }
};
class program : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        program(const std::string& name) {
            this->name = name;
            this->label = "Root";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~program() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class statements : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        statements(const std::string& name) {
            this->name = name;
            this->label = "statements";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~statements() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class compound_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        compound_stmt(const std::string& name) {
            this->name = name;
            this->label = "compound_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~compound_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class suite : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        suite(const std::string& name) {
            this->name = name;
            this->label = "suite";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~suite() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mystatement : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mystatement(const std::string& name) {
            this->name = name;
            this->label = "mystatement";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mystatement() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class statement : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        statement(const std::string& name) {
            this->name = name;
            this->label = "statement";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~statement() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class stmt_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        stmt_list(const std::string& name) {
            this->name = name;
            this->label = "stmt_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~stmt_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mysimplestmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mysimplestmt(const std::string& name) {
            this->name = name;
            this->label = "mysimplestmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mysimplestmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class myelifstmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        myelifstmt(const std::string& name) {
            this->name = name;
            this->label = "myelifstmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~myelifstmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class if_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        if_stmt(const std::string& name) {
            this->name = name;
            this->label = "if_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~if_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class while_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        while_stmt(const std::string& name) {
            this->name = name;
            this->label = "while_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~while_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class for_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        for_stmt(const std::string& name) {
            this->name = name;
            this->label = "for_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~for_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class try_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        try_stmt(const std::string& name) {
            this->name = name;
            this->label = "try_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~try_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class try1_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        try1_stmt(const std::string& name) {
            this->name = name;
            this->label = "try1_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~try1_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mytry1 : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mytry1(const std::string& name) {
            this->name = name;
            this->label = "mytry1";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mytry1() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class myexcept1 : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        myexcept1(const std::string& name) {
            this->name = name;
            this->label = "myexcept1";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~myexcept1() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class try2_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        try2_stmt(const std::string& name) {
            this->name = name;
            this->label = "try2_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~try2_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mytry2 : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mytry2(const std::string& name) {
            this->name = name;
            this->label = "mytry2";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mytry2() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class myexcept2 : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        myexcept2(const std::string& name) {
            this->name = name;
            this->label = "myexcept2";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~myexcept2() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class try3_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        try3_stmt(const std::string& name) {
            this->name = name;
            this->label = "try3_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~try3_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class funcdef : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        funcdef(const std::string& name) {
            this->name = name;
            this->label = "funcdef";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~funcdef() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class decorators : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        decorators(const std::string& name) {
            this->name = name;
            this->label = "decorators";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~decorators() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class decorator : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        decorator(const std::string& name) {
            this->name = name;
            this->label = "decorator";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~decorator() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class classdef : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        classdef(const std::string& name) {
            this->name = name;
            this->label = "classdef";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~classdef() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class inheritance : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        inheritance(const std::string& name) {
            this->name = name;
            this->label = "inheritance";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~inheritance() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class type_params : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        type_params(const std::string& name) {
            this->name = name;
            this->label = "type_params";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~type_params() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mytypeparam : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mytypeparam(const std::string& name) {
            this->name = name;
            this->label = "mytypeparam";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mytypeparam() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class type_param : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        type_param(const std::string& name) {
            this->name = name;
            this->label = "type_param";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~type_param() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class async_funcdef : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        async_funcdef(const std::string& name) {
            this->name = name;
            this->label = "async_funcdef";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~async_funcdef() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class async_for_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        async_for_stmt(const std::string& name) {
            this->name = name;
            this->label = "async_for_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~async_for_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class atom : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        atom(const std::string& name) {
            this->name = name;
            this->label = "atom";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~atom() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class enclosure : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        enclosure(const std::string& name) {
            this->name = name;
            this->label = "enclosure";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~enclosure() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class parenth_form : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        parenth_form(const std::string& name) {
            this->name = name;
            this->label = "parenth_form";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~parenth_form() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class comprehension : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        comprehension(const std::string& name) {
            this->name = name;
            this->label = "comprehension";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~comprehension() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class comp_for : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        comp_for(const std::string& name) {
            this->name = name;
            this->label = "comp_for";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~comp_for() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class comp_iter : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        comp_iter(const std::string& name) {
            this->name = name;
            this->label = "comp_iter";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~comp_iter() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class comp_if : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        comp_if(const std::string& name) {
            this->name = name;
            this->label = "comp_if";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~comp_if() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class list_display : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        list_display(const std::string& name) {
            this->name = name;
            this->label = "list_display";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~list_display() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class set_display : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        set_display(const std::string& name) {
            this->name = name;
            this->label = "set_display";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~set_display() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class dict_display : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        dict_display(const std::string& name) {
            this->name = name;
            this->label = "dict_display";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~dict_display() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class dict_item_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        dict_item_list(const std::string& name) {
            this->name = name;
            this->label = "dict_item_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~dict_item_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mydictitem : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mydictitem(const std::string& name) {
            this->name = name;
            this->label = "mydictitem";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mydictitem() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class dict_item : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        dict_item(const std::string& name) {
            this->name = name;
            this->label = "dict_item";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~dict_item() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class dict_comprehension : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        dict_comprehension(const std::string& name) {
            this->name = name;
            this->label = "dict_comprehension";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~dict_comprehension() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class generator_expression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        generator_expression(const std::string& name) {
            this->name = name;
            this->label = "generator_expression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~generator_expression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class yield_atom : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        yield_atom(const std::string& name) {
            this->name = name;
            this->label = "yield_atom";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~yield_atom() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class yield_expression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        yield_expression(const std::string& name) {
            this->name = name;
            this->label = "yield_expression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~yield_expression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class myreduce : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        myreduce(const std::string& name) {
            this->name = name;
            this->label = "myreduce";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~myreduce() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class primary : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        primary(const std::string& name) {
            this->name = name;
            this->label = "primary";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~primary() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class attributeref : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        attributeref(const std::string& name) {
            this->name = name;
            this->label = "attributeref";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~attributeref() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class subscription : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        subscription(const std::string& name) {
            this->name = name;
            this->label = "subscription";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~subscription() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class slicing : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        slicing(const std::string& name) {
            this->name = name;
            this->label = "slicing";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~slicing() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class slice_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        slice_list(const std::string& name) {
            this->name = name;
            this->label = "slice_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~slice_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mysliceitem : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mysliceitem(const std::string& name) {
            this->name = name;
            this->label = "mysliceitem";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mysliceitem() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class slice_item : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        slice_item(const std::string& name) {
            this->name = name;
            this->label = "slice_item";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~slice_item() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class proper_slice : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        proper_slice(const std::string& name) {
            this->name = name;
            this->label = "proper_slice";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~proper_slice() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class await_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        await_expr(const std::string& name) {
            this->name = name;
            this->label = "await_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~await_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class power : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        power(const std::string& name) {
            this->name = name;
            this->label = "power";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~power() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class u_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        u_expr(const std::string& name) {
            this->name = name;
            this->label = "u_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~u_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class m_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        m_expr(const std::string& name) {
            this->name = name;
            this->label = "m_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~m_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class a_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        a_expr(const std::string& name) {
            this->name = name;
            this->label = "a_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~a_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class shift_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        shift_expr(const std::string& name) {
            this->name = name;
            this->label = "shift_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~shift_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class and_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        and_expr(const std::string& name) {
            this->name = name;
            this->label = "and_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~and_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class xor_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        xor_expr(const std::string& name) {
            this->name = name;
            this->label = "xor_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~xor_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class or_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        or_expr(const std::string& name) {
            this->name = name;
            this->label = "or_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~or_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class comparison : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        comparison(const std::string& name) {
            this->name = name;
            this->label = "comparison";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~comparison() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mycomparison : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mycomparison(const std::string& name) {
            this->name = name;
            this->label = "mycomparison";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mycomparison() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class comp_operator : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        comp_operator(const std::string& name) {
            this->name = name;
            this->label = "comp_operator";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~comp_operator() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class or_test : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        or_test(const std::string& name) {
            this->name = name;
            this->label = "or_test";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~or_test() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class and_test : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        and_test(const std::string& name) {
            this->name = name;
            this->label = "and_test";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~and_test() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class not_test : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        not_test(const std::string& name) {
            this->name = name;
            this->label = "not_test";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~not_test() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class assignment_expression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        assignment_expression(const std::string& name) {
            this->name = name;
            this->label = "assignment_expression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~assignment_expression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class conditional_expression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        conditional_expression(const std::string& name) {
            this->name = name;
            this->label = "conditional_expression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~conditional_expression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class expression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        expression(const std::string& name) {
            this->name = name;
            this->label = "expression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~expression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class lambda_expr : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        lambda_expr(const std::string& name) {
            this->name = name;
            this->label = "lambda_expr";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~lambda_expr() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class expression_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        expression_list(const std::string& name) {
            this->name = name;
            this->label = "expression_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~expression_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class myexpression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        myexpression(const std::string& name) {
            this->name = name;
            this->label = "myexpression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~myexpression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class starred_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        starred_list(const std::string& name) {
            this->name = name;
            this->label = "starred_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~starred_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mystarreditem : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mystarreditem(const std::string& name) {
            this->name = name;
            this->label = "mystarreditem";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mystarreditem() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class starred_expression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        starred_expression(const std::string& name) {
            this->name = name;
            this->label = "starred_expression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~starred_expression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mystarredexpression : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mystarredexpression(const std::string& name) {
            this->name = name;
            this->label = "mystarredexpression";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mystarredexpression() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class starred_item : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        starred_item(const std::string& name) {
            this->name = name;
            this->label = "starred_item";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~starred_item() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class simple_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        simple_stmt(const std::string& name) {
            this->name = name;
            this->label = "simple_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~simple_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class expression_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        expression_stmt(const std::string& name) {
            this->name = name;
            this->label = "expression_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~expression_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class assert_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        assert_stmt(const std::string& name) {
            this->name = name;
            this->label = "assert_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~assert_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class assignment_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        assignment_stmt(const std::string& name) {
            this->name = name;
            this->label = "assignment_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~assignment_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mytargetlist : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mytargetlist(const std::string& name) {
            this->name = name;
            this->label = "mytargetlist";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mytargetlist() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class target_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        target_list(const std::string& name) {
            this->name = name;
            this->label = "target_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~target_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mytarget : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mytarget(const std::string& name) {
            this->name = name;
            this->label = "mytarget";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mytarget() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class target : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        target(const std::string& name) {
            this->name = name;
            this->label = "target";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~target() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class augmented_assignment_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        augmented_assignment_stmt(const std::string& name) {
            this->name = name;
            this->label = "augmented_assignment_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~augmented_assignment_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class augtarget : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        augtarget(const std::string& name) {
            this->name = name;
            this->label = "augtarget";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~augtarget() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class augop : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        augop(const std::string& name) {
            this->name = name;
            this->label = "augop";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~augop() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class annotated_assignment_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        annotated_assignment_stmt(const std::string& name) {
            this->name = name;
            this->label = "annotated_assignment_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~annotated_assignment_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class return_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        return_stmt(const std::string& name) {
            this->name = name;
            this->label = "return_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~return_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class del_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        del_stmt(const std::string& name) {
            this->name = name;
            this->label = "del_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~del_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class yield_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        yield_stmt(const std::string& name) {
            this->name = name;
            this->label = "yield_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~yield_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class raise_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        raise_stmt(const std::string& name) {
            this->name = name;
            this->label = "raise_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~raise_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class import_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        import_stmt(const std::string& name) {
            this->name = name;
            this->label = "import_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~import_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mymodule : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mymodule(const std::string& name) {
            this->name = name;
            this->label = "mymodule";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mymodule() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class module : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        module(const std::string& name) {
            this->name = name;
            this->label = "module";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~module() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class identifiermodule : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        identifiermodule(const std::string& name) {
            this->name = name;
            this->label = "identifiermodule";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~identifiermodule() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mymoduleidentifier : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mymoduleidentifier(const std::string& name) {
            this->name = name;
            this->label = "mymoduleidentifier";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mymoduleidentifier() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class relative_module : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        relative_module(const std::string& name) {
            this->name = name;
            this->label = "relative_module";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~relative_module() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class nonlocal_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        nonlocal_stmt(const std::string& name) {
            this->name = name;
            this->label = "nonlocal_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~nonlocal_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class global_stmt : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        global_stmt(const std::string& name) {
            this->name = name;
            this->label = "global_stmt";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~global_stmt() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class myidentifier : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        myidentifier(const std::string& name) {
            this->name = name;
            this->label = "myidentifier";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~myidentifier() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class parameter_list : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        parameter_list(const std::string& name) {
            this->name = name;
            this->label = "parameter_list";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~parameter_list() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class parameter_list_no_posonly : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        parameter_list_no_posonly(const std::string& name) {
            this->name = name;
            this->label = "parameter_list_no_posonly";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~parameter_list_no_posonly() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class mydefparameter : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        mydefparameter(const std::string& name) {
            this->name = name;
            this->label = "mydefparameter";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~mydefparameter() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class parameter_list_starargs : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        parameter_list_starargs(const std::string& name) {
            this->name = name;
            this->label = "parameter_list_starargs";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~parameter_list_starargs() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class parameter : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        parameter(const std::string& name) {
            this->name = name;
            this->label = "parameter";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~parameter() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

class defparameter : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        defparameter(const std::string& name) {
            this->name = name;
            this->label = "defparameter";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << " : "<< name << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                // example
                // Func -> args
                // Func -> body
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& item : next) {
                std::cout << "\t" << name << " -> " << item->name << ";" << std::endl;
                item->print();
            }
        }

        ~defparameter() {
            for (const auto& arg : next) {
                delete arg;
            }
        }
};

// base node for representing identifier ,will create object from lexer
class IdentifierNode : public AstNode {

    public:
        std::string value = "undefined";

        IdentifierNode(std::string name, std::string label, std::string value) {
            this->name = name;
            this->label = label;
            this->value = value;
        }

        void add(AstNode* node) override {
            std::cerr << "Cannot add a child to a leaf node." << std::endl;
        }

        void print() const override {
            std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
        }
};

class Arg : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        Arg(const std::string& name) {
            this->name = name;
            this->label = "Argument";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
            for (const auto& arg : next) {
                arg->print();
            }
        }
};

class Args : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        Args(const std::string& name) {
            this->name = name;
            this->label = "Arguments";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

            for (const auto& arg : next) {
                std::cout << "\t" << name << " -> " << arg->name << ";" << std::endl;
                arg->print();
            }
        }
};

class BlockNode : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        BlockNode(const std::string& name) {
            this->name = name;
            this->label = "Block";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;
            /*std::vector<AstNode*>::iterator it;
                for (it = next.begin(); it != next.end(); ++it) {
                std::cout << "\t" << name << " -> " << (*it)->name << ";" << std::endl;
                (*it)->print();}*/
            for (const auto& stmt : next) {
                std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
                stmt->print();
            }
        }

        ~BlockNode() {
            for (const auto& stmt : next) {
                delete stmt;
            }
        }
};

class StatementsNode : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        StatementsNode(const std::string& name) {
            this->name = name;
            this->label = "Block Statements";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

            for (const auto& stmt : next) {
                std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
                stmt->print();
            }
        }

        ~StatementsNode() {
            for (const auto& stmt : next) {
                delete stmt;
            }
        }
};

class assignmentStatement : public AstNode {

    private:
        std::vector<AstNode*> next;

    public:
        assignmentStatement(const std::string& name) {
            this->name = name;
            this->label = "assignment";
        }

        void add(AstNode* node) override {
            next.push_back(node);
        }

        void print() const override {
            std::cout << "\t" << name << " [label=\"" << label << "\"]" << std::endl;

            for (const auto& stmt : next) {
                std::cout << "\t" << name << " -> " << stmt->name << ";" << std::endl;
                stmt->print();
            }
        }

        ~assignmentStatement() {
            for (const auto& stmt : next) {
                delete stmt;
            }
        }
};

// Leaf node for representing numeric literals
class NumberNode : public AstNode {

    private:
        int value;

    public:
        NumberNode(std::string name, std::string label, int value) {
            this->name = name;
            this->label = label;
            this->value = value; 
        }

        void add(AstNode* /*node*/) override {
            std::cerr << "Cannot add a child to a leaf node." << std::endl;
        }

        void print() const override {
            std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
        }
};

// Leaf node for representing numeric literals
class BooleanNode : public AstNode {

    private:
        bool value;

    public:
        BooleanNode(std::string name, std::string label, bool value) {
            this->name = name;
            this->label = label;
            this->value = value;
        }

        void add(AstNode* /*node*/) override {
            std::cerr << "Cannot add a child to a leaf node." << std::endl;
        }

        void print() const override {
            std::cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << std::endl;
        }
};

class AST {

    private:
        AstNode* root = nullptr;

    public:
        AST(AstNode* r) : root(r) {}

        ~AST() {
            if (root != nullptr) {
                delete root;
                root = nullptr;
            }
        }

        void Print() {
            std::cout << "digraph G {" << std::endl;
            root->print();
            std::cout << "}" << std::endl;
        }
};
#endif
