#include <iostream>
#include <vector>
using namespace std;

//Find the last occurence of a given element x in array.

int main(){

   vector <int> v;

  // int n;
  // cin>>n;

   int x;
   cin>>x;

   for(int i=0;i<v.size();i++){
      int element;
      cin>>element;
      v.push_back(element);
   }
     //for count number of occurence 
     int m=0;
     int k;
     int o=0;
   for (int i=0;i<v.size();i++){
       if(v[i]==x){
        k=i;
        m++; 
       }

     //for count number element greater than x
     else if(v[i]>x){
        o++;
     }

   }

   cout<<k<<endl;
   cout<<m<<endl;
   cout<<o<<endl;



    return 0;
}