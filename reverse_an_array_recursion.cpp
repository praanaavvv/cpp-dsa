//
// Created by Pranav Agarwal on 05/12/25.
//
/*Reverse an array


0

100
Easy

Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.


Examples:
Input: n=5, arr = [1,2,3,4,5]



Output: [5,4,3,2,1]



Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

Input: n=6, arr = [1,2,1,1,5,1]



Output: [1,5,1,1,2,1]



Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

Input: n=3, arr = [1,2,1]
*/
#include <iostream>
using namespace std;

void reverseArray(int arr[], int left, int right) {

    if (left >= right)
        return;

    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;

    // recursive call
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n - 1);

    // print reversed array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
