#include<iostream>
using namespace std;

// Sum of first natural number with alternate positive and negative sign.

int AlternativeSignNumber(int n){
    if(n==0){
        return 0 ;
    }
    int ans = AlternativeSignNumber(n-1) + ((n%2==0) ? (-n):(n));
    return ans;
}

int main (){

    int n;
    cin>>n;

   cout<<AlternativeSignNumber(n)<<endl;


    return 0;
}