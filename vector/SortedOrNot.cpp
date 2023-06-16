#include <iostream>
#include <vector>
using namespace std;

int main (){
    
    int n;
    cin>>n;
    vector <int> v;

    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
    bool flag=true;
    for(int i=0;i<n-2;i++){
        if(v[i]<v[i+1] && v[i+1]>v[i+2]){
            flag=false;
            break;
        }
    }
    cout<<flag<<endl;

    

    return 0;
}