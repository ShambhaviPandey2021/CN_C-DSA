/*
@csalgo

Chapter Assignment
Problem Statement: Geometric Sum
Problem Level: MEDIUM
Problem Description:
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

using recursion.
Input format :
Integer k

Output format :
Geometric sum

Constraints :
0 <= k <= 1000

Sample Input 1 :
3

Sample Output 1 :
1.875

Sample Input 2 :
4

Sample Output 2 :
1.93750



=====Answer=====
Correct Option: 

@csalgo

*/

#include<iostream>
using namespace std;
int Gsum(k){
    if(k==o){
        return 1.0;
    }
    int ans  = Gsum(k-1);
    return 1.0/(1<<k)+ ans;
}
int main(){
    int k;
    cin>>k;
    int result = Gsum(k);
    cout<<result<<endl;
    return 0; 
}