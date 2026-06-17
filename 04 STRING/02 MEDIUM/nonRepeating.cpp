/*

Problem Statement

Given a string, find the first character that appears only once.

Example

Input:
leetcode

Output:
l

*/

#include <iostream>
using namespace std;
int main() {

    char str[] = "leetcode";

    for(int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for(int j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }

        if(count == 1) {
            
            cout << "First Unique Character = "
                 << str[i];

            break;
        }
    }

    return 0;
}