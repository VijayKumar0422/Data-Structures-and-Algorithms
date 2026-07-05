/*

Problem Statement

Given N disks, print all the moves required to transfer the disks 
from the source rod to the destination rod using an auxiliary rod.

Example

Input:
2

Output:
Move disk 1 from A to B
Move disk 2 from A to C
Move disk 1 from B to C

*/

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination) {

    if(n == 1) {

        cout << "Move disk 1 from "
             << source
             << " to "
             << destination
             << endl;

        return;
    }

    // Step 1
    towerOfHanoi(n - 1, source, destination, helper);

    // Step 2
    cout << "Move disk "
         << n
         << " from "
         << source
         << " to "
         << destination
         << endl;

    // Step 3
    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {

    int n = 2;

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}