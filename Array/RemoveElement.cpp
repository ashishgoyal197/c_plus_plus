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

 int removeElement(vector<int>& nums, int val) {

        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        return nums.size();
        
    }

int main (){

    int n;
    cin>>n;
    int val;
    cin>>val;

    vector<int> nums;

    nums = InputVector(n); 

    // vector<int> result;
    int result;
    result = removeElement(nums,val);

    cout<<result<<endl;
  


    return 0;
}