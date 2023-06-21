#include<iostream>
using namespace std;

// For Pass an array most of time we need to traverse array . so always pass an idx for traversal.

void printArray(int *arr,int idx,int n){
    if(idx == n ){
        return;
    }
    cout<<arr[idx]<<endl;
    printArray(arr,++idx,n);
    
}

int main (){

   int n;
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int idx = 0;
   printArray(arr,idx,n);

}