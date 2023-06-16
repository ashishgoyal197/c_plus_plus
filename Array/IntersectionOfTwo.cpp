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


    void PrintVector(vector<int> result)
{
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

}

 vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
 
      set<int> count;
   

      for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){

            if(nums1[i]==nums2[j]){
                count.insert(nums1[i]);
                break;
            }

        }
      }

      // Convert set into vector.
     
     vector<int> result(count.begin(),count.end());
        
      return result;  
    }


int main (){

    int n;
    cin>>n;

    vector<int> nums1;

    nums1=InputVector(n);

    int m;
    cin>>m;

    vector<int> nums2;

    nums2=InputVector(m);

    vector<int> result;

    result = intersection(nums1,nums2);

    PrintVector(result);



    return 0;
}