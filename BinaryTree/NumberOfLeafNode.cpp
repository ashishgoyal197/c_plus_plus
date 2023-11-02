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

};

    int NumberOfLeafNode(Node* root){

        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;

        int count = 0;
        count = NumberOfLeafNode(root->left) + NumberOfLeafNode(root->right);
        return count;

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

    cout<<NumberOfLeafNode(root)<<endl;


    return 0;
}