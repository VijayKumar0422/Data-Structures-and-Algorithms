/*

Problem Statement

Given an array containing numbers from 1 to n with one number missing,find the missing number.

Example

Input:
5
1 2 3 5

Output:
4

*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter n : ";
    cin >> n;

    int a[n-1];

    cout << "Enter elements : ";

    for(int i = 0; i < n-1; i++) {
        cin >> a[i];
    }

    int total = n * (n + 1) / 2;

    int sum = 0;

    for(int i = 0; i < n-1; i++) {
        sum += a[i];
    }

    int missing = total - sum;

    cout << "Missing number = " << missing;

    return 0;
}