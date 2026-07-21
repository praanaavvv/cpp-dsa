/*In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a , b ;
    cin>>a>>b;
    for (int i = a ; i <= b ; i++){
       int x = i;
       if (x>0 && x<9){
            if(x==1){
                cout>>"one";
            }
            else if (x==2){
                cout>>"two";
            }
            else if (x==3){
                cout>>"three";
            }
            else if (x==4){
                cout>>"four";
            }else if (x==5){
                cout>>"five";
            }else if (x==6){
                cout>>"six";
            }else if (x==7){
                cout>>"seven";
            }else if (x==8){
                cout>>"eight";
            }
       } 
       else if(x>8){
            if(x%2==0){
                cout<<"even";
            }
            else {
                cout<<"odd";
            }
       }
    }
}