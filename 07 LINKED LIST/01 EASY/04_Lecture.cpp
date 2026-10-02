/*

Problem Statement

Given a singly linked list containing N integers, 
find and print the maximum element present in the linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print the maximum element.

Example

Input:

5
10 50 20 40 30

Output:

Maximum = 50

*/


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    int n = 5;
    int arr[] = {10, 50, 20, 40, 30};

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

    // Find maximum
    Node* temp = head;
    int maximum = head->data;

    while(temp != nullptr) {

        if(temp->data > maximum) {
            maximum = temp->data;
        }

        temp = temp->next;
    }

    cout << "Maximum = " << maximum;

    return 0;
}