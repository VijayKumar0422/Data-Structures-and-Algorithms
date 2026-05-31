/*

Problem Statement

Take n integers using dynamic memory allocation (new) and print them.

Example

Input:
4
10 20 30 40

Output:
10 20 30 40

*/


#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter size: ";
    cin >> n;

    int *p = new int[n];

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << "Array elements are: ";

    for(int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }

    delete[] p;

    return 0;
}
