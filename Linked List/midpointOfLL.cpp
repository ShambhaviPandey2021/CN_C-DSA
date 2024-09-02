/*
Chapter Assignment
Problem Statement: Palindrome LinkedList
Problem Level: EASY
Problem Description:
You have been given a head to a singly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains the the elements of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case, the only line of output that print 'true' if the list is Palindrome or 'false' otherwise.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
1
9 2 3 3 2 9 -1

Sample Output 1 :
true

Sample Input 2 :
2
0 2 3 2 5 -1
-1

Sample Output 2 :
false
true

Explanation for the Sample Input 2 :
For the first query, it is pretty intuitive that the the given list is not a palindrome, hence the output is 'false'.

For the second query, the list is empty. An empty list is always a palindrome , hence the output is 'true'.

*/


#include <iostream>
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


Node* createLinkedList(int arr[], int n) {
    if (n == 0 || arr[0] == -1) {
        return nullptr;
    }
    
    Node* head = new Node(arr[0]);
    Node* current = head;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == -1) {
            break;
        }
        current->next = new Node(arr[i]);
        current = current->next;
    }
    
    return head;
}


int findMiddle(Node* head) {
    if (head == nullptr) {
        return -1; 
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow->data;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
     
        string line;
        cin.ignore();
        getline(cin, line);
        

        int arr[100000];
        int n = 0;
        int num;
        size_t pos = 0;
        while ((pos = line.find(' ')) != string::npos) {
            num = stoi(line.substr(0, pos));
            arr[n++] = num;
            line.erase(0, pos + 1);
        }
        arr[n++] = stoi(line); 
        
        // Create the linked list
        Node* head = createLinkedList(arr, n);
        
        // Find and print the middle of the linked list
        int middle = findMiddle(head);
        if (middle != -1) {
            cout << middle << endl;
        }
    }
    
    return 0;
}

