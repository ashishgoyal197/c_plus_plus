#include<iostream>
#include<vector>
using namespace std;

// Here I am constructing a array of sum of all possible subset of given array.
// When we are building a subset ...erery element has two choice ...thats got picked or not.
// then its look like a tree.

void f(int n , int *arr , int idx , int sum , vector<int> &result){
    if(idx == n){
        result.push_back(sum);
        return;
    }
    f(n,arr,idx+1,sum+arr[idx],result); // element got picked so sum updated.
    f(n,arr,idx+1,sum,result); // element not got picked so sum are same.
}


int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    vector<int> result;
    f(n,arr,0,0,result);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }cout<<endl;

    return 0;
}