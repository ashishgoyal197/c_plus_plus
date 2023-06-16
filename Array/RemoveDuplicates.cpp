#include <iostream>
#include <vector>
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

 int removeDuplicates(vector<int>& nums) {
       int ans = 1;
      // int size= nums.size();
       for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                ans++;
            }
            else {
                 nums.erase (nums.begin()+i);
                 i--;
            }
       }
      
     return ans;
        
    }

int main (){
 
    int n;
    cin>>n;

    vector <int> nums;

    nums = InputVector(n);
    int result;
    result = removeDuplicates(nums);

    cout<<result<<endl;

    return 0;
}