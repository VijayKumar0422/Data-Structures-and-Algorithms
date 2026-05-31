/*

Problem Statement

Create an integer variable and store its address in a pointer.

Print:

=> value of variable
=> address of variable
=> value using pointer

Example

Input:
10

Output:
Value = 10
Address = 1000
Using Pointer = 10

*/

#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;

    cout << "value =" << x << endl;

    cout << "Address = " << &x << endl;

    cout << "Using pointer = " << *p << endl;

    return 0;
}