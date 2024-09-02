/*
Chapter Assignment
Problem Statement: Check AB
Problem Level: MEDIUM
Problem Description:
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'

If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S

Output format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
abb

Sample Output 1 :
true

Sample Input 2 :
abababa

Sample Output 2 :
false



=====Answer=====
Correct Option: 

*/

#include <iostream>
using namespace std;

// Helper function to check if the string follows the rules
bool checkABHelper(string s, int start) {
    // Base case: If we have checked all characters, return true
    if (start == s.length()) {
        return true;
    }

    // If the current character is 'a'
    if (s[start] == 'a') {
        // Check if the next character is also 'a' or the substring is "bb"
        if (start + 1 < s.length() && s[start + 1] == 'a') {
            return checkABHelper(s, start + 1);
        } else if (start + 2 < s.length() && s.substr(start + 1, 2) == "bb") {
            return checkABHelper(s, start + 3);
        } else if (start + 1 == s.length() || start + 2 == s.length()) {
            return true;
        } else {
            return false;
        }
    }

    // If the current character is 'b', it must be part of "bb"
    if (s[start] == 'b') {
        if (start + 1 < s.length() && s[start + 1] == 'b') {
            if (start + 2 < s.length() && s[start + 2] == 'a') {
                return checkABHelper(s, start + 2);
            } else if (start + 2 == s.length()) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }

    // If the character is neither 'a' nor 'b', return false
    return false;
}

// Function to check if the string follows the rules
bool checkAB(string s) {
    // If the string is empty or doesn't start with 'a', return false
    if (s.empty() || s[0] != 'a') {
        return false;
    }
    // Use the helper function to check the rest of the string
    return checkABHelper(s, 0);
}

int main() {
    string s;
    cin >> s;
    if (checkAB(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
