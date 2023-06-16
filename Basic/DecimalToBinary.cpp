#include <iostream>

using namespace std;

int main (){

    int n;
    cin>>n;
    
    int digit;
    int ans=0;
    int power =1;
    while (n>0){
         digit = n%2;
         ans = ans+digit*power; 
         n=n/2;
         power =power*10;

    }

    cout<<ans;


    return 0;
}