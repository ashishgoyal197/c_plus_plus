#include<iostream>
#include<vector>
using namespace std;


int main (){

    int r1,c1;
    cin>>r1>>c1;

    int m1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>m1[i][j];
        }
    }

    int r2,c2;
    cin>>r2>>c2;

    int m2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>m2[i][j];
        }
    }

    int result[r1][c1];

    if(r1==r2 && c1==c2){

        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                result[i][j] = m1[i][j] + m2[i][j];
                cout<<result[i][j]<<"  ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Addition is Not Possible"<<endl;

    }


    return 0;
}