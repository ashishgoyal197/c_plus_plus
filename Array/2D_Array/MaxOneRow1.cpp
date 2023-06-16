#include<iostream>
#include<vector>
using namespace std;

// Given a boolean 2D array .where each row is sorted . find max ones row.

int maxOnesRow(vector<vector<int>> &v){

    int max_one = 0;
    int maxOneRow = -1;
    int numberOfColumn = v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){

                int num_one = numberOfColumn - j;
                if(num_one > max_one){
                    max_one = num_one;
                    maxOneRow = i;
                   
                }
                break;

            }
        }
    }
    return maxOneRow;
}

int main (){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int result = maxOnesRow(vec);
    cout<<result<<endl;


    return 0;
}