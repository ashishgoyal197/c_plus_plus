#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// In hashmap we using key-pair.

int main(){

    map<string,int> directory;

    // inserting some value.
    directory["Naman"] = 1234;
    directory["Aman"] = 8362;
    directory["Rajat"] = 8032;

    // for output.
    // for(auto element:directory){
    //     cout<<"Name- "<<element.first<<endl;
    //     cout<<"phone- "<<element.second<<endl;
    // }

    // traversing by iterator.
    map<string,int>::iterator itr;
    for(itr = directory.begin();itr!=directory.end();itr++){
        cout<<itr->first<<" - "<<itr->second<<endl;
    }



    return 0;
}