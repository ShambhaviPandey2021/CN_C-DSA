/*
@csalgo

Chapter Assignment
Problem Statement: Check Palindrome (recursive)
Problem Level: MEDIUM
Problem Description:
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
racecar

Sample Output 1:
true

Sample Input 2 :
ninja

Sample Output 2:
false



=====Answer=====
Correct Option: 

@csalgo

*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindromeHelper(const string &s, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (s[start] != s[end]) {
        return false;
    }
    return isPalindromeHelper(s, start + 1, end - 1);
}


bool checkPalindrome(const string &s) {
    if (s.length() == 0 || s.length() == 1) {
        return true;
    }
    return isPalindromeHelper(s, 0, s.length() - 1);
}

int main() {
    string s;
    cin >> s;
    bool result = checkPalindrome(s);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
