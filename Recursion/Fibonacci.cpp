#include<iostream>
using namespace std;

int nthFibonacci(int n){
    if(n==0 || n==1){
        return n;
    }

    return nthFibonacci(n-1)+nthFibonacci(n-2);
}

int main(){

    int n;
    cin>>n;

    int result = nthFibonacci(n);
    cout<<result<<endl;

    return 0;
}