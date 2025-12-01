//
// Created by Pranav Agarwal on 01/12/25.
//
/*Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
Examples
Example 1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153

Example 2:
Input:N = 371
Output: True
Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,sum=0 , count=0;
    cout<<"enter the number you want to check if its armstrong or not"<<endl;
    cin>>n;
    int res=n;
    int tar=n;
    while (n!=0) {
        n/=10;
        count ++;
    }
    while (tar!=0) {
        sum = sum + pow(tar % 10, count);
        tar/=10;

    }
    if (sum == res ) {
        cout<<"number is armstrong "<<endl;
        cout<<sum;
    }
    else {
        cout<<"not an armstrong"<<endl;
        cout<<sum;
    }
    return 0;

}