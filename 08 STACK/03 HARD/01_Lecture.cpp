/*

Problem Statement
Given an array of N non-negative integers representing the heights of bars in a histogram, 
find the area of the largest rectangle that can be formed using consecutive bars.

Input Format

First line contains an integer N.
Second line contains N space-separated integers representing the heights of the bars.

Output Format

Print the maximum rectangular area.

Example

Input:
6
2 1 5 6 2 3

Output:
10

*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n = 6;
    int arr[] = {2, 1, 5, 6, 2, 3};

    stack<int> st;
    int maxArea = 0;

    for(int i = 0; i <= n; i++) {

        int curr = (i == n) ? 0 : arr[i];

        while(!st.empty() && arr[st.top()] > curr) {

            int height = arr[st.top()];
            st.pop();

            int width;

            if(st.empty()) {
                width = i;
            }
            else {
                width = i - st.top() - 1;
            }

            int area = height * width;

            if(area > maxArea) {
                maxArea = area;
            }
        }

        st.push(i);
    }

    cout << maxArea;

    return 0;
}