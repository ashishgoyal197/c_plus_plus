#include<iostream>
#include<stack>
#include<queue>
using namespace std;

// here we reverse a queue with a help of stack.

int main(){

    // Inserting some value.
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    
    // make a temparary stack for reverse.
    stack<int> st;
    
    // push all value in stack.
    while(not qu.empty()){
        st.push(qu.front());
        qu.pop();
    }

    // again push all value in queue.
    while(not st.empty()){
        qu.push(st.top());
        st.pop();
    }
    
    // for output.
    while(not qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }cout<<endl;


    return 0;
}