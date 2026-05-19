/*

Problem Statement
Given an array of integers,check whether the array is sorted in ascending order.

Example

Input:
5
1 2 3 4 5

Output:
Sorted

*/

# include <iostream>
using namespace std;
int main () {
     int n;

    cout << "Enter size : ";
    cin >> n;

    int a[n];

    cout << "Enter elements : ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool sorted = true;

    for(int i = 0; i < n - 1; i++) {

        if(a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;

}