/*

Problem Statement

Given an array of integers,
find the maximum element using pointers.

Example

Input:
5
2 9 1 7 5

Output:
9

*/


#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 9, 1, 7, 5};

    int *p = a;

    int max = *p;

    for(int i = 1; i < 5; i++) {
        if(*(p + i) > max) {
            max = *(p + i);
        }
    }

    cout << "Maximum = " << max;

    return 0;
}