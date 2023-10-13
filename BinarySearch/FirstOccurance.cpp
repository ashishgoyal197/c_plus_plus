#include<iostream>
using namespace std;

int FirstOccurance(int *arr , int target , int st , int end){
    int ans = -1;
    
    while(st<end){
        int mid = st + ((end-st)/2);
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else {
            st = mid+1;
        }
    }
    return ans;
}

int main(){

    int arr[] = {2,5,5,5,6,6,8,9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    int result = FirstOccurance(arr,target,0,n-1);
    cout<<result<<endl;

    return 0;
}