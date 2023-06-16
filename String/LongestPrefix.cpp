#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

string LongestPrefix(vector<string> str){

  string s1 =  str[0];

  int ans_length = s1.length();

  for(int i=1;i<str.size();i++){
    
   int j=0;
    while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){

        j++;
    }
     ans_length = min(ans_length,j);

    
      
  }

  string ans = s1.substr(0,ans_length);
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