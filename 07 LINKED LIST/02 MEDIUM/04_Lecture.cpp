/*

Problem Statement

Given a singly linked list, 
find and print the middle node of the linked list. Use the Slow and Fast Pointer technique.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print the value of the middle node.

Example

Input:
5
10 20 30 40 50

Output:
30

*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    int n = 5;
    int arr[] = {10, 20, 30, 40, 50};

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

    // Slow and Fast Pointer
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data;

    return 0;
}