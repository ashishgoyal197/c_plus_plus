#include<iostream>
using namespace std;

int main (){

    int arr[5]={4,3,5,1,2};

    for (int i=0;i<4;i++){
        int min  = arr[i];
        int min_index = i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<min){
                min = arr[j];
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] =temp;

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

   

    return 0;
}