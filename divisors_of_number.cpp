//
// Created by Pranav Agarwal on 01/12/25.
//
/*Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Examples
Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

Input: N = 12
Output: [1, 2, 3, 4, 6, 12]
Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for (int i = 1; i<=n; i++) {
        if (n%i==0) {
            cout<<i<<" ";
        }
    }
    return 0;
}