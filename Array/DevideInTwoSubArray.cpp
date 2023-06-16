#include <iostream>
using namespace std;

// Devide in two Sub Array Of Equal Sum.

int main (){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum1=0;
    int sum2=0;
    for (int i=0;i<n;i++){
        
        if (i==n-1){
            cout<<"Devision is not possible"<<endl;
            break;
        }
          sum1 += arr[i];
        
        for(int j=i+1;j<n;j++){
          sum2 += arr[j];
        }
       
       if (sum1==sum2){
          for (int k=0;k<=i;k++){
            cout<<arr[k]<<" ";
          }
          cout<<endl;
           for (int k=i+1;k<n;k++){
            cout<<arr[k]<<" ";
          }
          break;
       } 
       sum2=0;   
    }


    return 0;
}