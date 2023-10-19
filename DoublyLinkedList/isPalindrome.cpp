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

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }cout<<endl;
    }

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

};
    bool isPalindrome(Node* head , Node* tail){

        Node* ptr1 = head;
        Node* ptr2 = tail;

        while(ptr1 != ptr2 && ptr2 != ptr1->prev){
            if(ptr1->val != ptr2->val) return false;

            ptr1 = ptr1->next;
            ptr2 = ptr2->prev;
        }
        return true;
    }

    

    int main(){

        int n;
        cin>>n;

        DoublyLinkedList dll;

        for(int i=0; i<n ; i++){
            int ele;
            cin>>ele;

            dll.InsertAtEnd(ele);
        } 
        cout<<isPalindrome(dll.head , dll.tail)<<endl;
        



        return 0;
    }