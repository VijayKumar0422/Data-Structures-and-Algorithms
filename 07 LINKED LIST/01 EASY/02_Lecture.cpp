/*

Problem Statement

Given a singly linked list containing N elements, count and
print the total number of nodes in the linked list.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Output Format

Print the total number of nodes.

Example

Input:

4
10 20 30 40

Output:

Number of nodes = 4

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

    // Count nodes
    int count = 0;
    Node* temp = head;

    while(temp != nullptr) {
        count++;
        temp = temp->next;
    }

    cout << "Number of nodes = " << count;

    return 0;
}