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
        left = right = NULL;
    }

};

    void preOrder(Node* root){

        if(root == NULL){
            return;
        }
        cout<<root->val<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }

    Node* arrToBST(vector<int> v, int st, int end){

        if(st>end) return nullptr;

        int mid;
        mid = (st+end)/2;

        Node* root = new Node(v[mid]);
        root->left = arrToBST(v,st,mid-1);
        root->right = arrToBST(v,mid+1,end);
        return root;
    }

int main(){
        
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;

        v.push_back(ele);
    }

    Node* root = arrToBST(v,0,v.size()-1);
    preOrder(root);

    return 0;
}