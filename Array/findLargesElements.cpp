/*

Problem statement
Give an integer array of size n, find the largest element in the array.

Input format
=> first line contains integer n
=> second line contains n integers

Output format
=> print the largest elements

Example

Input:
5
10 45 2 99 23

Output:
99

*/

#include <iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter size";
    cin >> n;

    int a[n];

    cout << "Enter elements";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }

    cout << "Max = " << max;
    return 0;
}


