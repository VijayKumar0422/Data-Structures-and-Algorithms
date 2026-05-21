/*

Problem Statement

Given a binary vector, find maximum consecutive 1s.

Example

Input:
6
1 1 0 1 1 1

Output:
3

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;

    cout << "Enter size of vector : ";
    cin >> n;

    vector <int> v;

    cout << "Enter " << n << " binary elements : ";

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 1) {
            count++;

            if(count > maxCount) {
                maxCount = count;
            }

        } else {

            count = 0;
        }
    }

    cout << "Maximum consecutive 1s = " << maxCount;

    return 0;
}