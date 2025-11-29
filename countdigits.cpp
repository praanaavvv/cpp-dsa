//
// Created by Pranav Agarwal on 29/11/25.
//
/*You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.
Input: n = 4

Output: 1

Explanation: There is only 1 digit in 4.

Input: n = 14

Output: 2

Explanation: There are 2 digits in 14.*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int count=0;
    while (n>0) {
        n/=10;
        cout<<n<<endl;
        count++;
    }
    cout<<count;
    return 0;
}
