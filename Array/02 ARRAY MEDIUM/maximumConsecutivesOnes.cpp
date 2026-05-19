/*

Problem Statement

Given a binary array, find maximum consecutive 1s.

Example

Input:
6
1 1 0 1 1 1

Output:
3

*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size : ";
    cin >> n;

    int a[n];

    cout << "Enter binary elements : ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < n; i++) {

        if(a[i] == 1) {

            count++;

            if(count > maxCount) {
                maxCount = count;
            }

        } else {

            count = 0;
        }
    }

    cout << "Maximum consecutive 1s = " << maxCount;

    return 0;
}