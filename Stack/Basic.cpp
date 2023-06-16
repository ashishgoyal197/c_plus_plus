#include<iostream>
using namespace std;

class Stack{

    int capacity;
    int* arr;
    int top;
public:
    Stack(int val){
        capacity = val;
        top = -1;
        arr = new int(val);
    }

    void push(int data){
        if(top == capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop(){
        if(top == -1){
           cout<<"Underflow"<<endl;
           return -1;
        }
        top--;
    }

    bool isEmpty(){
        return top == -1; 
    }

    int isSize(){
        return top+1;
    }

    bool isFull(){
        return top == capacity-1;
    }

    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }



};
   

int main (){

   Stack str(5);
   str.push(4);
   str.push(3);
   str.push(2);
   str.pop();
   cout<<str.isEmpty()<<endl;
   str.display();
   


    return 0;
}