#include<iostream>
using namespace std;

// solve this problem by Euclids algorithms.
// Euclids algo. = if we substract lower number from higher number than HCF will not change.
// or instead of substraction we can use mudulo. e.g. => hcf(72,54) = hcf(54,72%54).
// e.g. => hcf(a,b) = hcf(b,a%b). here - a>b 

int HCF(int a,int b){
    if(b==0){
        return a;
    }

    int ans = HCF(b,a%b);
    return ans;

}

int main (){

    int a,b;
    cin>>a>>b;

    if (a>=b){
        cout<<HCF(a,b)<<endl;
    }
    else{
        cout<<HCF(b,a)<<endl;
    }

    return 0;
}