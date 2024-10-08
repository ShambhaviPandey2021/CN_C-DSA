/*
Coding Problem
Problem Statement: Length of a Singly Linked List(Iterative)
Problem Level: EASY
Problem Description:
For a given singly linked list of integers, find and return its length. Do it using an iterative method.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains elements of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case, print the length of the linked list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1

Sample Output 1 :
7

Sample Input 2 :
2
10 76 39 -3 2 9 -23 9 -1
-1

Sample Output 2 :
8
0

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
int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        Node* head = takeInput();
        int length = lengthOfLL(head);
        cout<<length<<endl;
    }
    return 0;
    
}