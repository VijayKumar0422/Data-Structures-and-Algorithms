/*

Problem Statement

Given a valid postfix expression containing single-digit operands and the 
operators +, -, * and /, evaluate the expression using a stack.

Input Format

The first line contains a postfix expression with tokens separated by spaces.

Output Format

Print the result of the expression.

Example

Input:
2 3 1 * + 9 -

Output:
-4

*/


#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int main() {

    string s = "2 3 1 * + 9 -";

    stack<int> st;
    stringstream ss(s);
    string token;

    while(ss >> token) {

        if(isdigit(token[0])) {
            st.push(token[0] - '0');
        }

        else {

            int b = st.top();
            st.pop();

            int a = st.top();
            st.pop();

            int result;

            if(token == "+")
                result = a + b;

            else if(token == "-")
                result = a - b;

            else if(token == "*")
                result = a * b;

            else
                result = a / b;

            st.push(result);
        }
    }

    cout << st.top();

    return 0;
}