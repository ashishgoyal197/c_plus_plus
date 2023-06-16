#include<iostream>
#include<vector>
#include<string>
using namespace std;

string CountFreq(string str){

     string result;
     vector<int> freq(26,0);

     for(int i=0;i<str.length();i++){
        int index = str[i]-'a';
        freq[index]++;

     }

     for(int i=0;i<freq.size();i++){
           while(freq[i]>0){
                 char ch = i +'a';
                 result.push_back(ch);
                 freq[i]--;
           }
     }

     return result;

}

int main (){

    string str;
    cin>>str;

    string result ;

    result = CountFreq(str);

    cout<<result<<endl;


    return 0;
}