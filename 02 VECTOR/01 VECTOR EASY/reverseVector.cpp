/*

Problem Statement

Given a vector, reverse all elements without using another vector.

Example

Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter size of vector : ";
    cin >> n;

    vector<int> v;

    cout << "Enter " << n << " elements : ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int start = 0;
    int end = v.size() - 1;

    while(start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }

    cout << "Reversed vector : ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}