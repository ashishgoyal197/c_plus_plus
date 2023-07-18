#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hashing{
public:
    // making a vector of list for store value in hashtable.
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    // for hashvalue function.
    int hashvalue(int key){
        return key%buckets; // devision method.
    }

    // for add element.
    int add(int key){
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    // for search element . return position of element.
    list<int>::iterator searchKey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    // for delete an element.

    void deleteKey(int key){
        int idx = hashvalue(key);
        if(searchKey(key) != hashtable[idx].end()){ // key is present
            hashtable[idx].erase(searchKey(key));
            cout<<key<<" is deleted."<<endl;
        }
        else{
            cout<<"key is not present inside hashtable."<<endl;
        } 
        
    }



};

int main(){

    Hashing h(10);

    h.add(5);
    h.add(2);
    h.add(6);
    h.add(1);

    h.deleteKey(2);
    h.deleteKey(2);
  




    return 0;
}