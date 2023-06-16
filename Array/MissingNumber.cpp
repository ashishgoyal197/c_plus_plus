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
 int missingNumber(vector<int>& nums) {
    
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i] != i){
            return i;
        }

    }
    
    return nums.size();
        
    }

int main (){

    int n;
    cin>>n;

    vector<int> nums;

    nums = InputVector(n);
    int result;
    result = missingNumber(nums);

    cout<<result<<endl;

    return 0;
}