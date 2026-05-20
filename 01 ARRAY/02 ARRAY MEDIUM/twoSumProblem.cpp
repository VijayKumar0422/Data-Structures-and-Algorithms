/*

Problem Statement

Given an array and a target value, find two numbers whose sum equals target.

Example

Input:
5
2 7 11 15 3

Target:
9

Output:
2 7

*/

#include <iostream>
using namespace std;

int main() {

    int n, target;

    cout << "Enter size : ";
    cin >> n;

    int a[n];

    cout << "Enter elements : ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter target : ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(a[i] + a[j] == target) {

                cout << "Numbers are : "
                     << a[i] << " " << a[j];

                found = true;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    if(!found) {
        cout << "No pair found";
    }

    return 0;
}