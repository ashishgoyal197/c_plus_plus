#include<iostream>
using namespace std;

class Node{
public:
    
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }

};

class CircularLinkedList{
public:
 
    Node* head;

    CircularLinkedList(){
        head = NULL;
    }

    void display(){

        Node* temp = head;
        do{
            cout<<temp->val<<" ";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;
    }

    // 1. Insert at head.
    void atStart(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;
        }

        
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        head = new_node;
        
    }

    //2. at end 

    void atTail(int val){

        Node* new_node = new Node(val);

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        tail = new_node; 

    }

    // 3. At kth Position.
    void atKthPosition(int val , int k){

        Node* new_node = new Node(val);
        if(k==1){
            atStart(val);
            return;
        }

        int count = 1;
        Node* temp = head;

        while(count<k-1){
            temp = temp->next;
            count++;
        }
        
        new_node->next = temp->next;
        temp->next = new_node;


    }

    // Deletion

    // 1. from start
    void deletefromStart(){

        if(head->next == NULL){ 
            head = NULL;
            return;
        }   

        Node* tail = head;
        while(tail->next != head ){
            tail = tail->next;
        }

        head = head->next;
        tail->next = head;

    }

    // 2. from tail
    void deleteAtTail(){

        Node* tail = head;

        while(tail->next->next != head){
            tail = tail->next;
        }

        tail->next = head;
    }

    // 3. delete from kth position.

    void deleteKthPosition(int k){

        if(k==1){
            deletefromStart();
            return;
        }

        Node* temp = head;
        int count = 1;

        while(count < k-1){
            temp = temp->next;
            count++;
        }

        temp->next = temp->next->next;

    }
       


};



int main(){

    CircularLinkedList cll;
    
    cll.atStart(4);
    cll.atStart(3);
    cll.atStart(2);
    cll.atStart(1);
    cll.atTail(5);    
    cll.atTail(11);    
    cll.atTail(6);
    cll.atTail(10);
    cll.atKthPosition(7,4);
    cll.deletefromStart();
    cll.deleteAtTail();
    cll.display();
    cll.deleteKthPosition(3);

    

    cll.display();

    return 0;
}