/*

Problem Statement

Given an array of integers, check whether it is sorted in ascending order using Recursion.

Example

Input:
5
1 2 3 4 5

Output:
Sorted

*/

#include <iostream>
using namespace std;

bool isSorted(int arr[], int n, int index) {

    // Base Case
    if(index == n - 1) {
        return true;
    }

    // Agar current element bada hai
    if(arr[index] > arr[index + 1]) {
        return false;
    }

    // Next index check karo
    return isSorted(arr, n, index + 1);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int n = 5;

    if(isSorted(arr, n, 0)) {

        cout << "Sorted";

    } else {

        cout << "Not Sorted";
    }

    return 0;
}