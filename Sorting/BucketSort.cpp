#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Bucket sort
// 1. create bucket of size n
// 2. Insert element into bucket : index = arr[i]*size of arr [this work only when element
// in range of 0-1] 
// so for place all element in range using range formula: range = max-min/size
// 3. Sort individual bucket
// 4. combine all element.

void bucketSort(float *arr,int n){

    // creating bucket
    vector<vector<float>> bucket(n,vector<float> ());

    // finding max and min in arr
    float max_ele = arr[0];
    float min_ele = arr[0];
    for(int i=0;i<n;i++){
        max_ele = max(max_ele,arr[i]);
        min_ele = min(min_ele,arr[i]);
    }

    float range = (max_ele-min_ele)/n;

    // Inserting element into bucket
    for(int i=0;i<n;i++){
        int index = (arr[i]-min_ele)/range;
        // boundry ele 
        float diff = (arr[i]-min_ele)/range - index;
        if(diff==0 && arr[i]!=min_ele)
        bucket[index-1].push_back(arr[i]);

        else
        bucket[index].push_back(arr[i]);
    } 

    // sort individual bucket.
    for(int i=0;i<n;i++){
        if(!bucket[i].empty())
        sort(bucket[i].begin(),bucket[i].end());
    }

    // combine
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }

}

int main(){

    int n;
    cin>>n;

    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bucketSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}