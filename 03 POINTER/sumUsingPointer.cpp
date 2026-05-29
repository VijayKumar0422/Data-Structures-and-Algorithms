/*

Problem Statement

Given two integers,
find their sum using pointers.

Example

Input:
5 7

Output:
12

*/

# include <iostream>
using namespace std;
int main () {
    int a = 5, b = 7, sum = 0;
    int *p1 = &a;
    int *p2 = &b;
    sum = *p1 + *p2;
    cout << "Sum = " << sum;
    return 0;
}