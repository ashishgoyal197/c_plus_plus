#include<iostream>
#include<stack>
using namespace std;

// using push efficient i.e. time complexity of push is O(1);

class Queue{
public:
   stack<int> st;
   Queue(){};

   void push(int val){
       st.push(val);
   }

   void pop(){
       stack<int> temp;
       while(st.size()>1){
           temp.push(st.top());
           st.pop();
       }
       st.pop();
       while(not temp.empty()){
           st.push(temp.top());
           temp.pop();
       }
   }

   bool isEmpty(){
        return st.empty();
   }

   int front(){

    stack<int> temp;
       if(st.empty()) return -1;
       while(st.size()>1){
           temp.push(st.top());
           st.pop();
       }
       int result = st.top();
       while(not temp.empty()){
           st.push(temp.top());
           temp.pop();
       }
       return result;
   }

};

int main (){

    Queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.pop();

    while(not qu.isEmpty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }cout<<endl;

    

    return 0;
}