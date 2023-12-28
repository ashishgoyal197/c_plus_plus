#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> dp;

// top down approch.
int f(vector<int> &h, int i, int k){
    if(i == h.size() - 1) return 0;
    if(dp[i] != INT_MAX) return dp[i];

    int ans = INT_MAX;
    for(int j=1 ; j<=k ; j++){
        if(i+j >= h.size() ) break;
        ans = min(ans, abs(h[i]-h[i+j])+f(h, i+j, k));
    }
    return dp[i] = ans;
}

// Bottom up approch.
int fbu(vector<int> &h, int k){
    int n = h.size();
    dp[n-1] = 0;
    for(int i=n-2 ; i>=0 ; i--){
        for(int j=1 ; j<=k ; j++){
            if(i+j >= n) break;
            dp[i] = min(dp[i], abs(h[i]-h[i+j]) + dp[i+j]);
        }
    }
    return dp[0];
}

int main(){

    int n;
    cin>>n;
    dp.clear();
    dp.resize(100005, INT_MAX);
    vector<int> v(n,0);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    cout<<fbu(v, k)<<endl;

    return 0;
}