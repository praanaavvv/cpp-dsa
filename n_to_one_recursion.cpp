//
// Created by Pranav Agarwal on 04/12/25.
//
/*Print N to 1 using Recursion


0

100
Easy

Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

You must not use any loops such as for, while, or do-while.
The function should print each number on a separate line, in decreasing order from n to 1

Examples:
Input: 5

Output:

5

4

3

2

1

Input: 1

Output:

1
*/
#include <iostream>
using namespace std;

int print(int n) {
    if (n!=0) {
        cout<<n<<endl;
        print(n-1);
    }
    return 0;
}
int main() {
    int n;
    cin>>n;
    print(n);
    return 0;
}