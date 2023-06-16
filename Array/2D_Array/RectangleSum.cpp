#include<iostream>
#include<vector>
using namespace std;

// sum of Rectangle forms b/w two points (l1,r1) and (l2,r2).

int RectangleSum(vector<vector<int>> &v,int l1,int r1,int l2,int r2){
     
    int sum = 0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum += v[i][j];
        }
    }
    return sum;

}

int main (){
    int n,m,l1,r1,l2,r2;
    cin>>n>>m>>l1>>r1>>l2>>r2;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    
    int result = RectangleSum(v,l1,r1,l2,r2);

    cout<<result<<endl;

    return 0;

}