/*
Coding Problem
Problem Statement: Remove Duplicates 
Problem Level: EASY
Problem Description:
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S

Output Format :
Output string

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string

Sample Input 1 :
aabccba

Sample Output 1 :
abcba

Sample Input 2 :
xxxyyyzwwzzz

Sample Output 2 :
xyzwz

*/

#include <iostream>
#include<string>
using namespace std;
void removeConsecutiveRecursive(string &s,int index){
    if (index >= s.length() - 1) {
        return;
    }
    if(s[index]==s[index+1]){
        s.erase(index,1);
        removeConsecutiveRecursive(s,index);
    }
    removeConsecutiveRecursive(s,index+1);
}
int main() {
    string s;
    cin>>s;
    removeConsecutiveRecursive(s,0);
    cout<<s<<endl;
    return 0;
}