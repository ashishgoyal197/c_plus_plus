#include<iostream>
#include<string>
#include<vector>
using namespace std;

void Subsequence(string &s , int i , int n ,string str, vector<string> &result){

    if(i==n){
        result.push_back(str);
        return ;
    }

    Subsequence(s,i+1,n,str+s[i],result);
    Subsequence(s,i+1,n,str,result);


}

int main(){

    string s;
    cin>>s;
    
    vector<string> result;
    string str = "";
    Subsequence(s,0,s.length(),str, result);
    for(int i=0 ; i<result.size() ; i++){
        cout<<result[i]<<" ";
    }cout<<endl;


    return 0;
}