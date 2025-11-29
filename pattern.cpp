//
// Created by Pranav Agarwal on 26/11/25.
//
/*
  **********
  ****  ****
  ***    ***
  **      **
  *        *
  *        *
  **      **
  ***    ***
  **********
  */
#include<iostream>
using namespace std;

int main () {
  for (int i = 0 ; i<10 ; i++) {
    if (i<5){

      for (int j = 5 ; j>i ; j--) {
        cout<<"*";
      }

        for (int k = 0 ; k<i ; k++) {

          cout<<string(2,' ');
        }
      for (int j = 5 ; j>i ; j--) {
        cout<<"*";
      }


      }

      if (i>4) {

        for (int j = 5 ; j<=i ; j++) {
          cout<<"*";
        }
        for (int k = 9 ; k>i ; k--) {

          cout<<string(2,' ');
        }

        for (int j = 5; j<=i ; j++) {
          cout<<"*";
        }
      }

    cout<<endl;

    }


  return 0;
}

