/*

Problem Statement

Design a stack that supports push, pop, 
top and retrieving the minimum element in constant time, \(O(1)\).

Input Format

The first line contains an integer Q, representing the number of operations.
The next Q lines contain one of the following operations:

- push X — Insert X.
- pop — Remove the top element.
- top — Print the top element.
- getMin — Print the minimum element.

Assume top, pop and getMin are called only when the stack is not empty.

Output Format

For each top or getMin operation, print the corresponding value on a new line.

Example

Input:
6
push 5
push 2
push 8
getMin
pop
top

Output:
2
2

*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    int q = 6;

    stack<int> st;
    stack<int> minSt;

    // Operations
    string op;
    int x;

    // Given operations
    string operations[] = {
        "push", "push", "push",
        "getMin", "pop", "top"
    };

    int values[] = {5, 2, 8, 0, 0, 0};

    for(int i = 0; i < q; i++) {

        op = operations[i];
        x = values[i];

        if(op == "push") {

            st.push(x);

            if(minSt.empty() || x <= minSt.top()) {
                minSt.push(x);
            }
        }

        else if(op == "pop") {

            if(st.top() == minSt.top()) {
                minSt.pop();
            }

            st.pop();
        }

        else if(op == "top") {
            cout << st.top() << endl;
        }

        else if(op == "getMin") {
            cout << minSt.top() << endl;
        }
    }

    return 0;
}
