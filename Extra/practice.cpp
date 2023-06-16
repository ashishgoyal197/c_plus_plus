#include <iostream>
using namespace std;

int main (){
 
   int n;
   cin>>n;

   string arr[n];

   for(int i=0;i<n;i++){
      cin>>arr[i];

   }

   int ans1=0;
   int ans2=0;

   for(int i=0;i<n;i++){
       if(arr[i]=="START38"){
        ans1++;
       }

       else {
        ans2++;
          
       }
   }

   cout<<ans1<<" "<<ans2<<endl;
   

//START38 LTIME108 START38


    return 0;
}