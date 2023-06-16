#include <iostream>

using namespace std;

int main () {

    int n;
    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=0;
    int k=1;
    int test=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+k]){
           test=arr[i];
        }
        else{
            test=arr[i+k];
        }

        if(test>max){
            max=test;
        }


    }

    cout<<max<<endl;

    


    return 0;
}