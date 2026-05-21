/*

Problem Statement

Given a vector of integers, find the second largest element.

Constraints

=> Duplicates may exist
=> Solve in O(n)

Example

Input:
5
10 20 4 45 99

Output:
45
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

    int largest = v[0];
    int secondLargest = -1;

    for(int i = 1; i < v.size(); i++) {
        if(v[i] > largest) {

            secondLargest = largest;
            largest = v[i];
        }
        else if(v[i] > secondLargest && v[i] != largest) {
            secondLargest = v[i];
        }
    }

    cout << "Second Largest = " << secondLargest;

    return 0;
}