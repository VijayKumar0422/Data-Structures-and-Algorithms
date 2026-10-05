/*

Problem Statement

Given a singly linked list, 
determine whether the linked list contains a cycle or not. 
Use the Slow and Fast Pointer technique.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.
Third line contains an integer P, 
representing the position where the last node connects to form a cycle. 
If P = -1, no cycle exists.

Output Format

Print Cycle detected if a cycle exists; otherwise print No cycle.

Example

Input:
4
10 20 30 40
2

Output:
Cycle detected

*/


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    int n = 4;
    int arr[] = {10, 20, 30, 40};
    int p = 2;

    Node* head = nullptr;
    Node* tail = nullptr;

    // Create linked list
    for(int i = 0; i < n; i++) {

        Node* newNode = new Node;
        newNode->data = arr[i];
        newNode->next = nullptr;

        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Create cycle
    if(p != -1) {
        Node* temp = head;

        for(int i = 1; i < p; i++) {
            temp = temp->next;
        }

        tail->next = temp;
    }

    // Detect cycle using Slow and Fast Pointer
    Node* slow = head;
    Node* fast = head;

    bool cycle = false;

    while(fast != nullptr && fast->next != nullptr) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            cycle = true;
            break;
        }
    }

    if(cycle)
        cout << "Cycle detected";
    else
        cout << "No cycle";

    return 0;
}