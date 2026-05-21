/*
Problem Statement

Given a vector and a target value, find two numbers whose sum equals target.

Example

Input:
5
2 7 11 15 3

Target:
9

Output:
2 7

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x, target;

    cout << "Enter size of vector : ";
    cin >> n;

    vector <int> v;

    cout << "Enter " << n << " elements: ";

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter target: ";
    cin >> target;

    bool found = false;

    for(int i = 0; i < v.size(); i++) {

        for(int j = i + 1; j < v.size(); j++) {
            if(v[i] + v[j] == target) {

                cout << "Numbers are: "
                     << v[i] << " " << v[j];

                found = true;
                break;
            }
        }

        if(found) {
            break;
        }
    }

    if(!found) {

        cout << "No pair found";
    }

    return 0;
}