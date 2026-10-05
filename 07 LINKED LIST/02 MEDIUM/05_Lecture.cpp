/*

Problem Statement

Given a singly linked list, reverse the linked list and print the reversed linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print the reversed linked list followed by NULL.

Example

Input:
5
10 20 30 40 50

Output:
50 -> 40 -> 30 -> 20 -> 10 -> NULL

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

    // Reverse linked list
    Node* prev = nullptr;
    Node* current = head;

    while(current != nullptr) {

        Node* nextNode = current->next;

        current->next = prev;

        prev = current;
        current = nextNode;
    }

    head = prev;

    // Display reversed list
    Node* temp = head;

    while(temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}