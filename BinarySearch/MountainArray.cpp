#include<iostream>
using namespace std;

int findPeak(int *arr , int n){

    int s = 0;
    int e = n-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid]>arr[mid-1]){
            s = mid+1;
        }
        else e = mid-1;
    }
    return s;
}

int main(){

    int arr[] = {1,2,3,4,5,8,7,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = findPeak(arr,n);
    cout<<result<<endl; 

    return 0;
}