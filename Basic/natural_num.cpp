#include <iostream>

using namespace std;

int main(){

  int n;
  cin>>n;

  int sum;
  sum=0;

  int i;
  i=2;

  do {

    sum += i;
    i++;

  } while (i<n);
    
   cout<<sum<<endl;


    return 0;
}