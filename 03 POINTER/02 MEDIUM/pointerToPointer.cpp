/*

Problem Statement

Create a pointer to pointer and print:

=> value
=> address
=> value using double pointer

Example

Input:
10

Output:
Value = 10
Using Pointer = 10
Using Double Pointer = 10

*/



#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int *p = &x;
    int **q = &p;

    cout << "Value = " << x << endl;

    cout << "Using Pointer = " << *p << endl;

    cout << "Using Double Pointer = " << **q << endl;

    return 0;
}