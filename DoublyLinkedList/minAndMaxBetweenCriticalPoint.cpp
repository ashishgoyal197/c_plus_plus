#include<iostream>
#include<vector>
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

    vector<int> minAndMaxdistanceBitweenCriticalPoint(Node* head , Node* tail){

        vector<int> result(2,-1);

        Node* temp = tail->prev;
        int count = 0;
        int min_dist = 10;
        int max_dist = -1;
        int last = 0;
        int first = 0;

        while(temp != NULL && temp->prev != NULL){
            
            if((temp->next->val < temp->val && temp->prev->val < temp->val) || (temp->next->val > temp->val && temp->prev->val > temp->val)){

                last = 1;
                first = 1+count;
                
                max_dist = first-last;
                min_dist = min(first-last+1,min_dist);
            }
            if(last != 0) count++;
            temp = temp->prev;

        }

        if(first == last) return result;
        else {
            result[0] = max_dist;
            result[1] = min_dist;
        }
        return result;
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

        vector<int> result = minAndMaxdistanceBitweenCriticalPoint(dll.head,dll.tail);

        cout<<result[0]<<" "<<result[1]<<endl;

        return 0;
    }