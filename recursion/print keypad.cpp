/*

Coding Problem
Problem Statement: Print Keypad - String
Problem Level: HARD
Problem Description:
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
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
using namespace std;
void print_subsequence(int num , string output){
    
    if(num==0){
        cout<<output<<endl;
        return;
    }
    
    string input;
    int n = num % 10;
    num = num / 10;
    switch(n){
        case 2: input = "abc"; break;
        case 3: input = "def"; break;
        case 4: input = "ghi"; break;
        case 5: input = "jkl"; break;
        case 6: input = "mno"; break;
        case 7: input = "pqrs"; break;
        case 8: input = "tuv"; break;
        case 9: input = "wxyz"; break;
        default : break;
    }
    
    for( int i = 0; i<input.length();i++){
        print_subsequence(num, input[i] + output);
    }
    
}

int main() {
    
    int num;
    cin>>num;
    string output = "";
    print_subsequence(num , output);
    return 0;
}