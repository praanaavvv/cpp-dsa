//
// Created by Pranav Agarwal on 22/12/25.
//
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int frequency(const vector<int>& num) {
    unordered_map<int,int> freq;
    for (int x: num) {
        freq[x]++;
    }
    for (auto p :freq) {
        cout << p.first << " -> "<<p.second << "\n";
    }

}
int main() {
    vector<int> num;
    int n;
    cin>>n;
    num.reserve(n);
    for (int i=0 ;i<n;i++) {
        int x;
        cin>>x;
        num.push_back(x);
    }
    frequency(num);

}