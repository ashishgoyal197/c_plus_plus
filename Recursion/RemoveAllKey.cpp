#include<iostream>
#include<string>
using namespace std;

string removeAllOccurranceOfKey(string word , int idx , char key){
    
    string result = "";
    if(idx == word.length()){
        return "";
    }
    if(word[idx] != key){
        result += word[idx];
    }
    result += removeAllOccurranceOfKey(word,++idx,key);
    return result;

    

}


int main(){

    string word;
    cin>>word;

    char key;
    cin>>key;

    string result;
    result = removeAllOccurranceOfKey(word,0,key);
    cout<<result<<endl;


    return 0;
}