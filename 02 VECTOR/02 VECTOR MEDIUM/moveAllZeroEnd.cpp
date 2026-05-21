/*

Problem Statement

Given a vector,move all zeros to the end while maintaining relative order of non-zero elements.

Example

Input:
6
0 1 0 3 12 0

Output:
1 3 12 0 0 0

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter size of vector : ";
    cin >> n;

    vector <int> v;

    cout << "Enter " << n << " elements : ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int index = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] != 0) {
            swap(v[i], v[index]);
            index++;
        }
    }

    cout << "Vector after moving zeros: ";

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}