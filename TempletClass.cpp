#include<iostream>
using namespace std;

template <typename T>
class Node{
public:

    T val;
    Node* next;

    Node(T data){
        val = data;
        next = NULL;
    }
     
};

int main(){

    Node<int>* new_node1 = new Node<int>(3);
    cout<<new_node1->val<<endl;

    Node<char>* new_node2 = new Node<char>('a');
    cout<<new_node2->val<<endl;

    return 0;
}