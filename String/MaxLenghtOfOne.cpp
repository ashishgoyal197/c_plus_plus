#include<iostream>
#include<string>
using namespace std;

int MaxLength(string str,int k){

   int zero_count = 0;
   int max_lenght = 0;
   int s=0;
   int e=0;

   for(;e<str.length();e++){
       if(str[e]=='0'){
           zero_count++;
       }
       while(zero_count > k){
           if(str[s]=='0'){
               zero_count--;
               s++;
           }
           else if(str[e]=='0') {
               max_lenght = e-s+1;
               s=e-1;
               zero_count=0;
               
           }

       }
       max_lenght = max(max_lenght,e-s+1);
   }
    
   return max_lenght;
}

int main (){

    string str;
    cin>>str;
    int k;
    cin>>k;

    int max_length = MaxLength(str,k);

    cout<<max_length<<endl;

    return 0;
}