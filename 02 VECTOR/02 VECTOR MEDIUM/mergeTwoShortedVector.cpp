/*

Problem Statement

Given two sorted vectors, merge them into a single sorted vector.

Example

Input:
3
Vector1: 1 3 5

3
Vector2: 2 4 6

Output:
1 2 3 4 5 6

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2, x;

    cout << "Enter size of first vector: ";
    cin >> n1;

    vector <int> v1;

    cout << "Enter " << n1 << " sorted elements: ";

    for(int i = 0; i < n1; i++) {
        cin >> x;
        v1.push_back(x);
    }

    cout << "Enter size of second vector: ";
    cin >> n2;

    vector <int> v2;

    cout << "Enter " << n2 << " sorted elements: ";

    for(int i = 0; i < n2; i++) {
        cin >> x;
        v2.push_back(x);
    }

    vector <int> ans;

    int i = 0;
    int j = 0;

    while(i < v1.size() && j < v2.size()) {
        if(v1[i] < v2[j]) {
            ans.push_back(v1[i]);
            i++;
        } else {
            ans.push_back(v2[j]);
            j++;
        }
    }

    while(i < v1.size()) {
        ans.push_back(v1[i]);
        i++;
    }

    while(j < v2.size()) {
        ans.push_back(v2[j]);
        j++;
    }

    cout << "Merged sorted vector: ";

    for(int k = 0; k < ans.size(); k++) {
        cout << ans[k] << " ";
    }

    return 0;
}