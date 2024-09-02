/*
Chapter Assignment
Problem Statement: Remove X
Problem Level: MEDIUM
Problem Description:
Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S.

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:



=====Answer=====
Correct Option: 

*/

#include <iostream>
#include <string>
using namespace std;

string removeXHelper(string s, int index) {
    if (index >= s.length()) {
        return s;
    }

    if (s[index] == 'x') {
        s.erase(index, 1);
        return removeXHelper(s, index);
    }

    return removeXHelper(s, index + 1);
}

string removeX(string s) {
    return removeXHelper(s, 0);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string result = removeX(s);
    cout << "Resulting string: " << result << endl;
    return 0;
}
