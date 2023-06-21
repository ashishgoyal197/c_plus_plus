#include<iostream>
using namespace std;

// Given a number n, print sequence from 1 to n.

void printSequence(int idx,int n){
    if(idx==n+1){
        return ;
    }
    cout<<idx<<" ";
    printSequence(++idx,n);
}

int main(){

    int n;
    cin>>n;

    printSequence(1,n);

    return 0;
}