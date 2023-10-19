#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }

    void InsertAtEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

};

    vector<int> TwoSum(Node* head , int target){

        vector<int> result(2,-1);
        
        Node* tail = head;
        int i=0;
        int j=0;
        
        while(tail->next != NULL){
            j++;
            tail = tail->next;
        }
        
        Node* ptr1 = head;
        Node* ptr2 = tail;
        while(i<j){

            if(ptr1->val + ptr2->val == target){
                result[0] = i;
                result[1] = j;
                return result;
            }

            else if(ptr1->val + ptr2->val < target){
                i++;
                ptr1 = ptr1->next;
            }
            else {
                j--;
                ptr2 = ptr2->next;
            }  
            
        }
        return result;
    }


    int main(){

        int n;
        cin>>n;

        DoublyLinkedList dll;

        for(int i=0; i<n ; i++){
            int ele;
            cin>>ele;

            dll.InsertAtEnd(ele);
        }

        int k;
        cin>>k;

        vector<int> result = TwoSum(dll.head,k);

        cout<<result[0]<<" "<<result[1]<<endl;

        return 0;
    }