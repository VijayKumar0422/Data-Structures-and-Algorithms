/*

Problem Statement
Given the daily stock prices, calculate the stock span for each day. 
The span is the number of consecutive days up to the current day for which the 
stock price was less than or equal to the current day's price.

Input Format

First line contains an integer N.
Second line contains N space-separated stock prices.

Output Format

Print the stock span for each day.

Example

Input:
7
100 80 60 70 60 75 85

Output:
1 1 1 2 1 4 6

*/


#include <iostream>
#include <stack>
using namespace std;

int main() {

    int n = 7;
    int price[] = {100, 80, 60, 70, 60, 75, 85};

    int span[100];
    stack<int> st;

    // Calculate stock span
    for(int i = 0; i < n; i++) {

        while(!st.empty() && price[st.top()] <= price[i]) {
            st.pop();
        }

        if(st.empty()) {
            span[i] = i + 1;
        }
        else {
            span[i] = i - st.top();
        }

        st.push(i);
    }

    // Print stock span
    for(int i = 0; i < n; i++) {
        cout << span[i] << " ";
    }

    return 0;
}