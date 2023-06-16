#include <iostream>
using namespace std;

int BinSearch(int arr[],int key){

     int s=0;
     int e=7;

   while(s<=e){
   //   int mid= (s+e)/2;
     int mid = s + (e-s)/2;
     if(arr[mid]==key){
        return mid;
     }

     else if(arr[mid]>key){
        e=mid-1;
     }

     else {
        s=mid+1;
     }
   }

    return -1;
}

int main(){

   //  int n;
   //  cin>>n;
     int key;
    cin>>key;

    int arr[7] = {1,2,3,4,5,6,7};

   

   //  for(int i=0;i<n;i++){
   //      cin>>arr[i];
   //  }



    cout<<BinSearch(arr,key)<<endl;
    



    return 0;
}