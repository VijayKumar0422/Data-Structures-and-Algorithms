/*

Problem Statements
Given an array of size n, reverse the array without using another array.

Example

Input:
5
1 2 3 4 5

Output:
5 4 3 2 1

*/


# include <iostream>
using namespace std;
int main () {
    int n;

    cout << "Enter size : ";
    cin >>n;

    int a[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int start = 0;
    int end = n - 1;

    while(start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    cout << "Reverse = ";

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}