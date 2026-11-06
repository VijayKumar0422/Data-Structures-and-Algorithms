/*

Problem Statement

Given a stack and a sequence of operations, 
perform push and pop operations. 
Print the top element after all operations. If the stack is empty, print Stack is empty.

Input Format

First line contains an integer Q, representing the number of operations.
The next Q lines contain one of the following operations:

- 1 X — Push element X into the stack.
- 2 — Pop the top element if the stack is not empty.

Output Format

Print the top element after all operations, or Stack is empty if no element remains.

Example

Input:
5
1 10
1 20
1 30
2
1 40

Output:
40

*/

#include <iostream>
using namespace std;

int main() {

    int q = 5;
    int stack[100];
    int top = -1;

    int op, x;

    // Perform operations
    int operations[][2] = {
        {1, 10},
        {1, 20},
        {1, 30},
        {2, 0},
        {1, 40}
    };

    for(int i = 0; i < q; i++) {

        op = operations[i][0];
        x = operations[i][1];

        if(op == 1) {
            // Push
            top++;
            stack[top] = x;
        }
        else if(op == 2) {
            // Pop
            if(top >= 0) {
                top--;
            }
        }
    }

    // Print top element
    if(top == -1) {
        cout << "Stack is empty";
    }
    else {
        cout << stack[top];
    }

    return 0;
}

