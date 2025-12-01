//
// Created by Pranav Agarwal on 01/12/25.
//
/*You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


Examples:
Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

Input: n1 = 9, n2 = 8

Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

Greatest Common divisor = 1.*/

#include<iostream>
using namespace std ;

int main() {
    int n1 , n2;
    cout<<"enter the first number"<<endl;
    cin>>n1;
    cout<<endl;
    cout<<"enter the second number"<<endl;
    cin>>n2;
    int big ;
    if (n1 > n2) {
        big = n1;
    }
    else {
        big = n2;
    }
    int hcf=0;
    for (int i = 1; i<=big ; i++) {
        if (n1%i == 0 && n2%i==0) {
            hcf=i;
        }
    }
    cout<<"gcd for two numbers is"<<endl;
    cout<<hcf;
    return 0;


}
