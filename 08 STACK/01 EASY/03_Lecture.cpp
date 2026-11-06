/*

Problem Statement

Given N integers inserted into a stack, 
find and print the top element without removing it.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format
Print the top element of the stack. If N = 0, print Stack is empty.

Example

Input:
4
10 20 30 40


Output:
40

*/


#include <iostream>
using namespace std;

int main() {

    int n = 4;
    int arr[] = {10, 20, 30, 40};

    int stack[100];
    int top = -1;

    // Push elements
    for(int i = 0; i < n; i++) {
        top++;
        stack[top] = arr[i];
    }

    // Peek operation
    if(top == -1) {
        cout << "Stack is empty";
    }
    else {
        cout << stack[top];
    }

    return 0;
}