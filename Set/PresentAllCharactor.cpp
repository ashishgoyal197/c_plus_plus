#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkAllCharactor(string s){

   if(s.length()<26){
      return false;
   }

   transform(s.begin(),s.end(),s.begin(),::tolower);

   set<char> alphabates;
   for(auto ch:s){
       alphabates.insert(ch);
   }

   return (alphabates.size()==26);

}

int main(){

    string input;
    cin>>input;

    if(checkAllCharactor(input)){
        cout<<"All Charactor Present."<<endl;
    }
    else{
        cout<<"All charactor not present."<<endl;
    }

    return 0;
}