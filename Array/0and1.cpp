#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int tamp = arr[i];
            arr[i]=arr[j];
            arr[j]=tamp;
            j++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}