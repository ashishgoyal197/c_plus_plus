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

    bool isValid(Node* root, Node* &temp){

        if(root==nullptr) return true;
        if(!(isValid(root->left, temp))) return false;
        if(temp != nullptr && root->val <= temp->val) return false;

        temp = root;
        return isValid(root->right, temp);

    }

int main(){
        
    Node* root = new Node(4);
    root->right = new Node(6);
    root->right->right = new Node(7);
    root->right->left = new Node(5);
    root->left = new Node(2);
    root->left->right = new Node(8);
    root->left->left = new Node(1);
    
    Node* temp = nullptr;
    cout<<isValid(root, temp);
    
    return 0;
}