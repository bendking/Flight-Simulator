//
// Created by ben on 12/15/18.
//

#include <cstring>
#include "Parser.h"
#include <queue>
#include <stack>
#include <iostream>
#include "CommandLibrary.h"

Parser::Parser() {

}
// This function takes care of all cases beside If and While, which are taken care of in the interpreter
Command* Parser::parse(CodeRow& row)
{
    // For put value commands (X = ...) the

    std::vector<std::string> args= row.getArgs();
    std::string commandName = args[0];

    if (commandName == "openDataServer") {
        new OpenServer(shuntingYard(args[1]), shuntingYard(args[2]));
    }
    else if (commandName == "connect") {
        new Connect(args[1], shuntingYard(args[2]));
    }
    else if (commandName == "var") {
        if (args[3] == "bind") {
            //need to bind
            return new DefineVar(args[1], args[4]);
        } else {
            //number
            Expression *exp = shuntingYard(args[3]);
            return new DefineVar(args[1], exp);
        }
    }
    else if (commandName == "print") {
        if (args[1][0] == '\"') {
            //need to print all of it
            return new Print(args[1]);
        } else {
            //need to print a varibale
            return new Print(shuntingYard(args[1]));
        }
    }
    else if (commandName == "sleep") {
        return new Sleep(shuntingYard(args[1]));
    }
    else{
        //it's a variable name by PutVar
        if (args[2] == "bind") {
            //need to bind
            return new PutVar(args[0], args[3]);
        } else {
            //number
            Expression *exp = shuntingYard(args[2]);
            return new PutVar(args[0], exp);
        }
    }


}


//
// Helper functions for Shunting Yard
//

bool isNumberOrColons(char c)
{
    if ((c >= '0' && c <= '9') || c == '.') {
        return true;
    }
    return false;
}
bool isOperator(char c)
{
    if (c == '/' || c == '*' || c == '+' || c == '-' || c == '@') {
        return true;
    }
    return false;
}
bool isOperatorOrOpenCloser(char c)
{
    if (c == '(' || isOperator(c)) {
        return true;
    }
    return false;
}
bool isEnglishOrUnderscore(char c)
{
    if  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_') {
        return true;
    }
    return false;
}

bool isEnglishOrUnderscoreOrNumber(char c)
{
    if  (isEnglishOrUnderscore(c) || isdigit(c)) {
        return true;
    }
    return false;
}

// check if operator1 is before operator2
bool isBefore(char operator1, char operator2)
{
    if (operator1 == '(') {
        return false;
    }
    if (operator1 == '@') {
        return true;
    }
    if (operator1 == '/' || operator1 == '*') {
        if (operator2 == '+' || operator2 == '-') {
            //operator1 is before operator2
            return true;
        }
    }
    return false;
}

// The Shunting Yard
Expression* Parser::shuntingYard(std::string s)
{
    std::queue<std::string> postfix;
    std::stack<char> operators;

    for(int i = 0; i < s.length(); i+=1) {
        //in case of number
        if (isdigit(s[i])) {
            std::string number = "";
            while (isNumberOrColons(s[i])) {
                number += s[i];
                i++;
            }
            i--;
            postfix.push(number);
        }
        else if (s[i] == '-' && (i == 0 || isOperatorOrOpenCloser(s[i-1]))) {
            //unary minus
            operators.push('@');
        }
        //in case of / * + -
        else if (isOperator(s[i])) {
                while (! operators.empty()) {
                    char c2 = operators.top();
                    if (isBefore(c2, s[i])) {
                        operators.pop();
                        postfix.push(std::string(1, c2));
                    } else {
                        break;
                    }
                }
            operators.push(s[i]);
        }

        else if (s[i] == '(') {
            operators.push('(');
        }

        else if (s[i] == ')') {
            while (!operators.empty()) {
                char c = operators.top();
                operators.pop();

                //done
                if (c == '(') {
                    break;
                }
                //push to queue
                postfix.push(std::string(1, c));
            }
        }

        //in case of variable
        else if (isEnglishOrUnderscore(s[i])) {
            std::string var = "";
            while (isEnglishOrUnderscoreOrNumber(s[i])) {
                var += std::string(1, s[i]);
                i++;
            }
            i--;
            postfix.push(var);
        }
    }
    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();

        postfix.push(std::string(1, op));
    }


    //Read Reversed Polish Notation
    std::stack<Expression*> st;

    while (!postfix.empty()) {
        char first = postfix.front()[0];
        std::string str = postfix.front();

        if (isdigit(first)) {
            //number
            st.push(new Number(postfix.front()));
            postfix.pop();
        }
        else if (isOperator(first)) {
            postfix.pop();

            Expression *a, *b;
            //operator
            switch (first) {
                case '/':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(new Division(b, a));
                    break;
                case '*':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(new Multiply(b, a));
                    break;
                case '+':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(new Plus(a, b));
                    break;
                case '-':
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.pop();
                    st.push(new Minus(a, b));
                    break;
                case '@':
                    a = st.top();
                    st.pop();
                    st.push(new UnaryMinus(a));
                    break;
            }
        }
        else {
            //Variable
            st.push(new Variable(postfix.front()));
            postfix.pop();
        }
    }

    Expression* p = st.top();
    st.pop();
    return p;
}

