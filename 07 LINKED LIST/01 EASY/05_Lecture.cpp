/*

Problem Statement

Given a singly linked list and an integer X, 
insert a new node containing X at the beginning of the linked list 
and display the updated linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.
Third line contains an integer X.

Output Format

Print the updated linked list followed by NULL.

Example

Input:

4
20 30 40 50
10

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

    int n = 4;
    int arr[] = {20, 30, 40, 50};
    int x = 10;

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

    // Insert X at beginning
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    head = newNode;

    // Display linked list
    Node* temp = head;

    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}