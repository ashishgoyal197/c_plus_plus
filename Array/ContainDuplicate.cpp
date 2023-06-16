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

 bool containsDuplicate(vector<int>& nums) {
    // for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<nums.size();j++){
    //         if(i == j){
    //            continue;
    //         }
    //         else{
    //            if(nums[i]==nums[j]){
    //              return true;
    //            }
    //         }
    //     }
        
    // }

    // return false;
     sort(nums.begin(), nums.end());
     for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return true;
        }
         
     }
     return false;
        
    }

int main (){

    int n;
    cin>>n;

    vector<int> nums;

    nums = InputVector(n);
    bool result=false;
    result = containsDuplicate;

    cout<<result<<endl;

    return 0;
}