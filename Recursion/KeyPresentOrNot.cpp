#include<iostream>
using namespace std;

bool isPresent(int n , int *arr , int key , int idx){

    if(arr[idx] == key) return true;
    if(idx == n) return false;

    return isPresent(n,arr,key,++idx);
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<isPresent(n,arr,key,0)<<endl;

    return 0;
}