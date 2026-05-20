/*

Problem Statement

Given an array, print frequency of each element.

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
using namespace std;

int main() {

    int n;

    cout << "Enter size : ";
    cin >> n;

    int a[n];

    cout << "Enter elements : ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {

        int count = 0;

        bool visited = false;

        for(int k = 0; k < i; k++) {

            if(a[i] == a[k]) {
                visited = true;
                break;
            }
        }

        if(visited) {
            continue;
        }

        for(int j = 0; j < n; j++) {

            if(a[i] == a[j]) {
                count++;
            }
        }

        cout << a[i] << " -> " << count << endl;
    }

    return 0;
}