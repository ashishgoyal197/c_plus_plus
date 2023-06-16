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
 int distributeCandies(vector<int>& candyType) {
        int k=1;
        sort(candyType.begin(),candyType.end());
        for(int i=0;i<candyType.size()-1;i++){
            if(candyType[i] != candyType[i+1]){
                k++; 
            }
        }
        if(k<=candyType.size()/2){
            return k;
        }
        else{
            return candyType.size()/2;
        }

       
    }

int main (){

    int n;
    cin>>n;

    vector<int> candyType;
    candyType = InputVector(n);

    int result;
    result = distributeCandies(candyType);

    cout<<result<<endl;

    return 0;
}