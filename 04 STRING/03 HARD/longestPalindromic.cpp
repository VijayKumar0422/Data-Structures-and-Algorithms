/*

Problem Statement

Given a string, find the longest palindromic substring.

Example

Input:
babad

Output:
bab

*/


#include <iostream>
#include <string>
using namespace std;
int main() {

    string s = "babad";

    int start = 0;
    int maxLen = 1;

    for(int i = 0; i < s.length(); i++) {

        int left = i;
        int right = i;

        while(left >= 0 &&
              right < s.length() &&
              s[left] == s[right]) {

            if(right - left + 1 > maxLen) {

                maxLen = right - left + 1;
                start = left;
            }

            left--;
            right++;
        }

        left = i;
        right = i + 1;

        while(left >= 0 &&
              right < s.length() &&
              s[left] == s[right]) {

            if(right - left + 1 > maxLen) {

                maxLen = right - left + 1;
                start = left;
            }

            left--;
            right++;
        }
    }

    cout << s.substr(start, maxLen);

    return 0;
}