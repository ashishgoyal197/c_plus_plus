#include<iostream>
#include<vector>
using namespace std;

vector<int> FirstAndLastOccurance(int *arr , int target , int s , int e){
    vector<int> result(2,-1);
    int n = e;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==target){
            result[0] = mid;
            e = mid-1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else e = mid-1;
    }
    s = 0;
    e = n;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]==target){
            result[1] = mid;
            s = mid+1;
        }
        else if(arr[mid] < target){
            s = mid+1;
        }
        else e = mid-1;
    }
    return result;
}

int main(){

    int arr[] = {2,3,5,5,5,5,6,6,8,9,9,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    vector<int> result = FirstAndLastOccurance(arr,target,0,n-1);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }cout<<endl;


    return 0;
}