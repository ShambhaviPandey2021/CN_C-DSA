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

// Second Method 

#include <iostream>
#include <string>
using namespace std;
int keypad(int num, string output[]){
    if (num == 0) {
        output[0] = "";
        return 1;
    }
    string input;
    int n = num % 10;
    num = num / 10;
    int smallOutput = keypad(num , output);
    switch(n) {
        case 2: input = "abc"; break;
        case 3: input = "def"; break;
        case 4: input = "ghi"; break;
        case 5: input = "jkl"; break;
        case 6: input = "mno"; break;
        case 7: input = "pqrs"; break;
        case 8: input = "tuv"; break;
        case 9: input = "wxyz"; break;
        Default: break;
    }
    int ans = smallOutput * input.size();
    string temp[ans];
    int k = 0;
    for(int i = 0 ;i  < smallOutput ; i++){	
	for( int j = 0 ; j < input.size(); j++){
	    temp[k] = output[i] + input[j];
	    k++;
        }
    }
    for(int i = 0 ; i < k ; i++) {
	output[i] = temp[i];
    }
    return ans;

}

int main(){
    int num;
    cin>>num;
    string output[1000];
    int count = keypad(num, output);
    for(int i = 0;i<count;i++) {
        cout<<output[i]<<endl;
    }
    return 0;
}
