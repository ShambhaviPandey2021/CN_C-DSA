/*
Trim Spaces 

Replace Character

Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
there can be multiple spaces present after any word.

Input Format :

String S;

Output Format :

Updated string

Constraints : 

1<=Length of String s<=10^6

Sample Input :

abc def g hi


Sample Output : 

abcdefghi

*/

#include <iostream>
#include <string>

using namespace std;

void trimSpaces(string& s) {
    int count = 0; 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            s[count++] = s[i]; 
        }
    }
    s.resize(count); 
}

int main() {
    string s;
    getline(cin, s); 
    trimSpaces(s); 
    cout << s << endl; 
    return 0;
}
