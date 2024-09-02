/*
Chapter Assignment
Problem Statement: Binary Search (Recursive)
Problem Level: EASY
Problem Description:
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :
Line 1 : Array size
Line 2 : Array elements (separated by space)
Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5

Sample Output:
3



=====Answer=====
Correct Option: 
*/



#include <iostream>
using namespace std;
int binarySearchHelper(int arr[], int x, int start, int end) {
    if (start > end) {
        return -1; 
    }
    int mid = start + (end - start) / 2;

    if (arr[mid] == x) {
        return mid;
    } else if (arr[mid] > x) {
        return binarySearchHelper(arr, x, start, mid - 1);
    } else {
        return binarySearchHelper(arr, x, mid + 1, end);
    }
}

int binarySearch(int arr[], int n, int x) {
    return binarySearchHelper(arr, x, 0, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int result = binarySearch(arr, n, x);
    cout << result << endl;
    return 0;
}