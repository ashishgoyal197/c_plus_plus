#include<bits/stdc++.h>
using namespace std;

class Node{
public:

    int data;
    vector<Node*> children;

    Node(int val){
        data = val;
    }
};

    // Traversal
    // 1. preorder
    void preorder(Node* root){

        if(root == nullptr) return;

        cout<<root->data<<" ";
        for(Node* child: root->children){
            preorder(child);
        }
        return;
    }

    // 2. Inorder.

    void Inorder(Node* root){

        if(root == nullptr) return;

        int childNodes = root->children.size();
        for(int i=0 ; i<childNodes-1 ; i++){
            Inorder(root->children[i]);
        }
        cout<<root->data<<" ";
        if(childNodes>0) Inorder(root->children[childNodes-1]);
    }

    // 3. postorder

    void postOrder(Node* root){

        if(root == nullptr) return;

        for(int i=0 ; i<root->children.size() ; i++){
            postOrder(root->children[i]);
        }
        cout<<root->data<<" ";

    }

    // BFS -> level order 
    void levelOrder(Node* root){

        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int curr_size = q.size();
            while(curr_size--){
                
                Node* curr_node = q.front();
                q.pop();
                cout<<curr_node->data<<" ";
                
                for(Node* child : curr_node->children){
                    q.push(child);
                }

            }cout<<endl;
        }

    }


int main(){

    Node* root = new Node(1);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(3));
    root->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(5));
    root->children[0]->children.push_back(new Node(6));
    root->children[2]->children.push_back(new Node(7));

    // cout<<root->data<<endl;

    // for(Node* child : root->children){
    //     cout<<child->data<<" ";
    // }cout<<endl;

    levelOrder(root);



}