#include<bits/stdc++.h>
using namespace std;

// Given a vector of coins and a integer value k. we have to find number of ways to make k
// using coins.

int f(vector<int> &v, int x, int n){
    vector<int> dp(1000005, 0);
    int mod = 1000000007;
    dp[0] = 1;
    for(int j=0 ; j<n ; j++){
        for(int i=1 ; i<= x ; i++){
            if(i - v[j] < 0) continue; 
            dp[i] = (dp[i] % mod + dp[i - v[j]] % mod) % mod; 
        }
    }
    return dp[x];
}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }

    int k;
    cin>>k;

    cout<<f(v, k, n)<<endl;

    return 0;
}