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
    void reversedll(Node* &head , Node* &tail){

        Node* curr = head;

        while(curr != NULL){
            Node* Next = curr->next;
            curr->next = curr->prev;
            curr->prev = Next;
            curr = Next;
        }

        Node* temp = head;
        head = tail;
        tail = temp;

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
        reversedll(dll.head , dll.tail);
        dll.display();



        return 0;
    }