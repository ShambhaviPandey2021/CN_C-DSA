
/*
Chapter Assignment
Problem Statement: Print Reverse LinkedList
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers. Write a function to print the list in a reverse order.
To explain it further, you need to start printing the data from the tail and move towards the head of the list, printing the head data at the end.
Note :
You can’t change any of the pointers in the linked list, just print it in the reverse order.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.

Remember/Constraints :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case, print the singly linked list of integers in a reverse fashion, in a row, separated by a single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^3
Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
1
1 2 3 4 5 -1

Sample Output 1 :
5 4 3 2 1

Sample Input 2 :
2
1 2 3 -1
10 20 30 40 50 -1

Sample Output 2 :
3 2 1
50 40 30 20 10

*/
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

Node* creatLL(const vector<int>& arr){
    Node* head = NULL;
    Node* tail = NULL;
    for(int data:arr) {
        Node* newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

Node* reverseLinkedListRecursive(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* rest = reverseLinkedListRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

void printList(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        vector<int> arr;
        int data;
        while(true) {
            cin>>data;
            if(data == -1) break;
            arr.push_back(data);
        }
        Node* head = creatLL(arr);
        head = reverseLinkedListRecursive(head);
        printList(head);
    }
    return 0;
}