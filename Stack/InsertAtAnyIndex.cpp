#include<iostream>
#include<stack>
using namespace std;

stack<int> AddElement(stack<int> &input,int k,int n){
    stack<int> temp;
    while(input.size()>k){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    input.push(n);
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
return input;
    
}

int main (){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // now i need to add an element at Kth position.

    int k; // position.
    cin>>k;

    int n; // element.
    cin>>n;

    stack<int> result = AddElement(st,k,n);

    while(not result.empty()){
        int curr = result.top();
        result.pop();
        cout<<curr<<endl;
    }



    return 0;
}