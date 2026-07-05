/*

Problem Statement

Given two integers x and n, calculate xⁿ using Recursion.

Example

Input:
2 5

Output:
32

*/


#include <iostream>
using namespace std;

int power(int x, int n) {

    if(n == 0) {
        return 1;
    }

    return x * power(x, n - 1);
}

int main() {

    int x = 2;
    int n = 5;

    cout << power(x, n);

    return 0;
}