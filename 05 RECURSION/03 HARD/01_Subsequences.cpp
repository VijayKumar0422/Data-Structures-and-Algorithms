/*

Problem Statement

Given a string, generate and print all possible subsequences using Recursion.

Example

Input:
abc

Output:
abc
ab
ac
bc
a
b
c
(empty string)

*/


#include <iostream>
using namespace std;

void subsequence(string str, int index, string ans) {

    if(index == str.length()) {

        if(ans == "")
            cout << "(empty)";
        else
            cout << ans;

        cout << endl;
        return;
    }

    // Include current character
    subsequence(str, index + 1, ans + str[index]);

    // Exclude current character
    subsequence(str, index + 1, ans);
}

int main() {

    string str = "abc";

    subsequence(str, 0, "");

    return 0;
}