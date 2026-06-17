/*

Problem Statement

Given two strings, check whether one string is a rotation of another.

Example

Input:
abcd
cdab

Output:
Yes

*/


#include <iostream>
#include <string>
using namespace std;

int main() {

    string str1 = "abcd";
    string str2 = "cdab";

    string temp = str1 + str1;

    if(temp.find(str2) != string::npos) {

        cout << "Yes";

    } else {

        cout << "No";
    }

    return 0;
}