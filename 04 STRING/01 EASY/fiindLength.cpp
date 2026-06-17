/*

Problem Statement

Given a string, find its length without using the built-in length() or size() function.

Example

Input:
Hello

Output:
5

*/


#include <iostream>
using namespace std;

int main() {

    char str[] = "Hello";
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    cout << "Length = " << length;

    return 0;
}