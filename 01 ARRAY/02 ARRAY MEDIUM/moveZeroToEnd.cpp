/*

Problem Statement

Given an array,move all zeros to the end while maintaining order of non-zero elements.

Example

Input:
6
0 1 0 3 12 0

Output:
1 3 12 0 0 0

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

    int index = 0;

    for(int i = 0; i < n; i++) {

        if(a[i] != 0) {

            int temp = a[i];
            a[i] = a[index];
            a[index] = temp;

            index++;
        }
    }

    cout << "Array after moving zeros : ";

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

