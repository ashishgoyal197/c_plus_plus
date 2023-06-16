#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int maxCount(int m, int n, vector<vector<int>>& ops) {

        vector<vector<int>> vec(m,vector<int> (n,0));

        for(int i=0;i<ops.size();i++){
            int row_lim = ops[i][0];
            int col_lim = ops[i][1];
           
            for(int j=0;j<row_lim;j++){
                for(int k=0;k<col_lim;k++){
                    vec[j][k]++;
                }
            }

        }

        int max_num = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                max_num = max(max_num,vec[i][j]);
            }
        }

        int ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][j]==max_num){
                    ans++;
                }
            }
        }
        return ans;   
    }

int main (){

    int m,n;
    cin>>m>>n;
    int x;
    cin>>x;

    vector<vector<int>> ops(x,vector<int>(2));

    

    for(int i=0;i<x;i++){
        for(int j=0;j<2;j++){

            cin>>ops[i][j];

        }
    }

    int ans = maxCount(m,n,ops);

    cout<<ans<<endl;



    return 0;
}