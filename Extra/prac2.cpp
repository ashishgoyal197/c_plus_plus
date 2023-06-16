#include <iostream>
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
    int max=0;
    int sum =0;
    for(int i=0;i<n-k+1;i++){
           for(int j=i;j<k+i;j++){
                sum += arr[j];
           }

           if(sum>max){
               max=sum;
           }
       sum=0;
    }
   cout<<max<<endl;
    return 0;
}