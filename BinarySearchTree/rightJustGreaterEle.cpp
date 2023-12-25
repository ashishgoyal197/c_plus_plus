#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given the array of integer. replace every element with its just greater element right side of array.
// if there is no greater element replace it with -1.

class TreeNode{
public:
    
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = right = NULL;
    }

};

    TreeNode* insertNode(TreeNode* root, int ele, int &succeser){

        if(root == nullptr) return new TreeNode(ele);

        if(ele<root->val){
            succeser = root->val;
            root->left = insertNode(root->left, ele, succeser);
        }
        else if(ele > root->val){
            root->right = insertNode(root->right, ele, succeser);
        }
        return root;
    }

    void rightjustGreaterEle(vector<int> &v){

        TreeNode* root = nullptr;
        for(int i=v.size()-1 ; i>=0 ; i--){
            int succeser = -1;
            root = insertNode(root, v[i], succeser);
            v[i] = succeser;
        }

    }

int main(){

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    }

    rightjustGreaterEle(v);
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}