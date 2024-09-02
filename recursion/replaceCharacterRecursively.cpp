/*

Coding Problem
Problem Statement: Replace character recursively
Problem Level: EASY
Problem Description:
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Do this recursively.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)

Output Format :
Updated string

Constraints :
1 <= Length of String S <= 10^6

Sample Input :
abacd
a x

Sample Output :
xbxcd

*/


#include <iostream>
#include<string>
using namespace std:
void replaceCharRecursive(string s[],char a,char x,int index){
    if(index== s.length()){
        return;
    }
    if(s[index]==x){
        s[index]=a; 
    }
    replaceCharRecursive(s,a,x,index+1);
}
int main() {
    string s;
    cin>>s;
    char a , x;
    cin>>a>>x;
    int result = replaceCharRecursive(s,a,x);
    cout<<result<<endl;
    return 0;
}