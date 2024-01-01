#include<bits/stdc++.h>
using namespace std;

// Given two number s and d.
// construct smallest number. where s is sum of digit and d is number of digit.

vector<int> constructSmallestNumber(int s, int d){

    vector<int> v(d,0); 
    int i = d-1;
    while(s>9){
        v[i] = 9;
        i--;
        s -= 9;
    }
    if(i==0) v[i] = s;
    else{
        v[i] = s-1;
        v[0] = 1;
    }
    return v;
}

int main(){
    
    int s,d;
    cin>>s>>d;

    if(9*d < s) cout<<-1<<endl;
    else {
        vector<int> v = constructSmallestNumber(s,d);
        for(int i=0 ; i<d ; i++){
        cout<<v[i];
        }cout<<endl;
    }
 
    return 0;
}