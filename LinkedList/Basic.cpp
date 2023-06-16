#include<iostream>
using namespace std;

// In linked list all element is connected,not compulsary they store in contiguous memory.
// Every block of memory is called that have val and pointer that pointed to next element.


class Node{
public:
     int val;
     Node* next;

     Node(int data){
        val = data;
        next = NULL;
     }
};

// Inserting a value
// 1. At the start.

void insertAtHead(Node* &head, int val){
    // creating a new node with pointer.
    Node* new_node = new Node(val);
    // Now new node will become a head node.
    new_node->next = head;
    head = new_node;
}

// 2. At the end.
void insertAtTail(Node* &head,int val){
    Node* new_node = new Node(val);

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;

}

// 3. At any Kth position.

void insertAtPosition(Node* &head,int val,int pos){

    if(pos == 0){
        insertAtHead(head,val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_position = 0;
    while(current_position != pos-1){
       temp = temp->next;
       current_position++;

    }
    new_node->next = temp->next;
    temp->next = new_node;
}

// For Update value at Kth position.

void updateAtPosition(Node* &head,int val,int k){


    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos != k ){
       temp = temp->next;
       curr_pos++;
    }

    temp->val = val;

}

// For delete an element.
// 1. Delete head.

void deleteAthead(Node* &head){
    
   Node* temp = head;
   head = head->next;
   free(temp);
}

// 2. Delete Tail.

void deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }
    
    // Now second_last pointed to second last node.
    Node* temp = second_last->next; // node to be deleted.
    second_last->next = NULL; // so, second_last element will become last element.
    free(temp);

}

// 3. At any Position.

void deleteAtPosition(Node* &head,int pos){
    if(pos==0){
        deleteAthead(head);
        return;
    }
    Node* prev_node = head;
    int curr_pos = 0;
    while(curr_pos != pos-1){
      prev_node = prev_node->next;
      curr_pos++;
    }

    // Now prev_node pointing to prev ele of pos.
    Node* temp = prev_node->next; // node that will delete.
    prev_node->next = prev_node->next->next;
    free(temp);
}

// For print link list , generate a temp pointer which is traverse head to null.


void display(Node* head){
    
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;

}

int main(){

    Node* n = new Node(1);
    cout<<n->val<<" "<<n->next<<endl; 

    Node* head = NULL;
    insertAtHead(head,1);
    display(head);
    insertAtHead(head,3);
    display(head);
    insertAtTail(head,5);
    display(head);
    insertAtPosition(head,7,1);
    display(head);
    updateAtPosition(head,4,1);
    display(head);
    deleteAthead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    display(head);
    deleteAtPosition(head,3);
    display(head);

    return 0;
}