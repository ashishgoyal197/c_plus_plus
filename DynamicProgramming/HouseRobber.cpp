#include<iostream>
#include<vector>
using namespace std;

    vector<int> dp;
    int rob(vector<int>& nums) {
        dp.resize(3, -1);
        if(nums.size()==1) return nums[0];
        int n = nums.size();
        dp[2] = nums[n-1];
        dp[1] = max(nums[n-1], nums[n-2]);
        if(n==2) return dp[1];
        for(int i=n-3; i>=0 ; i--){
            dp[0] = max(nums[i]+dp[2], dp[1]);
            dp[2] = dp[1];
            dp[1] = dp[0];
        }
        return dp[0];
    }

int main(){

    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0 ; i<n ; i++){
        cin>>nums[i];
    }
    cout<<rob(nums)<<endl;

    return 0;
}