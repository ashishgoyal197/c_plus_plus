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
     
     int osum=0;
     int esum=0;
     
     for(int i=0;i<n;i++){
        if(i%2==0){
            esum += v[i];
        }
        else{
            osum += v[i];
        }
     }

     int difference = osum-esum;
     cout<<difference<<endl;



    return 0;
}