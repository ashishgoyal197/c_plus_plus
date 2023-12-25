#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Given start and end time of meeting. we have to sedule meeting in one room. we have to sedule 
// max number of meeting.
// print index of seduled meeting.

struct meeting{
    int start;
    int end;
    int idx;
};

bool comparator(meeting m1, meeting m2){
    return m1.end < m2.end;
}

void maxNumberOfMeeting(vector<meeting> &v){
    sort(v.begin(), v.end(), comparator);
    cout<<v[0].idx<<" ";
    meeting last = v[0];
    for(int i=1 ; i<v.size() ; i++){
        if(v[i].start > last.end){
            cout<<v[i].idx<<" ";
            last = v[i];
        }
    }
}

int main(){

    int n;
    cin>>n;
    vector<meeting> v;
    for(int i=0 ; i<n ; i++){
        int s,e;
        cin>>s>>e;
        meeting m;
        m.idx = i+1;
        m.start = s;
        m.end = e;
        v.push_back(m);
    }
    maxNumberOfMeeting(v);

    return 0;
}