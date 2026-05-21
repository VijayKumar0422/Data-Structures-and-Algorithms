/*

Problem Statement

Given a vector, print frequency of each element.

Example

Input:
5
1 2 2 3 1

Output:
1 -> 2
2 -> 2
3 -> 1

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

    for(int i = 0; i < v.size(); i++) {
        int count = 0;
        bool visited = false;

        for(int k = 0; k < i; k++) {
            if(v[i] == v[k]) {
                visited = true;
                break;
            }
        }

        if(visited) {
            continue;
        }

        for(int j = 0; j < v.size(); j++) {
            if(v[i] == v[j]) {
                count++;
            }
        }

        cout << v[i] << " -> " << count << endl;
    }

    return 0;
}