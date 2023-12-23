#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(unordered_map<int,int> mp){

    int count = 0;
    for(int i=0 ; i<= 9 ; i++){
        if(mp.count(mp[i])){
            if(mp[i]%2 != 0) count++;
            if(count > 1) return false;
        }
    }
    return true;
}

string LargestPalindrome(string num){
    
    unordered_map<int, int> mp;
    for(int i=0 ; i<num.size() ; i++){
        mp[num[i] - '0']++;
    }

    if(!isPalindrome(mp)) return "Not Possible.";
    int l = num.length();
    vector<char> v(l);
    int front = 0;
    for(int i=9 ; i>=0 ; i--){
        if(mp[i]%2 != 0){
            v[l/2] = char(i+48);
            mp[i]--;
        }

        while(mp[i]>0){
            v[front] = char(i+48);
            v[l - front - 1] = char(i+48);
            mp[i] -= 2;
            front++;
        }
    }
    string result = "";
    for(int i=0 ; i<v.size() ; i++) result += v[i];
    return result;
}

int main(){

    string num;
    cin>>num;

    cout<<LargestPalindrome(num)<<endl;


    return 0;
}