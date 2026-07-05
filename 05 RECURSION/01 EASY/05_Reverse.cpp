/*

Problem Statement

Given a string, print the reverse of the string using Recursion only.

Example

Input:
Hello

Output:
olleH

*/

#include <iostream>
using namespace std;

void reverseString(string str, int index) {

    if(index == str.length()) {
        return;
    }

    reverseString(str, index + 1);

    cout << str[index];
}

int main() {

    string str = "Hello";

    reverseString(str, 0);

    return 0;
}