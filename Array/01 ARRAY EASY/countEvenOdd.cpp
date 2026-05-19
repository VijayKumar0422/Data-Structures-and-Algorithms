/*

Problem Statments
Give an array of integers, count how many even and odd numbers are present.

Example

Input:
6
1 2 3 4 5 6

Output:
Even => 3
Odd => 3


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

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            even++;
        } else{
            odd++;
        }
    }

    cout << "Even = " << even << endl;
    cout << "odd = " << odd;
    return 0;

}