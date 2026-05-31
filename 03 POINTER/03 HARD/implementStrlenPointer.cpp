/*

Problem Statement

Given a character array (string),
find length of string using pointers only.

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
    char *p = str;
    int length = 0;

    while(*p != '\0') {
        length++;
        p++;
    }

    cout << "Length = " << length;

    return 0;
}