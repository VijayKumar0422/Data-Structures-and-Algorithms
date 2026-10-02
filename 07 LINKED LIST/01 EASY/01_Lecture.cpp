/*

Problem Statement

Given N integers, create a singly linked list using these
elements and display all elements of the linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print all elements of the linked list followed by NULL.

Example

Input:

5
10 20 30 40 50

Output:

10 -> 20 -> 30 -> 40 -> 50 -> NULL

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

    Node* temp = head;

    while(temp != nullptr) {

        cout << temp->data << " -> ";

        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}