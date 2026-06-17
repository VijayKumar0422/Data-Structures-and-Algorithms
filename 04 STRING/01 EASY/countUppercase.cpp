/*

Problem Statement

Given a string, count uppercase and lowercase characters separately.

Example

Input:
HeLLo

Output:
Uppercase = 3
Lowercase = 2

*/


#include <iostream>
using namespace std;
int main() {

    char str[] = "HeLLo";

    int upper = 0;
    int lower = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] >= 'A' && str[i] <= 'Z') {

            upper++;
        }

        else if(str[i] >= 'a' && str[i] <= 'z') {

            lower++;
        }
    }

    cout << "Uppercase = " << upper << endl;
    cout << "Lowercase = " << lower;

    return 0;
}