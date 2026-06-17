/*

Problem Statement

Given a string, count the number of vowels present in it.

Example

Input:
education

Output:
5

*/

#include <iostream>
using namespace std;

int main() {

    char str[] = "education";
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == 'a' ||
           str[i] == 'e' ||
           str[i] == 'i' ||
           str[i] == 'o' ||
           str[i] == 'u') {

            count++;
        }
    }

    cout << "Vowels = " << count;

    return 0;
}