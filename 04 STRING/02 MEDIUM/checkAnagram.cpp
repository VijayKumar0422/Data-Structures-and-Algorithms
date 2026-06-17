/*

Problem Statement

Given two strings, check whether they are anagrams of each other.

Example

Input:
listen
silent

Output:
Anagram

*/


#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string str1 = "listen";
    string str2 = "silent";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2) {
        cout << "Anagram";
    } else {
        cout << "Not Anagram";
    }

    return 0;
}