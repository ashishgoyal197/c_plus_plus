#include <iostream>
using namespace std;

int main (){

    // Initializing
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    //Taking Input
    for (int i=0;i<n;i++){
         for (int j=0;j<m;j++){
             cin>>arr[i][j];
         }
    }

    //Output
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout <<arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}