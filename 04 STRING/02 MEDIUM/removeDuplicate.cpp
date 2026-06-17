/*

Problem Statement

Given a string, remove all duplicate characters while keeping the first occurrence.

Example

Input:
programming

Output:
progamin

*/


# include <iostream>
using namespace std;
int main() {

    char str[] = "programming";

    for(int i = 0; str[i] != '\0'; i++) {
        bool duplicate = false;

        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            cout << str[i];
        }
    }

    return 0;
}