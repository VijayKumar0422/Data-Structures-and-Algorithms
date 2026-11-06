/*

Problem Statement
Given a string containing only the characters (, ), {, }, [ and ], 
determine whether the parentheses are balanced using a stack.

Input Format
The first line contains a string S consisting of parentheses characters.

Output Format
Print Balanced if all parentheses are correctly matched; otherwise print Not Balanced.

Example

Input:
{[()]}

Output:
Balanced

*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "{[()]}";

    char stack[100];
    int top = -1;

    for(int i = 0; i < s.length(); i++) {

        char ch = s[i];

        // Push opening brackets
        if(ch == '(' || ch == '{' || ch == '[') {
            top++;
            stack[top] = ch;
        }

        // Check closing brackets
        else {

            if(top == -1) {
                cout << "Not Balanced";
                return 0;
            }

            char t = stack[top];

            if((ch == ')' && t == '(') ||
               (ch == '}' && t == '{') ||
               (ch == ']' && t == '[')) {

                top--;
            }
            else {
                cout << "Not Balanced";
                return 0;
            }
        }
    }

    if(top == -1)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}