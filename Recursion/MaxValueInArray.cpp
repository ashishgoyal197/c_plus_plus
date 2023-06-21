#include<iostream>
using namespace std;

int maxValue(int *arr,int idx,int n){
    if(idx == n-1){
        return arr[n-1] ;
    }

    int maxo = max(arr[idx],maxValue(arr,++idx,n));
    return maxo;
}

int main (){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx = 0;
    cout<<maxValue(arr,idx,n)<<endl;
}