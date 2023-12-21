#include<iostream>
#include<queue>
using namespace std;

    int findKthLargest(vector<int>& nums, int k) {

        // priority_queue<int> pq;
        // for(int i=0 ; i<nums.size() ; i++){
        //     pq.push(nums[i]);
        // }

        // while(--k){
        //     pq.pop();
        // }
        // return pq.top();

        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0 ; i<k ; i++){
            pq.push(nums[i]);
        }

        for(int i=k ; i<nums.size() ; i++){
            pq.push(nums[i]);
            pq.pop();
        }
        
        return pq.top();

    }

int main(){

    int n;
    cin>>n;

    vector<int> nums;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }

    int k;
    cin>>k;

    cout<<findKthLargest(nums, k)<<endl;

    return 0;
}