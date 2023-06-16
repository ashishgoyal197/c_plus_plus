#include <iostream>

using namespace std;

int main () {

    int n;
    cin>>n;
    int x;
    cin>>x;
    int ans = -1;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for (int i=0;i<n;i++){

        if(arr[i]==x){
            ans=i;
           break ;
        
           
        }
    }

    cout<<ans;
     

 
    




return 0;
    
}