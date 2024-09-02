/*
@csalgo

Coding Problem
Problem Statement: All indexes of x
Problem Level: MEDIUM
Problem Description:
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space)

Constraints :
1 <= N <= 10^3

Sample Input :
5
9 8 10 8 8
8

Sample Output :
1 3 4

@csalgo
*/


#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of x in the array
void AllIndicesOfNum(int arr[], int n, int x, int index, vector<int>& indices) {
    if (index == n) {
        return;
    }
    if (arr[index] == x) {
        indices.push_back(index);
    }
    AllIndicesOfNum(arr, n, x, index + 1, indices);
}

int main() {
    int n, x;
    cin >> n; // Input the size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input the array elements
    }
    cin >> x; // Input the target element

    vector<int> indices;
    AllIndicesOfNum(arr, n, x, 0, indices);

    for (int i : indices) {
        cout << i << " "; // Output the indices
    }
    cout << endl;

    return 0;
}
