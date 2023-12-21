#include<bits/stdc++.h>
using namespace std;
int const N = 1e3;

// Heapify - Given a random array. Arrange value of array to get valid heap.
// we also know leaf if N element in my array than leaf node will start from 2*N+1;

    void heapifyMinHeap(int arr[], int size, int curr){
        
        while(2*curr <= size){

            int leftchild = 2*curr;
            int rightchild = 2*curr + 1;
            int minchild = leftchild;

            if(rightchild <= size && arr[rightchild] < arr[leftchild]) minchild = rightchild;

            if(arr[minchild] > arr[curr]) return;
            swap(arr[minchild], arr[curr]);
            curr = minchild;
        }
        

    }

    void heapifyMaxHeap(int arr[], int size, int curr){
        
        while(2*curr <= size){

            int leftchild = 2*curr;
            int rightchild = 2*curr + 1;
            int maxchild = leftchild;

            if(rightchild <= size && arr[rightchild] > arr[leftchild]) maxchild = rightchild;

            if(arr[maxchild] < arr[curr]) return;
            swap(arr[maxchild], arr[curr]);
            curr = maxchild;
        }
        

    }

int main(){

    int arr[N] = {-1,60,10,80,50,5,20,70};
    int size = 7;

    int arr1[N] = {-1,60,10,80,50,5,20,70};

    for(int i=size/2 ; i>=1 ; i--){
        heapifyMinHeap(arr, size, i);
    }

    for(int i=1 ; i<=size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=size/2 ; i>=1 ; i--){
        heapifyMaxHeap(arr1, size, i);
    }

    for(int i=1 ; i<=size ; i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;


    return 0;
}