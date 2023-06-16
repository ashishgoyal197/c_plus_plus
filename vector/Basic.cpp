#include <iostream>
#include <vector>
using namespace std ;

int main (){

    //initializing vector
    vector <int> v;

    //taking size
    int n;
    cin>>n;

    //taking input Element
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    cout<<"size: "<<v.size()<<endl;
    cout<<"capecity: "<<v.capacity()<<endl;

    for (int i=0;i<n;i++){
        cout << v[i]<<" ";
    }
    cout << endl ;

    //add element at second position 
    v.insert (v.begin()+2,6);

    for (int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl ;

    //delete element
    v.erase (v.begin()+3);
    for (int i=0;i<v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl ;


    return 0;
}


