/*
Reverse Word Wise

Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverseWordWise(string& str) {
    
    reverse(str.begin(), str.end());

    int start = 0; 
    for (int end = 0; end <= str.length(); end++) {
       
        if (end == str.length() || str[end] == ' ') {
            
            reverse(str.begin() + start, str.begin() + end);
            start = end + 1; 
        }
    }
}

int main() {
    string str;
    getline(cin, str); 
    reverseWordWise(str);
    cout << str << endl; 
    return 0;
}
