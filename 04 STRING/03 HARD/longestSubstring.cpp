/*

Problem Statement

Given a string, find the length of the longest substring without repeating characters.

Example

Input:
abcabcbb

Output:
3

*/


#include <iostream>
using namespace std;
int main() {

    string str = "abcabcbb";
    int maxLen = 0;

    for(int i = 0; i < str.length(); i++) {
        bool visited[256] = {false};
        int len = 0;

        for(int j = i; j < str.length(); j++) {

            if(visited[str[j]]) {

                break;
            }

            visited[str[j]] = true;

            len++;
        }

        if(len > maxLen) {
            maxLen = len;
        }
    }

    cout << "Length = " << maxLen;

    return 0;
}