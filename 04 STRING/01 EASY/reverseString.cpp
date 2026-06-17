/*

Problem Statement

Given a string, reverse it and print the result.

Example

Input:
hello

Output:
olleh

*/

#include <iostream>
using namespace std;

int main() {

    char str[] = "hello";
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    cout << "Reversed String = ";

    for(int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}
