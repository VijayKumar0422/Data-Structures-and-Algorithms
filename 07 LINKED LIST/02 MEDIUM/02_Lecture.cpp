/*

Problem Statement

Given a singly linked list, an integer X, 
and a position P, insert a new node containing X 
at position P and display the updated linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.
Third line contains an integer X.
Fourth line contains an integer P.

Output Format

Print the updated linked list followed by NULL.

Example

Input:
4
10 20 40 50
30
3

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
    int arr[] = {10, 20, 40, 50};

    int x = 30;
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

    // Insert at position P
    Node* newNode = new Node;
    newNode->data = x;

    if(p == 1) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node* temp = head;

        for(int i = 1; i < p - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
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