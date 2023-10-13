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

    bool checkSame(Node* head1 , Node* head2){

        Node* temp1 = head1;
        Node* temp2 = head2;
        

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val != temp2->val) return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1 == NULL && temp2 != NULL) return false;
        if(temp2 == NULL && temp1 != NULL) return false;
        return true;

    }


int main(){

    linkedlist l1;
    linkedlist l2;
    int n;
    cin>>n;

    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        l1.InsertAtTail(ele); 
        l2.InsertAtTail(ele); 
    }

    l1.InsertAtTail(5);
    l1.InsertAtTail(6);
    l2.InsertAtTail(6);
    l2.InsertAtTail(5);
    cout<<checkSame(l1.head,l2.head)<<endl;

    return 0;
}