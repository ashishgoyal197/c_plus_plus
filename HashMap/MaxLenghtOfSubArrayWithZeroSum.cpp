#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given an array of some element . find max length of possible subarray with sum of element
// is zero.

int maxLenghtOfSubArray(vector<int> v){

   for(int i=1;i<v.size();i++){
       v[i] = v[i-1]+v[i];
   }

   unordered_map<int,int> m;
 
    int ans = 0;

   for(int i=0;i<v.size();i++){
       if(m.find(v[i]) == m.end()){
           m[v[i]] = i;
       }
       else{
           ans = max(i-m[v[i]],ans);
       }

   }
   return ans;
}

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans;
    ans = maxLenghtOfSubArray(v);

    cout<<ans<<endl;


    return 0;
}