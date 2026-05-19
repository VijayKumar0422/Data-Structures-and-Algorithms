/*

Given an array of size n, rotate the array to the left by one position.

Example

Input:
5
1 2 3 4 5

Output:
2 3 4 5 1

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

    int first = a[0];

    for(int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    a[n - 1] = first;

    cout << "Array after left rotation : ";

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}