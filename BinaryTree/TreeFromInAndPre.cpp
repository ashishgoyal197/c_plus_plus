#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = right = nullptr;
    }
};
    void levelOrderTraversal(TreeNode* root){

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){


            int curr_size = q.size();
            while(curr_size--){

                TreeNode* curr_node = q.front();
                q.pop();
                cout<<curr_node->val<<" ";

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


    TreeNode* buildTreeHelper(vector<int>& preorder , int preS, int preE, vector<int>& inorder, int inS, int inE, unordered_map<int,int> m){

        if(preS>preE || inS>inE) return nullptr;

        TreeNode* root = new TreeNode(preorder[preS]);
        int rootIdx = m[root->val];
        int leftTree = rootIdx-inS;

        root->left = buildTreeHelper(preorder, preS+1, preS+leftTree, inorder, inS, rootIdx-1, m);

        root->right = buildTreeHelper(preorder, preS+leftTree+1, preE, inorder, rootIdx+1, inE, m);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        unordered_map<int,int> m;
        for(int i=0 ; i<inorder.size() ; i++){
            m[inorder[i]]=i;
        }

        return buildTreeHelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
        
    }

int main(){

    int n;
    cin>>n;

    vector<int> preorder;
    vector<int> inorder;

    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        preorder.push_back(ele);
    }
    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        inorder.push_back(ele);
    }

     
    TreeNode* root = buildTree(preorder,inorder);
    levelOrderTraversal(root);
    
    return 0;
}