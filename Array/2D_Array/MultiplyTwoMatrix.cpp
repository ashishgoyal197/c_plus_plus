#include<iostream>
using namespace std;

int main (){

    int r1,c1;
    cin>>r1>>c1;
    int mat1[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
             
        }
    }

    int r2,c2;
    cin>>r2>>c2;
    int mat2[r2][c2];

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
        }
    }

    if(r2 != c1){
        cout<<"Matrix Multiplication is not Possible for this Input"<<endl;
    }
    
    else {
    int ans_mat[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int ans = 0;
            for(int k=0;k<c1;k++){

                ans += mat1[i][k]*mat2[k][j];
            }
            ans_mat[i][j] = ans;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans_mat[i][j]<<"  ";
        }
        cout<<endl;
    }
    }
    return 0;
}