#include<iostream>
using namespace std;

// there are N stones , given an array of heights initialy frog at stone 1 and wanna reach end
// means stone N then find min cost of reach stone N where frog can jump i+1 or i+2.
// cost is abs(h[i]-h[j])
// e.g. = 10 30 40 20 
// output = 30

int f(int *h,int n,int i){
    if(i==n-1) return 0;
    if(i==n-2) return f(h,n,i+1) + abs(h[i]-h[i+1]);

    return min(f(h,n,i+1)+abs(h[i]-h[i+1]),f(h,n,i+2)+abs(h[i]-h[i+2]));
}

int main (){

    int n;
    cin>>n;

    int h[n];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    cout<<f(h,n,0)<<endl;

    return 0;
}