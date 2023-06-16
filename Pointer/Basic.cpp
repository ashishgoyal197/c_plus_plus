#include<iostream>
using namespace std;

int main (){

    int x=10;

    // Declare pointer for store memory location of x.
    // For int we need to declare int ptr.

    int *ptr = &x;

    cout<<ptr<<endl;
    
    // Derefrence pointer
    // Change value of x then *ptr also change.
    // or change value of *ptr .value of x change.
    // *ptr give value of pointed adress 
    // ptr give address

    x = 15;
    cout<<*ptr<<endl;

    *ptr = 20;
    cout<<x<<endl;

    // Pointer arithmetic

    // if we do addition in ptr then new address bucket will produce next to current bucket.
    // address of new bucket is [ address of current bucket + added number(sizeof(veriable))].

    cout<<"Size of x : "<<sizeof(x)<<endl;

    cout<<ptr<<"  "<<(ptr+1)<<" "<<(ptr+2)<<endl;

    // Access element of array by pointer.

    int arr[] = {10,20,30,40};
    int n = 4;

    int *ptr1 = &arr[0];

    // ptr +1 is the address of arr[1];

    cout<<*ptr1<<" "<<*(ptr1+1)<<endl;

    // *ptr++ = first give address of ptr than increament by 1 then derefrence.

    cout<<*ptr1++<<endl;
    cout<<*ptr1<<endl;

    // (*ptr)++ = first give value of element than increase value by 1;

    cout<<(*ptr1)++<<endl;
    cout<<*ptr1<<endl;

    // *++ptr = first increase address than derefrence

    cout<<*++ptr1<<endl;
   
   // ++(*ptr) = give increse value l

   cout<<++(*ptr1)<<endl; 

     // Array as Pointers
    //  name of array is point as address of first element.
    
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }cout<<endl; 





    return 0;
}