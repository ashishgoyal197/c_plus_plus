#include<iostream>
using namespace std;

void Swap(int *ptrx,int *ptry){
    int temp = *ptrx;
       *ptrx=*ptry;
       *ptry=temp;

}

int main(){

    int x,y;
    cin>>x>>y;

    int *ptrx = &x;
    int *ptry = &y;

    Swap(ptrx,ptry);

    cout<<x<<" "<<y<<endl;

    return 0;
}