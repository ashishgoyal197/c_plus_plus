#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// find fibo by dp
// creating a vector for store computed value.
vector<int> dp;
// Memoisation (top down approch).
int f(int n){
    if(n==0 || n==1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = f(n-1) + f(n-2);
}

// Tabulation (bottom up approch).

int fbu(int n){
    dp.resize(n+1, -1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2 ; i<= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// Bottom up optimised.

int fbuo(int n){
    if(n==0 || n==1) return n;
    int c;
    int a = 0;
    int b = 1;
    for(int i=2 ; i<=n ; i++){
        c = a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){

    int n;
    cin>>n;

    dp.resize(n+1, -1);
    cout<<f(n)<<" "<<fbu(n)<<" "<<fbuo(n)<<endl;


    return 0;
}