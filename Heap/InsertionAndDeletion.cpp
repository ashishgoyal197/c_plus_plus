#include<bits/stdc++.h>
using namespace std;
int const N = 1e3;

    void InsertMinHeap(int minHeap[], int &size, int val){
        
        size++;
        minHeap[size] = val;
        int curr = size;
        while(curr/2 >0 && minHeap[curr/2] > minHeap[curr]){
            swap(minHeap[curr/2], minHeap[curr]);
            curr = curr/2;
        }

    }

    void InsertMaxHeap(int maxHeap[], int &maxHeap_size, int value){
        maxHeap_size++;
        maxHeap[maxHeap_size] = value;

        int curr = maxHeap_size;

        while(curr/2>0 && maxHeap[curr/2] < maxHeap[curr]){
            swap(maxHeap[curr/2], maxHeap[curr]);
            curr = curr/2;
        }
    }

    void removeMinHeap(int minHeap[], int &size){

        minHeap[1] = minHeap[size];
        size--;

        int curr = 1;
        while(2*curr <= size){
            
            int leftchild = 2*curr;
            int rightchild = 2*curr+1;

            int minchild = leftchild;
            if(rightchild <= size && minHeap[rightchild]<minHeap[leftchild]) minchild = rightchild;
            
            if(minHeap[curr]<=minHeap[minchild]) return;
            swap(minHeap[curr],minHeap[minchild]);

            curr = minchild;
        }

    }

    void removeMaxHeap(int maxHeap[], int &size){

        maxHeap[1] = maxHeap[size];
        size--;

        int curr = 1;
        while(2*curr <= size){
            int leftchild = 2*curr;
            int rightchild = 2*curr + 1;

            int maxchild = leftchild;
            if(rightchild <= size && maxHeap[rightchild] >= maxHeap[leftchild]) maxchild = rightchild;
            if(maxHeap[curr] >= maxHeap[maxchild]) return;

            swap(maxHeap[curr],maxHeap[maxchild]);
            curr = maxchild;


        }

    }

int main(){
    
    // Insertion in minHeap.
    int minHeap[N] = {-1,10,20,30,40,50};
    int size = 5; // number of element currently present in array.

    int val = 5; // value to be added. number number

    InsertMinHeap(minHeap, size, val);
    // for(int i=1 ; i<=size ; i++){
    //     cout<<minHeap[i]<<" ";
    // }cout<<endl;

    // Insertion in MaxHeap.

    int maxHeap[N] = {-1,60,50,40,30,20,30,10};
    int maxHeap_size = 7;
    int value = 100;

    InsertMaxHeap(maxHeap, maxHeap_size, value);
    for(int i=1 ; i<= maxHeap_size ; i++){
        cout<<maxHeap[i]<<" ";
    }cout<<endl;

    // Deletion in MinHeap.
    // we can delete only root Node in minheap.

    removeMinHeap(minHeap, size);
    // for(int i=1 ; i<=size ; i++){
    //     cout<<minHeap[i]<<" ";
    // }cout<<endl;

    // Deletion in MaxHeap
    removeMaxHeap(maxHeap, maxHeap_size);
    for(int i=1 ; i<= maxHeap_size ; i++){
        cout<<maxHeap[i]<<" ";
    }cout<<endl;



    return 0;
}