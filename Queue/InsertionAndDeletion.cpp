#include<iostream>
#include<vector>
using namespace std;

// Build a queue using array.

class Queue{
    int front;
    int back;
    vector<int> v;
public:
    Queue(){
       this->front = -1;
       this->back = -1;
    }
    // for insert value in queue . here we insert value from back.
    void enqueue(int data){
        this->v.push_back(data);
        this->back++;
        if(this->back == 0) this->front = 0;
    }
    // for remove value . in queue elements are always remove front.
    void dequeue(){
        if(this->front == this->back){
            this->front = -1;
            this->back = -1;
            this->v.clear();
        }
        else this->front++;
    }

    // for get front element of queue.
    int getfront(){
        if(this->front == -1) return -1;
        return this->v[this->front];
    }

    // for check queue is empty or not.
    bool isEmpty(){
        return this->front == -1;
    }
};

int main(){

   Queue qu;
   qu.enqueue(10);
   qu.enqueue(20);
   qu.enqueue(30);
   qu.enqueue(40);
   qu.dequeue();

   cout<<qu.isEmpty()<<endl;

// for show output.   
   while(not qu.isEmpty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
   }cout<<endl;



    return 0;
}