//
// Created by Pranav Agarwal on 29/11/25.
//
/*
You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


Examples:
Input: n = 25

Output: 52

Explanation: Reverse of 25 is 52.

Input: n = 123

Output: 321

Explanation: Reverse of 123 is 321.
 */

#include <iostream>
using namespace std;

int main() {
 int n ;
 cout<<"enter the number you want to reverse "<<endl;
 cin>>n;
 int res=0;
 while (n!=0) {
  int digits = n%10;

  res = res*10 + digits;
  n /=10;
 }
 cout<<res;
 return 0;
}
