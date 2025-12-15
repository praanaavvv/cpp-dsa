//
// Created by Pranav Agarwal on 08/12/25.
//
/*Check if String is Palindrome or Not


0

100
Easy

Given a string s, return true if the string is palindrome, otherwise false.



A string is called palindrome if it reads the same forward and backward.


Examples:
Input : s = "hannah"

Output : true

Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

Input : s = "aabbaaa"

Output : false

Explanation : The string when reversed is --> "aaabbaa", which is not same as original string, So we return false.*/
#include <iostream>
using namespace std;

bool isPalindrome(string &str , int left , int right) {
    if (left >= right) {
        cout<<"hehe";
        return true;
    }

    if (str[left] != str[right]) {
        return false ;
        cout<<"bbg";
    }
    return isPalindrome(str  , left+1 , right-1);
    cout<<"lund";

}
int main() {
    string str;
    cin >> str;

    if (isPalindrome(str , 0  ,str.length() - 1)) {
        cout << "true";
    }
    else
        cout<< "false";

    return 0;
}