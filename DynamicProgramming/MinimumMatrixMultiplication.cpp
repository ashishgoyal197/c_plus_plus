#include<bits/stdc++.h>
using namespace std;

// Matrix chain multiplication
// Given a array of dimention of matrix. dimension of ith matrix is arr[i-1]*arr[i].
// find efficient way of multiply these matrix, so that number of multiplication is minimum.

vector<vector<int>> dp;
int f(vector<int> &v, int i, int j){
    if(i==j || i+1 == j) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = INT_MAX;
    for(int k=i+1 ; k<j ; k++){
        ans = min(ans, f(v, i, k)+f(v, k, j)+(v[i]*v[j]*v[k]));
    }
    return dp[i][j] = ans;
}

int main(){

    int n;
    cin>>n;
    dp.resize(1005, vector<int> (1000,-1));
    vector<int> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }

    
    cout<<f(v, 0, n-1)<<endl;
    return 0;
}