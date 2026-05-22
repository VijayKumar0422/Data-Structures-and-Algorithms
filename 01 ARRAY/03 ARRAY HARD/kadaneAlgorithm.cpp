/*

Problem Statement

Given an integer array, find the contiguous subarray with maximum sum.

Example

Input:
8
-2 -3 4 -1 -2 1 5 -3

Output:
7

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int currentSum = 0;
    int maxSum = v[0];

    for(int i = 0; i < v.size(); i++) {
        currentSum += v[i];

        if(currentSum > maxSum) {
            maxSum = currentSum;
        }

        if(currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum subarray sum = " << maxSum;

    return 0;
}
