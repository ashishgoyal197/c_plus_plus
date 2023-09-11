#include<iostream>
using namespace std;

// Solved by normal method.

int checkSum(int *arr,int n,int k){

    int max_sum = INT16_MIN;
    for(int i = 0; i<n-k+1; i++){
        int current_sum = 0;
        for(int j=0;j<k;j++){
            current_sum += arr[i+j];
        }
        max_sum = max(max_sum,current_sum);
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