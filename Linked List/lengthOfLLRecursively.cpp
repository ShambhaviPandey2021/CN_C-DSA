/*
Coding Problem
Problem Statement: Length of LL (recursive)
Problem Level: EASY
Problem Description:
Given a linked list, find and return the length of input LL recursively.
Input format :
Linked list elements (separated by space and terminated by -1)

Output format :
Length of LL

Sample Input :
3 4 5 2 6 1 9 -1

Sample Output :
7

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

int lengthOfLL(Node* head) {
    if (head == NULL) {
        return 0;
    }
    return 1 + lengthOfLL(head->next);
}

int main() {
    Node* head = takeInput();
    cout << lengthOfLL(head) << endl;
    return 0;
}
