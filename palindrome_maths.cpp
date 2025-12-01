//
// Created by Pranav Agarwal on 01/12/25.
/*You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.



A palindrome number is a number which reads the same both left to right and right to left.


Examples:
Input: n = 121

Output: true

Explanation: When read from left to right : 121.

When read from right to left : 121.

Input: n = 123

Output: false

Explanation: When read from left to right : 123.

When read from right to left : 321.

*/
//
#include <iostream>
using namespace std;

int main() {
    cout<<"enter the number you want to check palindrome for ."<<endl;
    int n;
    cin>>n;
    int tar = n;
    int res = 0;
    while (n>0) {
       int  digits =n%10;
        res=res*10 + digits;
        n/=10;

    }
    cout<<res;
    if (res == tar) {
        cout<<"number is palinndrome !"<<endl;
        cout<<res;
    }
    else {
        cout<<"not a palindrome!";
    }
    return 0;
}