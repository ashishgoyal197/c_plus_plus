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


    vector<int> topView(Node* root){

        vector<int> result;
        if(root==NULL) return result;
        map<int,int> m;
        queue<pair<Node*,int>> q;

        q.push(make_pair(root,0));

        while(!q.empty()){

            int curr_size = q.size();
            while(curr_size--){

                pair<Node*,int> p = q.front();
                q.pop();
                Node* currNode = p.first;
                int column = p.second;

                if(m.find(column) == m.end()){
                    m[column] = currNode->val;
                }

                if(currNode->left){
                    q.push(make_pair(currNode->left,column-1));
                }
                if(currNode->right){
                    q.push(make_pair(currNode->right,column+1));
                }

                
            }
        }
        for(auto it:m){
            result.push_back(it.second);
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

    result = topView(root);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }cout<<endl;

    return 0;
}