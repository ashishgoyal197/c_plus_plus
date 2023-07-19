#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> targetSum(vector<int> v,int k){

    vector<int> result(2,-1);

    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        if(m.find(k-v[i]) == m.end()){
            m[v[i]]=i;
        }
        else{
            result[0] = m[k-v[i]];
            result[1] = i;
             
        }
    }
    return result;
}

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int k;
    cin>>k;

    vector<int> result;
    result = targetSum(v,k);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }cout<<endl;

}