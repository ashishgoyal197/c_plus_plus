#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;
    int find;
    cin>>find;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]==find){
            cout<<i<<endl;
            break;
        }
    }


    return 0;
}