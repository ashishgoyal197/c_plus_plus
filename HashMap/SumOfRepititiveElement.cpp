#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// find sum of element which is repeate at least one time in given vector.

int main(){

   int n;
   cin>>n;

   vector<int> v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }

   // find frequency of all element.
   map<int,int> m;
   for(int i=0;i<n;i++){
      m[v[i]]++;
   }

   int sum = 0;
   for(auto pair:m){
      if(pair.second>1){
          sum+=pair.first;
      }
   }

   cout<<sum<<endl;
   return 0;
}