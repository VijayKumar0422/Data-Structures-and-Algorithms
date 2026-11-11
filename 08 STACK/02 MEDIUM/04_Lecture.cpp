/*

Problem Statement
Given a string, repeatedly remove adjacent pairs of identical 
characters until no such pair remains. Use a stack to solve the problem and print the final string.

Input Format

The first line contains a string S.

Output Format

Print the resulting string. If the string becomes empty, print an empty string.

Example

Input:
abbaca

Output:
ca

*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    string s = "abbaca";

    stack<char> st;

    for(int i = 0; i < s.length(); i++) {

        if(!st.empty() && st.top() == s[i]) {
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }

    string ans = "";

    while(!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }

    cout << ans;

    return 0;
}