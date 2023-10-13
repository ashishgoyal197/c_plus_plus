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

    Node* findMid(Node* head){

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){

            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
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
   
   Node* mid = findMid(ll.head);
   cout<<mid->val<<endl;


   return 0;
}