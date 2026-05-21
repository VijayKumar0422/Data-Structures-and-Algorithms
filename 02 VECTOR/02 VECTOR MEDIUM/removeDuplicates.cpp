/*

Problem Statement

Given a sorted vector, remove duplicate elements and print unique elements.

Example

Input:
7
1 1 2 2 3 4 4

Output:
1 2 3 4

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

    cout << "Unique elements : ";
    cout << v[0] << " ";

    for(int i = 1; i < n; i++){
        
        if(v[i] != v[i - 1]) {
            cout << v[i] << " ";
        }
    }

    return 0;

}