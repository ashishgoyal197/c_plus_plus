#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int k=0;
   
        if(arr[0]==arr[1]){
            k++; 
        }
        if(arr[n-1]==arr[n-2]){
            k++;
        }
        
        for(int i=1;i<n-1;i++){
             if(arr[i]==arr[i-1] && arr[i]==arr[i+1]){
                k++;
             }
        }
       int ans = n-k;
       cout<<ans<<endl;

    return 0;
}