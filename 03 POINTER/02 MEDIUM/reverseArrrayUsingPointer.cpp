/*

Problem Statement

Given an array,
reverse the array using pointers only.

Example

Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

*/


#include <iostream>
using namespace std;

int main() {

    int a[] = {1, 2, 3, 4, 5};

    int *start = a;
    int *end = a + 4;

    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "Reversed Array: ";

    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}