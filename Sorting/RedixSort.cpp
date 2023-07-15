#include<iostream>
using namespace std;

void countSort(int *arr,int n,int pos){

    int freq[10] = {0};

    for(int i=0;i<n;i++){
        freq[(arr[i]/pos)%10]++;
    }

    for(int i=1;i<10;i++){
        freq[i] += freq[i-1];
    }

    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--freq[(arr[i]/pos)%10]] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i]= ans[i];
    }

}

void redixSort(int *arr,int n){

   int maxo = arr[0];
   for(int i=1;i<n;i++){
       maxo = max(arr[i],maxo);
   }

   for(int pos = 1;maxo/pos>0;pos*=10){
      countSort(arr,n,pos);
   }

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    redixSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}