#include <iostream>
using namespace std;

//Find the total number of pair in the whose sum is equal to the given value of x; 

int main (){

    int n;
    cin>>n;

    int x;
    cin>>x;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==x-arr[j]){
                k++;
            }
        }
    }

    cout<<k<<endl;



    return 0;
}