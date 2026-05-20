/*

Problem Statement

Given two arrays, print common elements present in both arrays.

Example

Input:
Array1: 1 2 3 4
Array2: 2 4 6

Output:
2 4

*/

#include <iostream>
using namespace std;

int main() {

    int n1, n2;

    cout << "Enter size of first array : ";
    cin >> n1;

    int a[n1];

    cout << "Enter first array elements : ";

    for(int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second array : ";
    cin >> n2;

    int b[n2];

    cout << "Enter second array elements : ";

    for(int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    cout << "Common elements : ";

    for(int i = 0; i < n1; i++) {

        for(int j = 0; j < n2; j++) {

            if(a[i] == b[j]) {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}