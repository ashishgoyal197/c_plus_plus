#include <iostream>
#include <unordered_set>
using namespace std;


// Unorderd set = Using hashing 
//Time complexity = O(1);

int main (){

    unordered_set<int> s;

    // for insert a element.
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(20);

    // a key.
    int key = 15;

    // For find key.

    if(s.find(key)==s.end()){
        cout<<key<<" Not Found "<<endl;
    }

    else {
        cout<<key<<" Found "<<endl;

       // for print key.

        cout<< *(s.find(key))<<endl;
    }

    // use of count == it is subsitute of count function 
    // it will return 0 or 1.
    // In unorderd set value dont repeat
    // 

    if (s.count(key)){
        cout<<key<<" Found "<<endl;
    }

    else{
        cout<<"Not found"<<endl;
    }

    // Erase a element 

    cout<<s.size()<<" "<<endl;

    s.erase(10);

    cout<<s.size()<<" "<<endl;

    auto it = s.find(key);

    s.erase(it);
    cout<<s.size()<<" "<<endl;

    // For erase whole set.

    s.erase (s.begin(),s.end());
    cout<<s.size()<<" "<<endl;




    return 0;
}