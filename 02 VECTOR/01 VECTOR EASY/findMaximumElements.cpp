/*

Problem Statement

Given a vector of integers, find the largest element present in the vector.

Example

Input:
5
8 3 15 2 9

Output:
15

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

    int max = v[0];
    for(int i = 1; i < v.size(); i++){
        if(v[i] > max){
            max = v[i];
        }
    }

    cout << "max = " << max;
    return 0;
}