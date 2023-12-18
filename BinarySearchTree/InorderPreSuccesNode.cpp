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

    void InorderPreSuccesNode(Node* root, Node* &pre, Node* &succ, int key){
            
        if(root == nullptr) return;

        if(root->val == key){
            Node* temp = root->left;
            while(temp->right){
                temp = temp->right;
            }

            pre = temp;
            temp = root->right;
            while(temp->left){
                temp = temp->left;
            }
            succ = temp;
            return;
        }

        if(root->val > key){
            succ= root;
            InorderPreSuccesNode(root->left,pre,succ,key);
        }
        else{
            pre = root;
            InorderPreSuccesNode(root->right,pre,succ,key);
        }


        
    }

int main(){
        
    Node* root = new Node(4);
    root->right = new Node(6);
    root->right->right = new Node(7);
    root->right->left = new Node(5);
    root->left = new Node(2);
    root->left->right = new Node(3);
    root->left->left = new Node(1);


    // int key;
    // cin>>key;
    Node* pre = nullptr;
    Node* succ = nullptr;

    InorderPreSuccesNode(root,pre,succ,3);
    if(pre) cout<<pre->val<<" ";
    if(succ) cout<<succ->val<<endl;


    return 0;
}