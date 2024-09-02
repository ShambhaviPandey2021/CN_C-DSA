/*
Chapter Assignment
Problem Statement: Staircase
Problem Level: EASY
Problem Description:
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.
Input format :
Integer N

Output Format :
Integer W

Constraints :
1 <= N <= 30

Sample Input 1 :
4

Sample Output 1 :
7

Sample Input 2 :
5

Sample Output 2 :
13



=====Answer=====
Correct Option: 
*/


#include <iostream>
using namespace std;
int staircase(int n){
    if(n == 0  || n == 1) return 1;
    if (n == 2) return 2;
    if(n == 3) return 4;
    
    
    int ways[n + 1];
    ways[0] = 1; // no movement == 1way
    ways[1] = 1; //1 step at a  1 time == 1 way
    ways[2] = 2; // 1+1,2 == 2 ways
    ways[3] = 4; // 1+1+1, 2+1, 1+2, 3 ==4 ways
    for(int i = 4 ; i <= n;i++){
        ways[i] = ways[i - 1] + ways[i - 2] + ways[i - 3];
    }
    return ways[n];
    
}

int main() {
    int n;
    cin >> n;
    cout<<staircase(n)<<endl;
    return 0;
}