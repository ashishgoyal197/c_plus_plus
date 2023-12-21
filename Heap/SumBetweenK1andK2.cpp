#include<bits/stdc++.h>
using namespace std;

// find sum between k1th smallest element and k2th smallest element.

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

    int removeMinHeap(int arr[], int &size){
        int sum = arr[0];
        arr[0] = arr[size-1];
        size--;
        heapifyMinHeap(arr, size, 0);
        return sum;
    }

    int sumBetweenk1andk2(int arr[], int size, int k1, int k2){

        for(int i=size/2-1 ; i>=0 ; i--){
            heapifyMinHeap(arr, size, i);
        }

        int sum = 0;
        for(int i=0 ; i<k2 ; i++){
            int temp = removeMinHeap(arr, size);
            if(i>k1) sum += temp;
        }
        
        return sum;
    }

int main(){

    int arr[7] = {20,8,22,4,12,10,14};
    int size = 7;

    int k1 = 3; // it is k1th smallest element.
    int k2 = 5; // it is k2th smallest element.

    cout<<sumBetweenk1andk2(arr, size, k1, k2)<<endl;



    return 0;
}