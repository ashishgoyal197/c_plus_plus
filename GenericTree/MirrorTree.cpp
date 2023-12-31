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

    void mirrorTree(Node* root){

        if(root == nullptr) return;

        if(root->children.size() < 2) return;

        reverse(root->children.begin(), root->children.end());
        for(Node* child:root->children){
            mirrorTree(child);
        }


    }

int main(){

    Node* root = new Node(10);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(34));
    root->children.push_back(new Node(56));
    root->children.push_back(new Node(100));
    root->children[1]->children.push_back(new Node(1));
    root->children[3]->children.push_back(new Node(7));
    root->children[3]->children.push_back(new Node(8));
    root->children[3]->children.push_back(new Node(9));
    

    levelOrder(root);
    mirrorTree(root);
    levelOrder(root);


    return 0;
}