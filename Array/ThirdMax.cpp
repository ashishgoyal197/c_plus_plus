#include <iostream>
#include <vector>
#include <set>
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

 int thirdMax(vector<int>& nums) {
      
      int result;
      set<int> count;

      for(int i=0;i<nums.size();i++){
          
          count.insert(nums[i]);
      }

      vector<int> check(count.begin(),count.end());
      if(check.size()>=3){
      result = check[check.size()-3];
      }

      else{
        result = check[check.size()-1];
      }
        
        return result;
    }

int main (){

    int n;
    cin>>n;

    vector<int> nums;

    nums = InputVector(n);

    int result = thirdMax(nums);

    cout<<result<<endl;


    return 0;
}