/*
Column Wise Sum

Given a 2D integer array of size M*N , find and print the sum to ith column elements separated by space.

Input Format :
line 1 : Two integers M and N (separated by space)
Next M lines : ith row elements (separated by space)

Output Format : 
Sum of every ith column elements (separated by space)

Constraints :
1 <= M,N <= 1-^3

Sample Input : 
4 2
1 2
3 4
5 6
7 8

Sample Output :
16 20


*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void columnWiseSum(int arr[][100], int m, int n) {
        vector<int> colSum(n, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                colSum[j] += arr[i][j];
            }
        }
        
        for (int j = 0; j < n; ++j) {
            cout << colSum[j] << " ";
        }
        cout << endl;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int arr[100][100];
        int m, n;
        cin >> m >> n;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
            }
        }
        Solution obj;
        obj.columnWiseSum(arr, m, n);
    }
    return 0;
}
