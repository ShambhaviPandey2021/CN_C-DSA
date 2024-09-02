/*

Chapter Assignment
Problem Statement: Replace pi (recursive)
Problem Level: MEDIUM
Problem Description:
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p



=====Answer=====
Correct Option: 

*/


#include <iostream>
#include <string>
using namespace std;

string replacePiHelper(string s, int index) {
    
    if (index >= s.length() - 1) {
        return s;
    }
    if (s[index] == 'p' && s[index + 1] == 'i') {
        s.replace(index, 2, "3.14");
        return replacePiHelper(s, index + 4);
    }
    return replacePiHelper(s, index + 1);
}

string replacePi(string s) {
    return replacePiHelper(s, 0);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    string result = replacePi(s);
    cout << "Resulting string: " << result << endl;
    return 0;
}
