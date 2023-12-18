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

    vector<int> rightMostLeafNode(Node* root){
        
        vector<int> result;
        queue<Node*> q;
        q.push(root);

        while(!q.empty()){

            int curr_size = q.size();
            while(curr_size){

                Node* curr_ele = q.front();
                q.pop();
                if(curr_size == 1){
                    int ele = curr_ele->value;
                    result.push_back(ele);
                }
                if(curr_ele->left){
                    q.push(curr_ele->left);
                }
                if(curr_ele->right){
                    q.push(curr_ele->right);
                }
                curr_size--;
            }

        }
        return result;
    }


int main(){

    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    // root->right->right->right = new Node(13);
    // root->right->right->right->right = new Node(14);
    // root->right->right->right->left = new Node(15);
    // root->right->right->right->left->left = new Node(16);

    vector<int> result;

    result = rightMostLeafNode(root);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }cout<<endl;

    return 0;
}