/*Reverse The Number
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Sample 1:
Input
Output
4
12345
31203
2123
2300
54321
30213
3212
32*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum = 0 ;
        while(n>0){
            sum = sum*10 +(n%10);
            n/=10;
        }
        cout<<sum<<endl;
    }
	

}
