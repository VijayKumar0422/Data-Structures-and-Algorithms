/*

Problem Statement

Given a vector of integers, find the sum of all elements.

Example

Input:
4
1 2 3 4

Output:
10

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter size of vector : ";
    cin >> n;

    vector<int> v;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    cout << "sum = " << sum;
    return 0;


}