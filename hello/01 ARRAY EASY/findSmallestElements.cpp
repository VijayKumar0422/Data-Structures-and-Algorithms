/*

Problem Statements
Give an array of integers, find the minimum elements present in the array.

Example

Input:
4
8 3 12 1

Output:
1

*/


#include <iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter size : ";
    cin >> n;

    int a[n];

    cout << "Enter elements";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
    }

    cout << "Min = " << min;
    return 0;
}