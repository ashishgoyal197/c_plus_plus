#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Rotate matrix by 90 degree Clockwise.
// e.g.  1 2 3      7 4 1
//       4 5 6  ->  8 5 2
//       7 8 9      9 6 3

void RotateVector(vector<vector<int>> &v){

    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i=0;i<v.size();i++){
       reverse(v[i].begin(),v[i].end());
    }

    
   return;
}

int main (){

    int n;
    cin>>n;

    vector<vector<int>> v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }

    RotateVector(v);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}