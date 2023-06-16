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

 int heightChecker(vector<int>& heights) {

    int result=0;
    vector<int> expheights;

    expheights = heights;

    sort(expheights.begin(),expheights.end());

    for(int i=0;i<heights.size();i++){
        if(heights[i] != expheights[i]){
            result++;
        }

    }



    return result;
        
    }

int main (){

    int n;
    cin>>n;

    vector<int> heights;

    heights = InputVector(n);

     int result;
     result = heightChecker(heights);

    return 0;
}