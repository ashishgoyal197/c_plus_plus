#include<iostream>
#include<stack>
using namespace std;

stack<int> reverseStack(stack<int> st){
    stack<int> result;
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        result.push(curr);
    }
    return result;
}

int main (){

  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);

  stack<int> result = reverseStack(st);

//   for output

while(not result.empty()){
    int curr = result.top();
    result.pop();
    cout<<curr<<endl;
}


return 0;

}