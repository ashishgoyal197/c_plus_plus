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
    //   for display
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }

    //   Insertion:
    // 1. At begining-
    void InsertAtStart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    // At End-
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
    // At Kth position-
    void InsertAtPosition(int val ,int pos){
        Node* new_node = new Node(val);
        Node* temp = head;
        int curr_pos = 0;
        while(curr_pos != pos-1){
           temp = temp->next;
           curr_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = new_node;
        
    }
    // Delete a Node
    // 1. At Start

    void deleteAtStart(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head == NULL){
             tail = NULL;
        }
        else{
            head->prev = NULL;
        }
        free(temp);
        return;
    }
    // 2. At end

    void deleteAtEnd(){
        if(tail==NULL){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail  == NULL){
            head = NULL;
        }
        else{
            tail->next = NULL;
        }
        free(temp);
    }
    // 3. At any Position

    void deleteAtPosition(int pos){
        if(pos==0){
           deleteAtStart();
           return;
        }
        
        Node* temp = head;
        int count = 0;
        while(count != pos-1){
           temp = temp->next;
           count++;
        }

        temp->next = temp->next->next;
        temp->next->prev = temp; 
        free(temp);
        return;
    }

};

int main(){

    Node* new_node = new Node(3);
    DoublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node;
    // cout<<dll.head->val<<endl;
    dll.InsertAtStart(1);

    dll.InsertAtStart(2);
    dll.display();
    // dll.deleteAtStart();
    // dll.display();
    dll.InsertAtStart(3);
    // dll.display();
    // dll.deleteAtEnd();
    // dll.display();
    dll.InsertAtEnd(4);
    dll.InsertAtEnd(5);
    dll.InsertAtPosition(6,3);
    dll.display();
    dll.deleteAtStart();
    dll.display();
    dll.deleteAtEnd();
    dll.display();
    dll.deleteAtPosition(3);
    dll.display();


    return 0;
}