#include<iostream>
using namespace std;

int SumOfArray(int* arr,int n){
    
    if(n-1==0){
        return arr[n-1];
    }
    int sum = 0;
    sum = arr[n-1] + SumOfArray(arr,n-1);
    return sum;

}

int main (){

  int n;
  cin>>n;

  int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

 
  cout<<SumOfArray(arr,n);

}