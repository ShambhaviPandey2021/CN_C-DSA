/*
Coding Problem
Problem Statement: Insert in LL recursively
Problem Level: EASY
Problem Description:
Given a linked list, an integer n and a position i, Insert that node n into Linked List at ith position recursively.
If position i is greater than length of LL, then you should return the same LL without any change. And if position i is equal to length of input LL, insert the node at last position.
Indexing starts from 0. You don't need to print the elements, just insert and return the head of updated LL.
Input format :
Line 1 : Linked list elements (separated by space and terminated by -1)
Line 2 : Integer i (position)
Line 3 : Integer n (Node to be inserted)

Output format :
Updated LL elements (separated by space)

Sample Input 1 :
3 4 5 2 6 1 9 -1
3
100

Sample Output 1 :
3 4 5 100 2 6 1 9

Sample Input 2 :
3 4 5 2 6 1 9 -1
0
20

Sample Output 2 :
20 3 4 5 2 6 1 9

*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while (data != -1) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

Node* insertAtIthPosition(Node* head, int data, int i) {
    if (i == 0) { 
        Node* newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }
    if (head == NULL) { 
        return head;
    }

    head->next = insertAtIthPosition(head->next, data, i - 1); 
    return head;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = takeInput();
    int i, data;
    cin >> i >> data;
    head = insertAtIthPosition(head, data, i);
    printList(head);
    return 0;
}
