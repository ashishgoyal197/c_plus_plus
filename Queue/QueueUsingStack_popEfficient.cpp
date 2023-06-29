#include<iostream>
#include<stack>
using namespace std;

// using pop efficient i.e. time complexity of pop is O(1).

class Queue{
public:
     stack<int> st;
     Queue(){};

    void push(int val){
        stack<int> temp;
        while(not st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(val);
        while(not temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    void pop(){
         st.pop();
    }

    bool isEmpty(){
          return st.empty();
    }

    int front(){
         if(st.empty()) return -1;
         return st.top();
    }
};

int main(){

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