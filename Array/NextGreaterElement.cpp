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

void PrintVector(vector<int> result)
{
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout<<endl;
}

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
       vector<int> result;
       int flag =0;
       int flag1=0;
       

        for (int i=0;i<nums1.size();i++){
            for (int j=0;j<nums2.size()-1;j++){
                if (nums1[i]==nums2[j] || flag1==1){
                    flag1=1;
                     if (nums2[j+1]>nums1[i]){
                        result.push_back(nums2[j+1]);
                        flag = 1;
                        
                        break;
                     }  
                }
            }
            if (flag == 0){
                result.push_back(-1);
            }
            else {
               flag = 0;
            }
            if(flag1==1){
                flag1=0;
            }
        }

        return result;
        
    }






int main () {
    
    cout<<"Give size of nums1"<<endl;
    int n;
    cin>>n;
    
    cout<<"Give element of nums1"<<endl;
    vector<int> nums1;
    nums1=InputVector(n);

    cout<<"Give size of nums2"<<endl;
    int m;
    cin>>m;

    cout<<"Give size of nums2"<<endl;
    vector<int> nums2;
    nums2= InputVector(m);

    // PrintVector(nums2);
    // PrintVector(nums1);

    vector<int> result;
    result = nextGreaterElement(nums1,nums2);

    PrintVector(result);

    return 0;
}