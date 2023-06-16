#include<iostream>
#include<vector>
using namespace std;

// sum of Rectangle forms b/w two points (l1,r1) and (l2,r2).
// Find by prefix matrix.

int RectangleSum(vector<vector<int>> &v,int l1,int r1,int l2,int r2){

  int sum = 0;
  for(int i=0;i<v.size();i++){
     for(int j=1;j<v[0].size();j++){

        v[i][j] += v[i][j-1];
         
     }
  }

  for(int i=l1;i<=l2;i++){
    if(r1 != 0){
     sum += v[i][r2]-v[i][r1-1]; 
    }
    else{
        sum += v[i][r2];
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