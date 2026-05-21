/*
Problem Statement

Given a vector of integers, check whether it is sorted in ascending order.

Example

Input:
5
1 2 3 4 5

Output:
Sorted

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

    bool sorted = true;

    for(int i = 0; i < v.size() - 1; i++) {
        if(v[i] > v[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted) {
        cout << "Sorted";
    } else {
        cout << "Not Sorted";
    }

    return 0;
}