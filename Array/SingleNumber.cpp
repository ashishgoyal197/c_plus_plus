#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> InputVector(int n)
{
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }

    return input;
}

int singleNumber(vector<int>& nums) {
      sort(nums.begin(), nums.end());
    //  return nums;
    if (nums.size()==1){
        return nums[0];
    }
    if(nums[0] != nums[1]){
        return nums[0];
    }
    if(nums[nums.size()-1] != nums[nums.size()-2]){
         return nums[nums.size()-1];
    }
    for(int i=1;i<nums.size()-1;i++){
        
        if(nums[i] != nums[i+1] && nums[i] != nums[i-1]){
           return nums[i];
        }
        // else{
        //     return nums[i];
        // }
    }
    return -1;
}

int main (){
    int n;
    cin>>n;

    vector<int> nums;
    nums = InputVector(n);

    int result;
    result= singleNumber(nums);

    cout<<result<<endl;

//    for (int i=0;i<nums.size();i++){
//       cout<<nums[i]<<" ";
//    }

    return 0;
}