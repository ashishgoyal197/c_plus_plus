#include<iostream>
using namespace std;

// we have a sorted array which is rotated n times ...now find min element in rotated array.
// Rotate means: In 1st rotation last element become first element. 

int Minimum(int *arr , int s , int e){
    
    
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid]<arr[e]){
            e = mid;
        }
        else if(arr[mid]>arr[e])  s = mid+1;
        else e--;
         
    }
    return arr[s];
}  

int main(){

    int arr[] = {3,4,5,6,7,8,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = Minimum(arr,0,n-1);
    cout<<result<<endl;


}