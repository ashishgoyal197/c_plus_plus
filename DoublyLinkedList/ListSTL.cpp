#include<iostream>
#include<list>
using namespace std;

int main(){

    int n;
    cin>>n;

    list<int> l;

    for(int i=0 ; i<n ; i++){
        int ele;
        cin>>ele;
        l.push_back(ele);
    }
    
    // traversal for list.
    for(auto ele:l){
        cout<<ele<<" ";
    }cout<<endl;

    // another way for traversal

    for(auto itr = l.rbegin() ; itr != l.rend() ; itr++ ){
        cout<<*itr<<" ";
    }cout<<endl;

    auto itr = l.begin();
    cout<<*itr<<endl;
    
    // for move my iterator to n places.
    advance(itr,2);
    cout<<*itr<<endl;
    
    // Insertion
    auto itr2 = l.begin();
    advance(itr2 , 2);
    l.insert(itr2,10);
    
    // for add 6 twice .
    l.insert(itr2,2,6);


    for(auto ele:l){
        cout<<ele<<" ";
    }cout<<endl;

    // Deletion
    auto itr3 = l.begin();
    advance(itr3 , 6);
    l.erase(itr3);

    for(auto ele:l){
        cout<<ele<<" ";
    }cout<<endl;



    return 0;
}