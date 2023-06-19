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

void InsertAtHead(Node* &head,int val){
      
      Node* new_node = new Node(val);
      new_node->next = head;
      head = new_node;
}

void Display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }cout<<"NULL"<<endl;

}

void DeleteAlternateElement(Node* &head){

    Node* temp = head;
    while(temp->next != NULL){

        if(temp->next->next == NULL){
            Node* curr = temp->next;
            temp->next = NULL;
            free(curr);
            break;
        }
        
        temp->next = temp->next->next;
        temp = temp->next; 
    }

}

int main(){
 
    Node* head = NULL;
    InsertAtHead(head,5);
    InsertAtHead(head,4);
    InsertAtHead(head,3);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    Display(head);
    DeleteAlternateElement(head);
    Display(head);

    return 0;
}