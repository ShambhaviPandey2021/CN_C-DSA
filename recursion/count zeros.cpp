/*
@csalgo

Chapter Assignment
Problem Statement: Count Zeros
Problem Level: EASY
Problem Description:
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
Input Format :
Integer N

Output Format :
Number of zeros in N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
10204

Sample Output 1 :
2

Sample Input 2 :
708000

Sample Output 2 :
4



=====Answer=====
Correct Option: 

*/


#include<iostream>
using namespace std;
int countZeros(int n){
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0 ;
    }
    if(n%10==0){
        return 1 + countZeros(n/10);
    }else{
        return countZeros(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1<<endl;
    }else{
        cout<<countZeros(n)<<endl;
    }
    return 0;
}
