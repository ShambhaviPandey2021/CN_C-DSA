/*
@csalgo

Chapter Assignment
Problem Statement: Multiplication (Recursive)
Problem Level: EASY
Problem Description:
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.
Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N

Constraints :
0 <= M <= 1000
0 <= N <= 1000

Sample Input 1 :
3 
5

Sample Output 1 :
15

Sample Input 2 :
4 
0

Sample Output 2 :
0



=====Answer=====
Correct Option: 

@csalgo

*/

#include <iostream>
#include <vector>
using namespace std;

int multiplicationRecursive(int n,int m ){
    if(n==0){
         return 0;
    }
    if(n<0){
         return -multiplicationRecusive(m,n-1);
    }
    return m + multiplicationRecursive(m,n-1);
}

int main(){

    int n,m;
    cin>>n;
    cin>>m;
    int result = multiplicationRecursive(int n, int m);
    cout<<result;
    return 0;
}