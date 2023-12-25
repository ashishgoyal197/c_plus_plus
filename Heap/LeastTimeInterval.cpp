#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// find least time interval for complete all given task. 
// Input: a task vector and a int n, n is time break for repeat a particular task.

int LeastInterval(vector<char> task, int n){

    //1. count frequency
    unordered_map<char, int> mp;
    for(auto t : task){
        mp[t]++;
    }

    //2. push frequency in max heap
    priority_queue<int> pq;
    for(auto pair : mp){
        pq.push(pair.second);
    }
    int totalTime = 0;
    while(!pq.empty()){

        vector<int> temp;
        for(int i=0 ; i<=n ; i++){
            if(!pq.empty()){
                int freq = pq.top();
                pq.pop();

                if(freq > 1) temp.push_back(freq-1);

            }
            totalTime++;
            if(pq.empty() && temp.empty()) return totalTime;    
        }

        for(auto t : temp){
            pq.push(t);
        }
    }
    return totalTime;
}

int main(){

    vector<char> task = {'A','A','A','B','B','B'};
    int cooldown = 2;

    int leastTime = LeastInterval(task, cooldown);
    cout<<leastTime<<endl;

    return 0;
}