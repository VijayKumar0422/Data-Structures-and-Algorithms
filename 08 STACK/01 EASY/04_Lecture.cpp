/*

Problem Statement
Given a string, reverse it using a stack and print the reversed string.

Input Format
The first line contains a string S without spaces.

Output Format
Print the reversed string.

Example

Input:
hello

Output:
olleh

*/


#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "hello";

    char stack[100];
    int top = -1;

    // Push characters into stack
    for(int i = 0; i < s.length(); i++) {
        top++;
        stack[top] = s[i];
    }

    // Pop characters and print
    while(top >= 0) {
        cout << stack[top];
        top--;
    }

    return 0;
}