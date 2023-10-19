#include<iostream>
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
    // remove that element who has same next and prev element. 
    void removeSameNeibourEle(Node* &head , Node* &tail){

        Node* curr = tail->prev;
        while(curr->prev != NULL){
            if(curr->next->val == curr->prev->val){
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
            }
            curr = curr->prev;
        }

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
        removeSameNeibourEle(dll.head,dll.tail);
        dll.display();
        



        return 0;
    }