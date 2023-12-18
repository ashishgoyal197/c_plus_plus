#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = right = nullptr;
    }
};
    
    int pathSum(Node* root , int target , int curr_sum , unordered_map<long int , int> m){

        if(root == nullptr) return 0;
        
        curr_sum += root->val;
        int result = m[curr_sum - target];
        m[curr_sum]++;
        
        result += pathSum(root->left,target,curr_sum,m) + pathSum(root->right,target,curr_sum,m);
        m[curr_sum]--;
        return result; 

    }

int main(){

    Node* root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(3);
    root->left->left->left = new Node(3);
    root->left->left->right = new Node(-2);
    root->left->right = new Node(2);
    root->left->right->right = new Node(1);
    root->right = new Node(-3);
    root->right->right = new Node(11);

    unordered_map<long int , int> m;
    int result = pathSum(root,8,0,m);
    cout<<result<<endl;

    return 0;
}