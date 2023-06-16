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

int majorityElement(vector<int>& nums) {
      
      for(int i=0;i<=nums.size()/2;i++){
        int k=1;
          for(int j=i+1;j<nums.size();j++){
             if(nums[i]==nums[j]){
                k++;
             }
          }
          if(k>(nums.size()/2)){
            return nums[i];
          }
      }
      return -1;  
    }

int main(){

    int n;
    cin>>n;

    vector<int> check;

    check = InputVector(n);

    int result;
    result = majorityElement(check);

    cout<<result<<endl;

    return 0;
}