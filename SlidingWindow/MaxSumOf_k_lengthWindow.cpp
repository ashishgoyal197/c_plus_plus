#include<iostream>
using namespace std;

int checkSum(int *arr,int n,int k){
    int max_sum = INT16_MIN;
    if(n<k){
        return -1;
    }

    int window_sum = 0;
    for(int i=0;i<k;i++){
        window_sum += arr[i];
    }

    max_sum = window_sum;
    for(int i=0;i<n-k;i++){
        window_sum = window_sum + arr[i+k] - arr[i];
        max_sum = max(max_sum,window_sum);
    }
    return max_sum;
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int max_sum = checkSum(arr,n,k);
    cout<<max_sum<<endl;

    return 0;
}