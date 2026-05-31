/*
Problem Statement

Given an array of integers,
print all elements using pointer arithmetic.

Example

Input:
5
1 2 3 4 5

Output:
1 2 3 4 5

*/

#include <iostream>
using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5};

    int *p = a;

    for(int i = 0; i < 5; i++) {

        cout << *(p + i) << " ";
    }

    return 0;
}