#include<iostream>
#include<vector>
#include<string>
using namespace std;

//  A charactor map with only one charactor.
// egg -> add
// e -> a
// g -> d  isomorphic.
// egg -> age  Not Isomorphic. 

bool IsIsomorphic(string str1,string str2){
   
    vector<int > v1(128,-1);
    vector<int > v2(128,-1);

    if(str1.length() != str2.length()){
        return false;
    }

    for(int i=0;i<str1.length();i++){
        int index1 = str1[i];
        int index2 = str2[i];

        if(v1[index1]==v2[index2]){

            v1[index1] = i;
            v2[index2] = i;
           

        }
        else{
           return false;
           
        }
    }
    return true;
}

int main (){

    string str1,str2;
    cin>>str1>>str2;

    if (IsIsomorphic(str1,str2)){
        cout<<"Is Isomorphic"<<endl;
    }
    else {
        cout<<"Is not Isomorphic"<<endl;
    }
    return 0;
}