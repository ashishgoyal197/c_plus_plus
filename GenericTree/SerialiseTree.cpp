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

    void serialiseTree(Node* root, string &ans){

        if(root == nullptr) return;

        ans += to_string(root->data) + ":" + to_string(root->children.size()) + ":";
        for(Node* child:root->children){
            ans+= to_string(child->data) + ",";
        }
        if(root->children.size()) ans.pop_back();
        ans += "\n";

        for(Node* child:root->children){
            serialiseTree(child, ans);
        }
        return;
    }

    Node* deserializeHelper(int NodeVal, unordered_map<int, string> mp){

        Node* node = new Node(NodeVal);
        string nodeStr = mp[NodeVal];

        if(nodeStr[0] == '0') return node;

        int breakPos = nodeStr.find(':');
        int numChild = stoi(nodeStr.substr(0,breakPos));
        string childNodeString = nodeStr.substr(breakPos+1);

        int start = 0;
        for(int i=0 ; i<numChild ; i++){

            int end = childNodeString.find(',', start);
            if(end == string::npos) end = childNodeString.size();
            int childNodeVal = stoi(childNodeString.substr(start,end));
            node->children.push_back(deserializeHelper(childNodeVal, mp));
            start = end+1;

        }
 
        return node;

    }

    Node* deserialize(string serialisedStr){

        if(serialisedStr == "") return nullptr;
        int start = 0;
        unordered_map<int, string> mp;
        for(int i=0 ; i<serialisedStr.size() ; i++){

            if(serialisedStr[i] == '\n'){
                string nodeStr = serialisedStr.substr(start, i-start);
                int breakPos1 = nodeStr.find(':');
                int nodeVal = stoi(nodeStr.substr(0, breakPos1));
                mp[nodeVal] = nodeStr.substr(breakPos1+1);
                start = i+1;
            }
        }

        int NodeVal = stoi(serialisedStr.substr(0,serialisedStr.find(':')));
        return deserializeHelper(NodeVal, mp);


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

    string serialisedTree = "";
    serialiseTree(root, serialisedTree);
    cout<<serialisedTree<<endl;

    Node* deserializedroot = deserialize(serialisedTree);
    levelOrder(deserializedroot);

    return 0;   
}