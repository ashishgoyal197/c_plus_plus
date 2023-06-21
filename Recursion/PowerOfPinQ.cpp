#include<iostream>
using namespace std;

int Power(int p,int q){
   
   if(q==0){
       return 1;
   }
   
   int ans = p*Power(p,--q);
   return ans;
   

}

int main(){

    int p,q;
    cin>>p>>q;

    cout<<Power(p,q)<<endl;

    return 0;
}