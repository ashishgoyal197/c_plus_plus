#include <iostream>

using namespace std;

int main (){

    int n;
    cin>>n;

    int sum=0;
    
    int power = 1;
    int lastdigit;
    while (n>0){
        lastdigit = n%10;
        sum = sum+(lastdigit*power);  
        power *= 2;
        n=n/10;

    }

    cout<<sum<<endl;

    return 0;
}