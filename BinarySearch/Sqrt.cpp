#include<iostream>
using namespace std;

int Sqrt(int n){
    int ans = -1;
    int s = 0;
    int e = n;

    while(s<=e){
        int mid = s + (e-s)/2 ;
        if(mid*mid <= n){
            ans = mid;
            s = mid+1;
        }
        else e = mid-1;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    cout<<Sqrt(n)<<endl;

    return 0;
}