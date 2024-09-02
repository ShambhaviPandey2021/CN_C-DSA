/*
Chapter Assignment
Problem Statement: Pair star
Problem Level: MEDIUM
Problem Description:
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
Input format :
String S

Output format :
Modified string

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello

Sample Output 1:
hel*lo

Sample Input 2 :
aaaa

Sample Output 2 :
a*a*a*a



=====Answer=====
Correct Option: 

*/


#include <iostream>
#include <string>
using namespace std;

string pairStar(const string &s, int index = 0) {
    // Base case: if index has reached the end of the string
    if (index >= s.length() - 1) {
        return s;
    }
    // Recursive case: insert '*' if adjacent characters are the same
    string result = s;
    if (result[index] == result[index + 1]) {
        result.insert(index + 1, "*");
        // Call recursively, next character is index + 2 due to the inserted '*'
        return pairStar(result, index + 2);
    }
    // Call recursively for the next character
    return pairStar(result, index + 1);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string result = pairStar(s);
    cout << "Resulting string: " << result << endl;
    return 0;
}
