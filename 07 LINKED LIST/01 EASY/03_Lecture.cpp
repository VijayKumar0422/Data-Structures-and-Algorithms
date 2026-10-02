/*

Problem Statement

Given a singly linked list and a value X, 
search for X in the linked list. Print whether the element is present or not.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.
Third line contains an integer X.

Output Format

Print Element found if X is present, otherwise print Element not found.

Example

Input:

5
10 20 30 40 50
30

Output:

Element found

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
    int x = 30;

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

    // Search X
    Node* temp = head;
    bool found = false;

    while(temp != nullptr) {

        if(temp->data == x) {
            found = true;
            break;
        }

        temp = temp->next;
    }

    if(found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}