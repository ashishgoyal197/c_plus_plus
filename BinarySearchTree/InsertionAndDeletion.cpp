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
        cout<<root->val<<" ";
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
        cout<<root->val<<" ";
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
        cout<<root->val<<" ";
    }

    void levelOrderTraversal(Node* root){

        queue<Node*> q;

        q.push(root);

        while(!q.empty()){


            int curr_size = q.size();
            while(curr_size--){

                Node* curr_node = q.front();
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

    void insertNode(Node* &root, int data){
        
        Node* newNode = new Node(data);
        if(root == nullptr){
            root = newNode;
            return;
        }

        Node* curr = root;
        while(true){

            if(curr->val > data){
                if(curr->left == nullptr){
                    curr->left = newNode;
                    return;
                }
                curr = curr->left;
            }
            else{
                if(curr->right == nullptr){
                    curr->right = newNode;
                    return;
                }
                curr = curr->right;
            }

        }

    }

    // Inserting recursively.

    Node* Insertion(Node* root, int data){

        if(root == nullptr){
            Node* newNode = new Node(data);
            return newNode;
        }

        if(root->val > data){
            root->left = Insertion(root->left, data);
        }
        else{
            root->right = Insertion(root->right, data);
        }
        
        return root;
    }

    // Searching

    bool SearchNode(Node* root, int key){

        if(root == nullptr) return false;
        if(root->val == key) return true;

        if(root->val > key){
            return SearchNode(root->left, key);
        }
        else return SearchNode(root->right, key);
        
    }

    Node* greatestNode(Node* root){

        Node* curr = root;
        while(curr && curr->right){
            curr = curr->right;
        }
        return curr;
    }

    Node* deleteNode(Node* root, int key){

        if(root == nullptr) return root;

        if(root->val < key){
            root->right = deleteNode(root->right, key);
        }
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else{

            // case - 1: Have no child Node.
            if(root->left == nullptr && root->right == nullptr){
                free(root);
                return nullptr;
            }
            // case - 2: Have 1 child Node.
            else if(root->left == nullptr){
                Node* temp = root->right;
                free(root);
                return temp;
            }
            else if(root->right == nullptr){
                Node* temp = root->left;
                free(root);
                return temp;
            }
            // case - 3: Have 2 child Node.
            else{
                
                Node* justSmalletNode = greatestNode(root->left);
                root->val = justSmalletNode->val;
                root->left = deleteNode(root->left,justSmalletNode->val);

            }
            

        }
        return root;
    }

int main(){

    Node* root = nullptr;

    root = Insertion(root,3);
    Insertion(root,1);
    Insertion(root,4);
    Insertion(root,6);
    Insertion(root,2);

    InOrder(root);
    cout<<endl;
    deleteNode(root,4);
    InOrder(root);

    return 0;
}