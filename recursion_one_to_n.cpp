//
// Created by Pranav Agarwal on 03/12/25.
//
/*Print 1 to N using Recursion


0

100
Easy

Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

You must not use any loops such as for, while, or do-while.
The function should print each number on a separate line, in increasing order from 1 to n.

Examples:
Input: n = 5

Output:

1

2

3

4

5

*/
#include <iostream>
using namespace std;

void print1ToN(int n) {
    if (n == 0)     // base case
        return;

    print1ToN(n - 1);   // recursive call first
    cout << n << endl;  // print on returning

}

int main() {
    int n;
    cin >> n;
    print1ToN(n);
    return 0;
}