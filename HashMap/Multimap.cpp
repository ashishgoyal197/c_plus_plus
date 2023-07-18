#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// multimap allow duplicate key.

int main(){

    multimap<string,int> directory;

    directory.insert(make_pair("ajay",733556));
    directory.insert(make_pair("vijay",733556));
    directory.insert(make_pair("jay",733972));
    directory.insert(make_pair("jay",7949274));

    for(auto pair:directory){
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    return 0;
}