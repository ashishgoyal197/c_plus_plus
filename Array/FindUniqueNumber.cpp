#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i] != -1){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[i]=-1;
                arr[j]=-1;
            }    
        }
     }
    }

    for(int i=0;i<n;i++){
        if(arr[i] != -1){
            cout<<arr[i];
        }
    }




    return 0;
}