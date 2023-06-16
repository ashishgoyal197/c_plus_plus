#include<iostream>
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

    // Traversing
    // 1. Depth first search
    // A. Preorder
  
    void preorderTraversal(Node* rootnode)

};

int main(){

    Node* root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(4);

    cout<<"Root Node: "<<root->value<<endl;
    cout<<"Left child: "<<root->left->value<<endl;
    cout<<"Right child: "<<root->right->value<<endl;

    return 0;
}
