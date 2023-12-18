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

    Node* removeLeafNode(Node* root){

        if(root==nullptr) return nullptr;
        if(root->left == nullptr && root->right == nullptr) return nullptr;

        root->left = removeLeafNode(root->left);
        root->right = removeLeafNode(root->right);
    }

int main(){
 
    Node* root = new Node(4);
    root->left = new Node(2);
    root->left->right = new Node(3);
    root->left->left = new Node(1);
    root->right = new Node(6);
    root->right->right = new Node(7);
    root->right->left = new Node(5);

    preOrder(root);
    cout<<endl;
    preOrder(removeLeafNode(root));

    return 0;
}