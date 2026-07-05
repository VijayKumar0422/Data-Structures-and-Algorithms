/*

Problem Statement

Given a positive integer N, find its factorial using Recursion.

Example

Input:
5

Output:
120

*/



#include <iostream>
using namespace std;

int factorial(int n) {

    if(n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    int n = 5;

    cout << factorial(n);

    return 0;
}