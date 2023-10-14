#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int x){
        val = x;
        next = NULL;
    }
};

class linkedlist{
public:
    Node* head;

    linkedlist(){
        head = NULL;
    }


    void InsertAtTail(int val){

        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
        }

        Node* temp = head;
        
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = new_node;
        new_node->next = NULL;


    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL";
    }

};

    void reorderLL(Node* head){

        //1. find mid element.

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* ll2_head = slow->next;
        slow->next = NULL;
        
        //2. reverse after mid.
        
        Node* prev = slow;
        Node* curr = ll2_head;

        while(curr != NULL){
            Node* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next; 
        }

        ll2_head = prev;

        // 3. Making reordered LL
        Node*temp = head;
        while(ll2_head != temp){
            Node* temp_next = temp->next;
            temp->next = ll2_head;
            temp = ll2_head;
            ll2_head = temp_next;

        }
        
    }

int main(){

   linkedlist ll;
   int n;
   cin>>n;

   for(int i = 0 ; i<n ; i++){
      int ele;
      cin>>ele;

      ll.InsertAtTail(ele);
   }

    reorderLL(ll.head);
    ll.display();
   


   return 0;
}