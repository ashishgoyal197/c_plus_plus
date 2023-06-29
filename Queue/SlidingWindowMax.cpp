#include<iostream>
#include<vector>
#include<deque>
using namespace std;

// leetcode link [https://leetcode.com/problems/sliding-window-maximum/]

// You are given an array of integers nums, there is a sliding window of size k
// which is moving from the very left of the array to the very right.
// You can only see the k numbers in the window.
// Each time the sliding window moves right by one position.

// Return the max sliding window.

vector<int> maxSlidingWindow(vector<int> &arr,int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<k;i++){
        while(not dq.empty() and arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for(int i=k;i<arr.size();i++){
        int curr = arr[i];
        if(dq.front() == (i-k)) dq.pop_front();
         while(not dq.empty() and arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
    
}

int main(){

    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int k;
    cin>>k;

    vector<int> result;
    result = maxSlidingWindow(arr,k);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }cout<<endl;

    return 0;
}