/*
Coding Problem
Problem Statement: Return Keypad - String
Problem Level: HARD
Problem Description:
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.
Note : 1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Input Format :
Integer n

Output Format :
All possible strings in different lines

Constraints :
1 <= n <= 10^6

Sample Input:
23

Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to get the corresponding characters for a digit
string getCharacters(int digit) {
    switch (digit) {
        case 2: return "abc";
        case 3: return "def";
        case 4: return "ghi";
        case 5: return "jkl";
        case 6: return "mno";
        case 7: return "pqrs";
        case 8: return "tuv";
        case 9: return "wxyz";
        default: return "";
    }
}

// Helper function for generating combinations recursively
void generateCombinations(int num, string current, vector<string>& output) {
    if (num == 0) {
        output.push_back(current);
        return;
    }
    int digit = num % 10;
    string chars = getCharacters(digit);
    for (char ch : chars) {
        generateCombinations(num / 10, ch + current, output);
    }
}

// Function to get all possible strings for the given number
vector<string> getKeypadCombinations(int num) {
    vector<string> output;
    if (num == 0 || num == 1) {
        return output;
    }
    generateCombinations(num, "", output);
    return output;
}

int main() {
    int num;
    cin >> num;
    vector<string> result = getKeypadCombinations(num);
    for (const string& str : result) {
        cout << str << endl;
    }
    return 0;
}
