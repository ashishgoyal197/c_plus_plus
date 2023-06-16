#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

    // int a;
    // cin>>a;

    // for (int i=0;i<a;i++){

    int n;
    cin>>n;

    int arr1[n];
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }

   
    int arr2[n];
    for (int i=0;i<n;i++){
        cin>>arr2[i];
    }

   

    for (int i=0,j=0;i<n;i++,j++){

        if (arr1[i]>arr2[j]){
            int temp = arr1[i];
            arr1[i]=arr2[j];
            arr2[j]=temp;
        }
        else {
            break;
        }

    }

    int sum =0;
    for (int i=0;i<n;i++){
        sum += arr2[i];
    }

    cout << sum <<endl;  
    // }
   
    return 0;
}