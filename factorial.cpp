//
// Created by Pranav Agarwal on 05/12/25.
//
/*
 *n factorial
 */
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n*factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
}
