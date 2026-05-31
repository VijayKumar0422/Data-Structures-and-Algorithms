/*

Problem Statement

Given an array of integers,
find the second largest element using pointers.

Constraints

=> Solve in O(n)
=> Duplicates may exist

Example

Input:
5
10 20 4 45 99

Output:
45

*/

#include <iostream>
using namespace std;

int main() {

    int a[] = {10, 20, 4, 45, 99};
    int *p = a;
    int largest = *p;
    int secondLargest = -1;

    for(int i = 1; i < 5; i++) {
        if(*(p + i) > largest) {

            secondLargest = largest;
            largest = *(p + i);
        }

        else if(*(p + i) > secondLargest && *(p + i) != largest) {
            secondLargest = *(p + i);
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}

