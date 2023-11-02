#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    
    int value;
    Node* left;
    Node* right;

    Node(int data){
        value = data;
        left = right = NULL;
    }

};

    // Travesing
    // DFS
    // 1. Preorder
    //     -> visit
    //     -> left
    //     -> right

    void preOrder(Node* root){

        if(root == NULL){
            return;
        }
        cout<<root->value<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }

    // 2. Inorder 
    // ->left
    // ->visit
    // ->right

    void InOrder(Node* root){
        
        if(root == NULL) return;

        InOrder(root->left);
        cout<<root->value<<" ";
        InOrder(root->right);
    }

    // 3. PostOrder
    // -> left
    // -> right
    // -> visit

    void postOrder(Node* root){
        
        if(root == NULL) return;

        postOrder(root->left);
        postOrder(root->right);
        cout<<root->value<<" ";
    }

    void levelOrderTraversal(Node* root){

        queue<Node*> q;

        q.push(root);

        while(!q.empty()){


            int curr_size = q.size();
            while(curr_size--){

                Node* curr_node = q.front();
                q.pop();
                cout<<curr_node->value<<" ";

                if(curr_node->left != NULL){
                    q.push(curr_node->left);
                }

                if(curr_node->right != NULL){
                    q.push(curr_node->right);
                }
                

            }
            cout<<endl;

        }

    }

int main(){

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);

    // cout<<"Root Node: "<<root->value<<endl;
    // cout<<"Left child: "<<root->left->value<<endl;
    // cout<<"Right child: "<<root->right->value<<endl;

    // preOrder(root);
    // cout<<endl;
    // InOrder(root);
    // cout<<endl;
    // postOrder(root);
    // cout<<endl;

    levelOrderTraversal(root);

    return 0;
}
