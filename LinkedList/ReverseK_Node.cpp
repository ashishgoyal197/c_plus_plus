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

    Node* reverseKNodes(Node* head , int k){

        Node* prev = NULL;
        Node* curr = head;
        int count = 0;

        while(curr != NULL && count<k){
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(curr != NULL){
            Node* new_head = reverseKNodes(curr,k);
            head->next = new_head;
        }
        return prev;
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
   int k;
   cin>>k;
   ll.head = reverseKNodes(ll.head,k);
   ll.display();


   return 0;
}