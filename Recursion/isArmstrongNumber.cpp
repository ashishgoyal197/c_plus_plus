#include<iostream>
using namespace std;

int Power(int p,int q){
   if(q==0){
       return 1;
   }
   int ans = p*Power(p,--q);
   return ans;
}

int isArmstrong(int n,int d){
    if(n==0) return 0;
    return Power(n%10,d) + isArmstrong(n/10,d) ;
}

int main (){

    int n;
    cin>>n;

    int numberOfDigit = 0;
    int temp = n;
    while(temp>0){
        temp = temp/10;
        numberOfDigit++;
    }

    int result = isArmstrong(n,numberOfDigit);

    if(result == n){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}