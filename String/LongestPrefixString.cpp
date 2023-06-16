#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// First same charactor.
// By sorting.

string LongestPrefix(vector<string> &str){

     string ans = "";
     sort(str.begin(),str.end());

     string str1 = str[0];
     string str2 = str[str.size()-1];
     int i=0;
     int j=0;

     while(i<str1.size() || j<str2.size()){
        if(str1[i]==str2[j]){
            ans += str1[i];
            i++;
            j++;
        }
        else{
            break;
        }
     }
  return ans;
}

int main (){

    int n;
    cin>>n;

    vector<string> str(n);

    for(int i=0;i<str.size();i++){
        cin>>str[i];
    }

    string result;
    result = LongestPrefix(str);

    cout<<result<<endl;


    return 0;
}