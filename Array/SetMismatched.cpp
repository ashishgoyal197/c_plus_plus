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

  vector<int> findErrorNums(vector<int>& nums) {

       vector<int> check;

       for (int i=0;i<nums.size()+1;i++){
           check.push_back(0);
       }
        vector<int> result;
       for(int i=0; i<nums.size();i++){
            
           check[nums[i]]++;
       }

       for(int i=1;i<check.size();i++){
            if(check[i]==2){
                result.insert(result.begin(),i);
            }
            if(check[i]==0){
                result.push_back(i);
            }
       }

       return result;



        
    }

int main () {

    int n;
    cin>>n;

    vector<int> nums;

    nums = InputVector(n);

    vector<int> result;

    result = findErrorNums(nums);

    for (int i=0;i<result.size();i++){

        cout<<result[i]<<" ";
    }


    return 0;
}