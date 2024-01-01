#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Board length m and n is given. we have to break this board into m*n number of square.
// two vector x and y is given.
// x has cost for vertical cut. and y has cost for horizontal cut.
// return min cost.

static bool comparator(int x, int y){
    return x>y;
}

int minCostToBreakGrid(int n, int m, vector<int> &x, vector<int> &y){

    sort(x.begin(), x.end(), comparator);
    sort(y.begin(), y.end(), comparator);

    int hz = 1;
    int vr = 1;
    int i = 0; // for traverse x vector.
    int j = 0; // for traverse y vector.
    int ans = 0;

    while(i < x.size() && j < y.size()){
        if(x[i] >= y[j]){
            ans += x[i]*hz;
            vr++;
            i++;
        }
        else{
            ans += y[j]*vr;
            hz++;
            j++;
        }
    }
    while(i<x.size()){
        ans += x[i]*hz;
        vr++;
        i++;
    }
    while(j<y.size()){
        ans += y[j]*vr;
        hz++;
        j++;
    }
    return ans;
}


int main(){

    int n,m;
    cin>>m>>n;
    
    vector<int> x;
    for(int i=0 ; i<m-1 ; i++){
        int ele;
        cin>>ele;
        x.push_back(ele);
    }

    vector<int> y;
    for(int i=0 ; i<n-1 ; i++){
        int ele;
        cin>>ele;
        y.push_back(ele);
    }

    cout<<minCostToBreakGrid(n,m,x,y)<<endl;

    return 0;
}