/*

Problem Statement

Given a sorted array,remove duplicates and print unique elements.

Example

Input:
7
1 1 2 2 3 4 4

Output:
1 2 3 4

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

    cout << "Unique elements : ";

    cout << a[0] << " ";

    for(int i = 1; i < n; i++) {

        if(a[i] != a[i - 1]) {
            cout << a[i] << " ";
        }
    }

    return 0;
}