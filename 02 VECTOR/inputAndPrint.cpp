/*

Problem Statement

Given n integers, store them in a vector and print all elements.

Input Format

=> First line contains integer n
=> Second line contains n integers

Output Format

=> Print all vector elements

Example

Input:
5
10 20 30 40 50

Output:
10 20 30 40 50

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

    cout << "Vector elements are : ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}