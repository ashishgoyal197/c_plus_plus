#include<iostream>
using namespace std;

// In merge sort we break an array in two sub array than sub array break another two sub array 
// and so on.

void merge(int *arr,int l,int mid,int r){

    // break into two array
    // size of these two array.

    int an = mid-l+1;
    int bn = r-mid;

    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]= arr[mid+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }

    while(i<an){
        arr[k++] = a[i++];
    }
    while(j<bn){
        arr[k++] = b[j++];
    }
   
}

// here l and r is start and ending point respectively.
void mergeSort(int *arr,int l,int r){

    if(l>=r){
        return;
    }

    int mid = (l+r)/2;
    // break an array into two parts again and again till only one element left.
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    // now merge these sorted sub array 
    merge(arr,l,mid,r);
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}