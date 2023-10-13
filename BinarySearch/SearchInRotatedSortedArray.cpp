#include<iostream>
#include<vector>
using namespace std;

int findElement(vector<int> nums ,int target){

    int s = 0;
    int e = nums.size()-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(target == nums[mid]) return mid;
        if(nums[mid] >= nums[s] ){
            if(target < nums[mid] && target >= nums[s]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
           
        }
        else if(target <= nums[e] && target >= nums[mid]){
            s = mid+1;
        }
        else {
            e = mid-1;
        }
 
    }

    return -1;
}

int main(){

    int n;
    cin>>n;

    int target;
    cin>>target;

    vector<int> nums;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }

    int result = findElement(nums,target);
    cout<<result<<endl;


    return 0;
}