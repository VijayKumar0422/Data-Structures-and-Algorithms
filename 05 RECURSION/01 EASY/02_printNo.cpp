/*

Problem Statement

Given a positive integer N, print all numbers from N to 1 using Recursion only.

Example

Input:
5

Output:
5 4 3 2 1

*/




#include <iostream>
using namespace std;

void printNumber(int n) {

    if(n == 0) {
        return;
    }

    cout << n << " ";

    printNumber(n - 1);
}

int main() {

    int n = 5;

    printNumber(n);

    return 0;
}