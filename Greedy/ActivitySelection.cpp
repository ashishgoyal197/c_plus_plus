#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct activity
{
    int start;
    int end;
};

bool comparator(activity i1, activity i2){
    return i1.end < i2.end;
}

int maxActivity(vector<activity> &v){
    sort(v.begin(), v.end(), comparator);
    int count = 1;
    activity last = v[0];
    for(auto pair : v){
        if(pair.start > last.end){
            count++;
            last = pair;
        }
    }
    return count;
}


int main(){

    int n;
    cin>>n;
    vector<activity> v;
    for(int i=0 ; i<n ; i++){
        int s,e;
        cin>>s>>e;
        activity a;
        a.start = s;
        a.end = e;
        v.push_back(a);
    }

    cout<<maxActivity(v)<<endl;

    return 0;
}