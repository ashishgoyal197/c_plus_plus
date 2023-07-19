#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given two string , check same char is used in both string with same frequency called anagram. 

bool checkAnagram(string s1,string s2){
    unordered_map<char,int> m;
    for(auto ch:s1){
       m[ch]++;
    }

    for(auto ch:s2){
        m[ch]--;
    }

    for(auto pair:m){
        if(pair.second != 0){
            return false;
        }
    }

    return true;
}

int main(){

    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    cout<<(checkAnagram(s1,s2)? "Yes":"No")<<endl;

    return 0;
}