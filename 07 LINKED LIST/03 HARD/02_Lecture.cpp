/*

Problem Statement

Given a singly linked list, 
find the node where the cycle begins. Use Floyd's Cycle Detection Algorithm.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.
Third line contains an integer P, 
representing the position where the last node connects to form a cycle. 
If P = -1, no cycle exists.

Output Format

Print the value of the node where the cycle begins. If there is no cycle, print No cycle.

Example

Input:
5
10 20 30 40 50
2

Output:
Cycle starts at node 30

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

        for(int i = 0; i < p; i++) {
            temp = temp->next;
        }

        tail->next = temp;
    }

    // Floyd's Cycle Detection
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr) {

        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)
            break;
    }

    // No cycle
    if(fast == nullptr || fast->next == nullptr) {
        cout << "No cycle";
        return 0;
    }

    // Find cycle starting node
    slow = head;

    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    cout << "Cycle starts at node " << slow->data;

    return 0;
}