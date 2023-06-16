#include<iostream>
using namespace std;

int main (){

    int r1,c1;
    cin>>r1>>c1;
    int mat[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat[i][j];
        }
    }

    int TransMat[c1][r1];

    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            TransMat[i][j]=mat[j][i];
        }
    }

    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<TransMat[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}