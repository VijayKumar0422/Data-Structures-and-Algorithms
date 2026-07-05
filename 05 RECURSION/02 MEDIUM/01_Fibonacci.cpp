/*

Problem Statement

Given an integer N, print the Nth Fibonacci number using Recursion.

Example

Input:
6

Output:
8

*/


#include <iostream>
using namespace std;

int fibonacci(int n) {

    if(n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    int n = 6;

    cout << fibonacci(n);

    return 0;
}