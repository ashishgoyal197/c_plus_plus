#include<bits/stdc++.h>
using namespace std;

int largetPoint(vector<int> v, int n, int k){

    priority_queue<int, vector<int>, greater<int>> pq;

    for(auto i:v){
        pq.push(i);
    }

    while(k--){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        pq.push(first*second);
    }

    while(pq.size()>1){
        pq.pop();
    }
    return pq.top();
}

int main(){

    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(auto &x : v){
        cin>>x;
    }

    cout<<largetPoint(v, n, k)<<endl;


    return 0;
}