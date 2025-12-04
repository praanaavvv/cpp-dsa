//
// Created by Pranav Agarwal on 04/12/25.
//
/*
Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


Examples:
Input : N = 4

Output : 10

Explanation : first four natural numbers are 1, 2, 3, 4.

Sum is 1 + 2 + 3 + 4 => 10.

Input : N = 2

Output : 3

Explanation : first two natural numbers are 1, 2.

Sum is 1 + 2 => 3.
*/
#include <iostream>
using namespace std;


int sum(int n) {

    if (n==0) {

        return 0;;

    }
    return n + sum(n-1);
}
int main() {
    int n;
    cin>>n;
    sum(n);
    cout<<sum(n);
}
