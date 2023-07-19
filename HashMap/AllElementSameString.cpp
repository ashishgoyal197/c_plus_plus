#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given an array of string where we can place any char from a string to another string
// check , can we make all element same.

bool canMakeEqual(vector<string> v){
    unordered_map<char,int> m;

    // finding frequency and store in map.
    for(auto str:v){
        for(char c:str){
            m[c]++;
        }
    }

    // if frequency of all charactor is multiple of size of vector then we can all string ele same.
    int n = v.size();
    for(auto pair:m){
        if(pair.second%n !=0 ){
            return false;
        }
    }
    return true;
}

int main(){

    int n;
    cin>>n;

    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<(canMakeEqual(v)? "Yes":"No")<<endl;



    return 0;
}