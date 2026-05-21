/*

Problem Statement

Given two vectors,
print all common elements.

Example

Input:
4
Vector1: 1 2 3 4

3
Vector2: 2 4 6

Output:

2 4

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2, x;

    cout << "Enter size of first vector : ";
    cin >> n1;

    vector <int> v1;

    cout << "Enter " << n1 << " elements: ";

    for(int i = 0; i < n1; i++) {
        cin >> x;
        v1.push_back(x);
    }

    cout << "Enter size of second vector: ";
    cin >> n2;

    vector <int> v2;

    cout << "Enter " << n2 << " elements: ";

    for(int i = 0; i < n2; i++) {
        cin >> x;
        v2.push_back(x);
    }

    cout << "Common elements: ";

    for(int i = 0; i < v1.size(); i++) {
        for(int j = 0; j < v2.size(); j++) {
            if(v1[i] == v2[j]) {
                cout << v1[i] << " ";
            }
        }
    }

    return 0;
}