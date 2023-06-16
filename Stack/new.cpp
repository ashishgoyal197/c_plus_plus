#include<iostream>
using namespace std;

class Stack{
public:
     int arr[100];
     int top = -1;
     
    // For Insert an element at top.
    void push(int val){
        arr[++top] = val;  
    }
    
    // For delete an element from top.
    void pop(){
        top -= 1;
    }

    // For Display Stack.
    void display(){
        for(int i=0;i<top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool isEmpty(){
        return top == -1;
    }

};

int main (){

    Stack num;
    num.push(4);
    num.push(5);
    num.push(7);
    num.display();
    num.pop();
    // num.pop();
    // num.pop();
    cout<< num.isEmpty()<<endl;
    num.display();
    return 0;


}
