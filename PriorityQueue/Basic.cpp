#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int> pq; // maxHeap

    pq.push(4);
    pq.push(7);
    pq.push(3);
    pq.push(10);
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }cout<<endl;

    priority_queue<int, vector<int>, greater<int>> pq2; // minHeap.

    pq2.push(4);
    pq2.push(7);
    pq2.push(3);
    pq2.push(10);
    
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }cout<<endl;

    return 0;
}