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
    int getLength(Node* head){
        int i=0;
        Node* temp = head;
        while(temp != NULL){
            i++;
            temp = temp->next;
        }
        return i;
    }

    Node* deletekthFromLast(Node* head, int k){

        Node* ptr1 = head;
        Node* ptr2 = head;

        int count = k;
        while(count--){
            ptr2 = ptr2->next;
        }

        if(ptr2 == NULL){
            head = head->next;
            return head;
        }

        while(ptr2->next != NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        ptr1->next = ptr1->next->next;
        return head;
        
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
   ll.head = deletekthFromLast(ll.head,k);
   ll.display();


   return 0;
}