#include<iostream>
#include<string>
using namespace std;

// Find the First and last Index of occurance of ch.

void findIndex(string s,char ch,int *first,int *last){

    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if (s[i]==ch){
            *last = i;
            break;
       }
    }

}

int main (){

    string s = "aaabcdae";
    char ch = 'a';

    int first = -1;
    int last = -1;

    // Define pointer for first and last;
    int *pf = &first;
    int *pl = &last;

    findIndex(s,ch,pf,pl);

    cout<<first<<" "<<last;



    return 0;
}