#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countWord(string str){

    int count = 0;

    stringstream s(str); // used for breaking word.

    string word; // to store individual word.

    while(s >> word){
        count++;  
    }
    return count;

}  

int main(){

    string str;
    getline(cin,str);

    cout<<"Number of words is : "<<countWord(str)<<endl;

    return 0;
}