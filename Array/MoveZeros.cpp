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

void moveZeroes(vector<int>& nums) {
     
     int k=0;
     for (int i=0;i<nums.size()-k;i++){
         if(nums[i]==0){
            //  int temp = nums[i];
            //  nums[i]=nums[k];
            //  nums[k]=temp;
            //  k--;
            //  x++;
            nums.erase(nums.begin()+i);
            nums.push_back(0);
            i--;
            k++;
         }
     }
     for(int i=0;i<nums.size();i++){
         cout<<nums[i]<<" ";
     }
        
    }

int main (){
    
    int n;
    cin>>n;

    vector<int> nums;

    nums=InputVector(n);
    moveZeroes(nums);

    return 0;
}