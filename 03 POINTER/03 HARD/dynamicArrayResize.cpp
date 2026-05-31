/*

Problem Statement

Create a dynamic array using pointers.
Take initial size n, then increase size by 2 and insert new elements.

Example

Input:
3
1 2 3
4 5

Output:
1 2 3 4 5
*/


#include <iostream>
using namespace std;

int main() {

    int n = 3;
    int *p = new int[n];

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    int *newArr = new int[n + 2];

    for(int i = 0; i < n; i++) {
        newArr[i] = p[i];
    }

    newArr[3] = 4;
    newArr[4] = 5;

    delete[] p;

    p = newArr;

    for(int i = 0; i < n + 2; i++) {
        cout << p[i] << " ";
    }

    delete[] p;

    return 0;
}