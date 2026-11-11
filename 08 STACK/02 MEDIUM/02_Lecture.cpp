/*

Problem Statement

Given an array of N integers, find the next greater element for every element. 
The next greater element is the first element to its right that is greater than the current 
element. If no such element exists, print -1.

Input Format
First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print N integers representing the next greater element of each array element.

Example

Input:
4
4 5 2 10

Output:
5 10 10 -1

*/


#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n = 4;
    int arr[] = {4, 5, 2, 10};

    int ans[100];
    stack<int> st;

    // Traverse from right to left
    for(int i = n - 1; i >= 0; i--) {

        // Remove smaller and equal elements
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // Find Next Greater Element
        if(st.empty()) {
            ans[i] = -1;
        }
        else {
            ans[i] = st.top();
        }

        // Push current element
        st.push(arr[i]);
    }

    // Print answer
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}