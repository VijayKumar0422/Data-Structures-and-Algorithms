/*

Problem Statement

Given a vector of size n, rotate the vector left by one position.

Example

Input:
5
1 2 3 4 5

Output:
2 3 4 5 1

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter size of vector : ";
    cin >> n;

    vector <int> v;

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int first = v[0];

    for(int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1];
    }

    v[n - 1] = first;

    cout << "Vector after left rotation: ";

    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
