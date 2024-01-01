#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Bottom up apporoch.
vector<int> dp;
int decodeWays(string s){

    int n = s.size();
    if(s[n-1] == '0') dp[2] = 0;
    else dp[2] = 1;
    
    bool canMake = stoi(s.substr(n-2, 2)) <= 26;
    if(s[n-2] == '0') dp[1] = 0;
    else dp[1] = dp[2] + canMake;

    if(n == 2) return dp[1];
    for(int i=n-3 ; i>=0 ; i--){
        if(s[i] == '0'){
            dp[0] = 0;
            dp[2] = dp[1];
            dp[1] = dp[0];
            continue;
        }
        canMake = stoi(s.substr(i, 2)) <= 26;
        dp[0] = dp[1] + (canMake ? dp[2]:0);
        dp[2] = dp[1];
        dp[1] = dp[0];
    }

    return dp[0];

}

int main(){
    
    
    string s;
    cin>>s;
    dp.resize(3, 0);
    int n = s.length();
    if(n==1){
        if(s[0] == '0') cout<<0<<endl;
        else cout<<1<<endl;
    }
    else cout<<decodeWays(s)<<endl;
    
    return 0;
}