/*

Problem Statement

Given an array of strings, find the longest common prefix.

Example

Input:
flower
flow
flight

Output:
fl

*/


#include <iostream>
using namespace std;

int main() {

    string str1 = "flower";
    string str2 = "flow";
    string str3 = "flight";

    string ans = "";
    int i = 0;

    while(i < str1.length() &&
          i < str2.length() &&
          i < str3.length()) {

        if(str1[i] == str2[i] &&
           str2[i] == str3[i]) {

            ans += str1[i];

        } else {

            break;
        }

        i++;
    }

    cout << "Longest Common Prefix = "
         << ans;

    return 0;
}