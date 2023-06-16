#include <iostream>

using namespace std;

int sum(int x,int y){
     
     int c=x+y;


    return c;
}



int main (){

    int a;
    cin>>a;

    int b;
    cin>>b;

    int ans=sum(a,b);
 
    cout<<ans<<endl;

    return 0;
}