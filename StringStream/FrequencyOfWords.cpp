#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void frequencyOfWord(string str){

    unordered_map<string,int> freq;

    stringstream ss(str);
    string word;
    while(ss >> word){

        freq[word]++;
    }

    for(auto pair:freq){
        cout<<pair.first<<" -> "<<pair.second<<endl;
    }

}
 
int main(){
 
    string str;
    getline(cin,str);

    frequencyOfWord(str);
 
    return 0;
}