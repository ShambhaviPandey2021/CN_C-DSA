/*
Replace Character

Given an input string S and two characters C1 and C2, you need to replace every occurrence of character C1 with character C2 in the given string.

Input Format :

Line 1 : Input String S
Line 2 : Character C1 and C2 (separated by space)

Output Format :

Updated string

Constraints : 

1<=Length of String s<=10^6

Sample Input :

abacd

a x

Sample Output : 

xbxcd

*/

#include <iostream>
#include <string>
using namespace std;

void replaceCharacter(string &S, char C1, char C2) {
    for (int i = 0; i < S.length(); i++) {
        if (S[i] == C1) {
            S[i] = C2;
        }
    }
}

int main() {
    string S;
    char C1, C2;

    getline(cin, S);
    
    cin >> C1 >> C2;

    replaceCharacter(S, C1, C2);

    cout << S << endl;

    return 0;
}
