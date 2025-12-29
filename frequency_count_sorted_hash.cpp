//
// Created by Pranav Agarwal on 22/12/25.
//
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void sorted_frequency(const vector<int> &num) {
    int x;
    map<int,int> freq;
    for (int x:num) {
        freq[x]++;
    }
    for (auto p:freq) {
        cout<<p.first<<"->"<<p.second<<endl;
    }
}
int main() {
    int n;
    vector<int> num;
    cout<<"enter the number of elements you want in your array"<<endl;
    cin>>n;
    num.reserve(n);
    for (int i=0 ;i<n;i++) {
        int x;
        cin>>x;
        num.push_back(x);
    }
    sorted_frequency(num);
}