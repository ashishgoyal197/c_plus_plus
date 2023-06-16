#include<iostream>
using namespace std;

int main (){

    int x,y;
    x=10;
    y=15;

    int *ptrx = &x;
    int *ptry = &y;

    int result;
    int *ptr_result = &result;

    *ptr_result = *ptrx + *ptry;

    cout<<result<<endl;


    return 0;
}