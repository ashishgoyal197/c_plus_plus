#include <iostream>
#include<string>
#include<vector>
using namespace std;

// Anagram words = same letter with same freq. used in both words.

string CheckAnagram(string str1,string str2){

    string result = "Yes";
    vector<int> freq(26,0);

    for(int i=0;i<str1.length();i++){
        int index1 = str1[i]-'a';
        freq[index1]++;
    }
    for(int i=0;i<str2.length();i++){
        int index2 = str2[i]-'a';
        freq[index2]--;
    }
    for(int i=0;i<freq.size();i++){
        if(freq[i] != 0){
            result = "No";
            break;
        }
       
    }

    return result;

}

int main (){

    string str1,str2;
    cin>>str1>>str2;

    string result;

    result = CheckAnagram(str1,str2);

    cout <<result<<endl;


    return 0;
}