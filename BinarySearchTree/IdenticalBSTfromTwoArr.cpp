#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = right = nullptr;
    }

};
    bool checkIdenticalHelper(vector<int>& v1, vector<int>& v2, int a1, int a2, int minVal, int maxVal){

        // find element in range.
        // in vector 1.
        int i;
        for(i=a1 ; i<v1.size() ; i++){
            if(v1[i] > minVal && v1[i] < maxVal) break;
        }
        // in vector 2.
        int j;
        for(j=a2 ; j<v2.size() ; j++){
            if(v2[j] > minVal && v2[j] < maxVal) break;
        }

        if(i == v1.size() && j == v2.size()) return true;

        if((i==v1.size() && j != v2.size()) || (i !=v1.size() && j == v2.size())) return false;

        if(v1[i] != v2[j]) return false;

        return (checkIdenticalHelper(v1,v2,a1+1,a2+1,minVal,v1[i]) && (checkIdenticalHelper(v1,v2,a1+1,a2+1,v1[i],maxVal)));

    }
    
    bool checkIdentical(vector<int>& v1, vector<int>& v2){
        return checkIdenticalHelper(v1,v2,0,0,INT_MIN,INT_MAX);
    }

int main(){

    int n;
    cin>>n;

    vector<int> v1;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    vector<int> v2;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;

        v2.push_back(ele);
    }

    cout<<checkIdentical(v1,v2)<<endl;


    return 0;
}