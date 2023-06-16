#include <iostream>
#include <vector>
using namespace std;

// Q1. Given an integer array and two integers L and R. Find the sum of elements between the
// index L and index R.
// Note: Both L and R inclusive.

// Input: n=size of vector  [1,2,3,4,5] L=1 R=3
// Output: 9
// Explanation: 2+3+4=9
// Input: n=size of vector [1,2,3,4,5] L=2 R=2
// Output: 3
// Explanation: 3


int main (){

    vector <int> v;

    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        int element ;
        cin>>element;
        v.push_back(element); 
    }

    int l; cin>>l;
    int r; cin>>r;

    int sum =0;
    for (int i=l;i<=r;i++){
        sum += v[i];
    }

    cout << sum ;




    return 0;
}