#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {

    string result;
    int carry = 0;
    int i = a.size()-1;
    int j = b.size()-1;

    while(i>=0 || j>=0 || carry>0){
        int sum = carry;
        if(i>=0){
            sum += a[i]-'0';
            i--;
        }

        if(j>=0){
            sum += b[j]-'0';
            j--;
        }

        carry = sum/2;
        result += to_string(sum%2);

    }
    reverse(result.begin(),result.end());
    return result;
        
}

int main (){

    string num1,num2;
    cin>>num1>>num2;

    string ans  = addBinary(num1,num2);
    cout<<ans<<endl;
   
    return 0;
}