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

    Node* BreakList(Node* head,Node* mid){

        Node* result = NULL;
        result = mid->next;
        mid->next = NULL;
        return result;
    }

    Node* reversell2(Node* head,Node* mid){
        Node* curr = head;
        Node* prev = mid;

        while(curr != NULL){
            Node* Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
            
        }
        return prev;
    }

    bool checkEqual(Node* l1_head , Node* l2_head){

        while(l2_head != NULL){
            if(l1_head->val != l2_head->val) return false;
            l1_head = l1_head->next;
            l2_head = l2_head->next;
        }
        return true;
    }

    bool isPalindrome(Node* head){
        
        Node* mid = findMid(head);
        Node* ll2_head = mid->next;
        mid->next = NULL;

        Node* ll2_newHead = reversell2(ll2_head,mid);
        
        return checkEqual(head,ll2_newHead);
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

    cout<<isPalindrome(ll.head)<<endl;
   


   return 0;
}