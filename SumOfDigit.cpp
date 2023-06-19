#include<iostream>
using namespace std;

// Given a Number ..find the sum all digit in number.

int SumOfDigit(int n){
    if(n==0){
        return 0;
    }
    int sum = n%10 + SumOfDigit(n/10);
    return sum;
}

int main (){

    int n;
    cin>>n;

    cout<<SumOfDigit(n)<<endl;

    return 0;
}