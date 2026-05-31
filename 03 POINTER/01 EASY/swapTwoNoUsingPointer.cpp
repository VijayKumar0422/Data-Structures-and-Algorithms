/*

Problem Statement

Given two integers,
swap their values using pointers.

Example

Input:
10 20

Output:
20 10

*/

#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;

    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "a = "<< a<< endl << "b = "<< b;
    return 0;
}