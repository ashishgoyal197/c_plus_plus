#include<iostream>
using namespace std;

// In quick sort we take a pivot element (most commonly take last element of array) put it on 
// its exact position then devide array into two parts element before pivot element and after
// the pivot element ...repeat same process till only one element left for devide.

int partition(int *arr , int first , int last){

    int pi = arr[last];
    int i = first-1; // for insert lesser element 
    int j = first; // for find element

    for(;j<last;j++){
        if(arr[j]<pi){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    // now correct position of pi is i+1
    swap(arr[i+1],arr[last]);
    return i+1;

}

void quickSort(int *arr,int first,int last){

    // base case
    if(first>=last){
        return;
    }

    // for find pivot element 
    int pi = partition(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi+1,last);

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}