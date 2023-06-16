#include <iostream>
#include <climits>
#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin>>n;
    int k;
    cin>>k;
   
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             int tamp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = tamp;
    //         }
    //     }
    // }
    sort(arr,arr+n);
    
    int sum1=0;
    int sum2=0;
    for(int i=0;i<k;i++){
        sum1 += arr[i];
    }

    for(int i=k;i<n;i++){
        sum2 +=arr[i];
    }

    int ans;
    if(sum2>=sum1){
    ans = sum2-sum1;
}
    else{
        ans = sum1-sum2;
    }
    cout<<ans<<endl;

    return 0;
}