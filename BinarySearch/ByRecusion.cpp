#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> &v , int target , int start , int end){
    if(start>end) return -1;
    int mid = start + ((end-start)/2);
    if(v[mid]==target) return mid;
    if(v[mid] < target) return BinarySearch(v,target,mid+1,end);
    else return BinarySearch(v,target,start,mid-1);
    
}


int main(){

    int n;
    cin>>n;
    int target;
    cin>>target;

    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int result = BinarySearch(v,target,0,v.size()-1);
    cout<<result<<endl;

    return 0;
}