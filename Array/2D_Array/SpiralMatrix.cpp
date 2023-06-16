#include<iostream>
#include<vector>
using namespace std;

// Given an m x n matrix, return all elements of the matrix in spiral order.

vector<int> SpiralMatrix(vector<vector<int>> &matrix){

    vector<int> result;
    int left = 0;
    int right = matrix[0].size()-1;
    int top = 0;
    int bottom = matrix.size()-1;
    int direction = 0;

    while(left<=right && top<=bottom){

        if (direction == 0){
            for(int i=left;i<=right;i++){
                int ele = matrix [top][i];
                result.push_back(ele);
            }
            top++;
        }

        else if(direction == 1){
            for(int i=top;i<=bottom;i++){
                int ele = matrix[i][right];
                result.push_back(ele);
            }
            right--;

        }

        else if(direction ==2){
            for(int i=right;i>=left;i--){
                int ele = matrix[bottom][i];
                result.push_back(ele);
            }
            bottom--;
        }

        else{
            for(int i=bottom;i>=top;i--){
                int ele = matrix[i][left];
                result.push_back(ele);
            }
            left++;
        }

        direction++;
        direction = direction%4;

    }

    return result;

}

int main (){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int> result;
     result = SpiralMatrix(matrix);

     for(int i=0;i<result.size();i++){
          cout<<result[i]<<"  ";
     }


    return 0;
}