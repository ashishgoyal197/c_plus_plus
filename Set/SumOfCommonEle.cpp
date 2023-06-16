#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> Input_vector(int x){
    vector<int> result;
    for(int i=0;i<x;i++){
        int ele;
        cin>>ele;
        result.push_back(ele);

    }
    return result;
}

int SumOfCommonElement(vector<int> v1,vector<int> v2){
    int ans = 0;
    set<int> check;
    for(int i=0;i<v1.size();i++){
        int ele = v1[i];
        check.insert(ele);
    }

    auto itr = check.begin();
    for(int i=0;i<v2.size();i++){
        if(check.find(v2[i]) != check.end()){
            ans += v2[i];
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    vector<int> v1;
    v1 = Input_vector(n);

    int m;
    cin>>m;
    vector<int> v2;
    v2 = Input_vector(m);

    int ans = SumOfCommonElement(v1,v2);
    cout<<ans<<endl;



    return 0;
}