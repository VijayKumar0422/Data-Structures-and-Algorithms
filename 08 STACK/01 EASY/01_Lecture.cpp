/*

Problem Statement
Given N integers, implement a stack using an array. 
Push all the elements into the stack and print them from top to bottom.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print all stack elements from top to bottom.

Example

Input:
5
10 20 30 40 50

Output:
50 40 30 20 10

*/

#include <iostream>
using namespace std;

int main() {

    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};

    int stack[100];
    int top = -1;

    // Push elements into stack
    for(int i = 0; i < n; i++) {
        top++;
        stack[top] = arr[i];
    }

    // Print from top to bottom
    while(top >= 0) {
        cout << stack[top] << " ";
        top--;
    }

    return 0;
}