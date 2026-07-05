/*

Problem Statement

Given a sorted array and a target element, 
find the index of the target using Recursive Binary Search.

Example

Input:
5
2 4 6 8 10
8

Output:
3

*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {

    if(left > right) {
        return -1;
    }

    int mid = (left + right) / 2;

    if(arr[mid] == target) {
        return mid;
    }

    else if(target < arr[mid]) {
        return binarySearch(arr, left, mid - 1, target);
    }

    else {
        return binarySearch(arr, mid + 1, right, target);
    }
}

int main() {

    int arr[] = {2, 4, 6, 8, 10};

    int n = 5;

    int target = 8;

    cout << binarySearch(arr, 0, n - 1, target);

    return 0;
}