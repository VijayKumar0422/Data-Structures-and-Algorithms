/*

Problem Statement

Given a positive integer N, print all numbers from 1 to N using Recursion only. 
Do not use any loop (for, while, do-while).

Input Format
First line contains an integer N.

Output Format
Print numbers from 1 to N.

Example

Input:
5

Output:
1 2 3 4 5

*/



#include <iostream>
using namespace std;

void printNumber(int n) {

    if(n == 0) {
        return;
    }

    printNumber(n - 1);

    cout << n << " ";
}

int main() {

    int n = 5;

    printNumber(n);

    return 0;
}