#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){

    int m,n;
    cin>>m>>n;

    vector<vector<int>> vec(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}