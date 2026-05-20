/*

Problem Statement

Given a vector of integers, count total even and odd numbers.

Example

Input:
6
1 2 3 4 5 6

Output:
Even = 3
Odd = 3

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

    int even = 0;
    int odd = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}