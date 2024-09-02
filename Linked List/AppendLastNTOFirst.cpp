/*
Chapter Assignment
Problem Statement: AppendLastNToFirst
Problem Level: EASY
Problem Description:
You have been given a singly linked list of integers along with an integer 'N'. Write a function to append the last 'N' nodes towards the front of the singly linked list and returns the new head to the list.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space.

The second line contains the integer value 'N'. It denotes the number of nodes to be moved from last to the front of the singly linked list.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case/query, print the resulting singly linked list of integers in a row, separated by a single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
0 <= N < M
Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
2
1 2 3 4 5 -1
3
10 20 30 40 50 60 -1
5

Sample Output 1 :
3 4 5 1 2
20 30 40 50 60 10

Sample Input 2 :
1
10 6 77 90 61 67 100  -1
4

Sample Output 2 :
90 61 67 100 10 6 77

Explanation to Sample Input 2 :
We have been required to move the last 4 nodes to the front of the list. Here, "90->61->67->100" is the list which represents the last 4 nodes. When we move this list to the front then the remaining part of the initial list which is, "10->6->77" is attached after 100. Hence, the new list formed with an updated head pointing to 90.

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

// Function to create a linked list from a vector
Node* createLinkedList(const vector<int>& arr) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int data : arr) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

// Function to calculate the length of the linked list
int length(Node* head) {
    int l = 0;
    Node* temp = head;
    while (temp != nullptr) {
        l++;
        temp = temp->next;
    }
    return l;
}

// Function to append the last N nodes to the front of the linked list
Node* appendLastNToFirst(Node* head, int n) {
    if (head == nullptr || n == 0) return head;
    
    int l = length(head);
    if (n >= l) return head; // If N is greater than or equal to length, no change is needed

    Node* newHead = nullptr;
    Node* newTail = nullptr;
    Node* tail = head;

    int count = 1;
    while (tail->next != nullptr) {
        if (count == l - n) {
            newTail = tail;
        }
        if (count == l - n + 1) {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }

    newTail->next = nullptr;
    tail->next = head;

    return newHead;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int> arr;
        int data;
        while (true) {
            cin >> data;
            if (data == -1) break;
            arr.push_back(data);
        }
        
        Node* head = createLinkedList(arr);
        int n;
        cin >> n;
        head = appendLastNToFirst(head, n);
        printList(head);
    }
    return 0;
}

