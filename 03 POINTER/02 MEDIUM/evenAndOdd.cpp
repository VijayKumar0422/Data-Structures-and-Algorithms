/*

Problem Statement

Given an array,
count total even and odd numbers using pointer traversal.

Example

Input:
6
1 2 3 4 5 6

Output:
Even = 3
Odd = 3

*/


#include <iostream>
using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5, 6};
    int *p = a;

    int even = 0;
    int odd = 0;

    for(int i = 0; i < 6; i++) {
        if(*(p + i) % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}