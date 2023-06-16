#include <iostream>

using namespace std;

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   // For optimise if there is no swaping is left then we can break.
    for(int i=0;i<n-1;i++){
        bool flag = false;
        for(int j=0;j<n-i-1;j++){
             if(arr[j]>arr[j+1]){
                int tamp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tamp;
                flag = true;

             }
        }
        if(flag==false){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}