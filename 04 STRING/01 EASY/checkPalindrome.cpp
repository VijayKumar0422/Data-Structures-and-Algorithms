/*

Problem Statement

Given a string, check whether it is a palindrome or not.

Example

Input:
madam

Output:
Palindrome

*/


#include <iostream>
using namespace std;

int main() {

    char str[] = "madam";
    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    bool palindrome = true;

    for(int i = 0; i < length / 2; i++) {

        if(str[i] != str[length - 1 - i]) {

            palindrome = false;

            break;
        }
    }

    if(palindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}