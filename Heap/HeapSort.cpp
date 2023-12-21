#include<iostream>
using namespace std;
int N = 1e3;

    void heapify(int arr[], int curr, int size){

        while(2*curr <= size){

            int leftchild = 2*curr;
            int rightchild = 2*curr+1;
            int maxchild = leftchild;
            
            if(rightchild <= size && arr[rightchild] > arr[leftchild]) maxchild = rightchild;
            if(arr[curr] > arr[maxchild]) return;
            swap(arr[maxchild], arr[curr]);
            curr = maxchild;

        }

    }

    void removeMaxHeap(int arr[], int &size){

        int curr = 1;
        swap(arr[curr], arr[size]);
        size--;

        while(2*curr <= size){

            int leftchild = 2*curr;
            int rightchild = 2*curr+1;
            int maxchild = leftchild;

            if(rightchild <= size && arr[rightchild] > arr[leftchild]) maxchild = rightchild;
            if(arr[curr] > arr[maxchild]) return;
            swap(arr[curr], arr[maxchild]);
            curr = maxchild;

        }

    }

    void HeapSort(int arr[], int &size){

        // Heapify
        for(int i=size/2 ; i>0 ; i--){
            heapify(arr, i, size);
        }

        // Delete element.
        while(size>0){
            removeMaxHeap(arr, size);
        }

    }

int main(){

    int arr[N] = {-1,60,10,80,50,5,20,70};
    int size = 7;
    int curr_size = size;

    // for heap sort first we make maxHeap by heapify than root value give max value.
    // we delete root node value and store at last place of array.

    HeapSort(arr, size);
    for(int i=1 ; i<=curr_size ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}