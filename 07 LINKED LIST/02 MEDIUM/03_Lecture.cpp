/*

Problem Statement

Given a singly linked list and a position P, 
delete the node present at position P and display the updated linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.
Third line contains an integer P.

Output Format

Print the updated linked list followed by NULL.

Example

Input:
5
10 20 30 40 50
3

Output:
10 -> 20 -> 40 -> 50 -> NULL

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
    int p = 3;

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

    // Delete node at position P
    if(p == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        Node* temp = head;

        // Go to P-1 node
        for(int i = 1; i < p - 1; i++) {
            temp = temp->next;
        }

        Node* deleteNode = temp->next;
        temp->next = deleteNode->next;

        delete deleteNode;
    }

    // Display linked list
    Node* temp = head;

    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}