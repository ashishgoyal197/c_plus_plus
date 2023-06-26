#include<iostream>
#include<stack>
using namespace std;

stack<int> CopyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> result = CopyStack(st);

    // for output
    while(not result.empty()){
        int curr = result.top();
        result.pop();
        cout<<curr<<endl;
    }

    return 0;
}