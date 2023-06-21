#include<iostream>
using namespace std;

// Given a number n and a value k,print k multiples of n.
// 3,8 == 3,6,9,12,15,18,21,24.

void k_multipleOf_n(int idx,int n,int k){
    if(idx==k+1){
        return ;
    }

    cout<<n*idx<<"  ";
    k_multipleOf_n(++idx,n,k);
}

int main (){

    int n,k;
    cin>>n>>k;

    k_multipleOf_n(1,n,k);

    return 0;
}