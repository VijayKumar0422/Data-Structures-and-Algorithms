/*

Problem Statement

Given two arrays, print all unique elements present in both arrays.

Example

Input:
Array1: 1 2 3
Array2: 2 3 4

Output:
1 2 3 4

*/

#include <iostream>
using namespace std;

int main() {

    int n1 = 3, n2 = 3;

    int a[3] = {1, 2, 3};
    int b[3] = {2, 3, 4};

    int c[10];
    int k = 0;

    for(int i = 0; i < n1; i++) {

        bool found = false;

        for(int j = 0; j < k; j++) {

            if(a[i] == c[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            c[k] = a[i];
            k++;
        }
    }

    for(int i = 0; i < n2; i++) {

        bool found = false;

        for(int j = 0; j < k; j++) {

            if(b[i] == c[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            c[k] = b[i];
            k++;
        }
    }

    cout << "Unique elements : ";

    for(int i = 0; i < k; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
