#include<iostream>
using namespace std;

void countSort(int *arr,int n){
    // first I will find max element.
    int maxo = arr[0];
    for(int i=1;i<n;i++){
        maxo = max(arr[i],maxo);
    }
    // define a array for count frequency of every element.
    int m = maxo+1; // size of freq array.
    int freq[m] = {0};

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    // calculate cumulative frequency.
    for(int i=1;i<m;i++){
        freq[i] += freq[i-1];
    }
    
    // adding element in ans array.
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--freq[arr[i]]] = arr[i];
    }

    // Display result
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    countSort(arr,n);

    return 0;
}