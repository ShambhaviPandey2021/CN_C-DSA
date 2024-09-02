/*
Chapter Assignment
Problem Statement: String to Integer
Problem Level: MEDIUM
Problem Description:
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 <= |S| <= 9
where |S| represents length of string S.

Sample Input 1 :
1231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567



=====Answer=====
Correct Option: 

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int stringToInteger(const string &s, int index = 0) {
    // Base case: if we've reached the end of the string
    if (index == s.length()) {
        return 0;
    }
    
    // Recursive call
    int ans = stringToInteger(s, index + 1);
    
    // Convert current character to integer and add to the result
    int currentDigit = s[index] - '0';
    int ans1 = currentDigit * pow(10, s.length() - 1 - index);
    
    return ans1 + ans;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    int result = stringToInteger(s);
    cout << "Resulting integer: " << result << endl;
    
    return 0;
}
