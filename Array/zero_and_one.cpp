#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    while (i<=j){
       
       if (arr[i]==1 && arr[j]==0){
           int temp = arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i++;
           j--;
       }

       else if(arr[i]==1 && arr[j]==1){
            j--;
       }

       else if (arr[i]==0){
            i++;
       }

    }

    for (int i=0;i<n;i++){
          cout<<arr[i]<<" ";
       }

    return 0;
}