/*

Problem Statement

Given an integer array,find the second largest element in the array.

Conditions

=>Duplicates may exist
=>Solve in O(n)

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

    int n;

    cout << "Enter size : ";
    cin >> n;

    int a[n];

    cout << "Enter elements : ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int largest = a[0];
    int secondLargest = -1;

    for(int i = 1; i < n; i++) {

        if(a[i] > largest) {

            secondLargest = largest;
            largest = a[i];

        }
        else if(a[i] > secondLargest && a[i] != largest) {

            secondLargest = a[i];
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}