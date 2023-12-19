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
    
    // find just greater value than given value X.

    void preorder(Node* root){

        if(root == nullptr) return;

        cout<<root->data<<" ";
        for(Node* child: root->children){
            preorder(child);
        }
        return;
    }

    void justGreaterVal(Node* root, int n, int &ans){

        if(root == nullptr) return;

        if(root->data > n){
            ans = min(ans, root->data);
        }
        for(Node* child:root->children){
            justGreaterVal(child, n, ans);
        }
        return;
    }


int main(){

    Node* root = new Node(20);
    root->children.push_back(new Node(8));
    root->children.push_back(new Node(22));
    root->children[0]->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(12));
    root->children[0]->children[1]->children.push_back(new Node(10));
    root->children[0]->children[1]->children.push_back(new Node(14));

    int n;
    cin>>n;

    int ans = INT_MAX;

    justGreaterVal(root, n, ans);
    if(ans = INT_MAX) ans = -1;
    cout<<ans<<endl;

    // preorder(root);


    return 0;
}
