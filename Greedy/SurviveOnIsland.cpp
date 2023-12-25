#include<bits/stdc++.h>
using namespace std;

// Ishika got stuck on an island. There is only one shop on this island and it is open on all days 
// of the week except for Sunday. Consider following constraints:

//N – The maximum unit of food you can buy each day.
//S – Number of days you are required to survive.
//M – Unit of food required each day to survive.

//Currently, it’s Monday, and she needs to survive for the next S days.
//Find the minimum number of days on which you need to buy food from the shop so that 
//she can survive the next S days, or determine that it isn’t possible to survive.

int SurviveOnIsland(int N, int S, int M){

    int requiredfood = S*M;
    int maxFoodCanBuy = (S - S/7)*N;
        
    if(maxFoodCanBuy < requiredfood) return -1;
        
    return ceil(float(S*M)/float(N));

}

int main(){

    int n,s,m;
    cin>>n>>s>>m;

    cout<<SurviveOnIsland(n,s,m)<<endl;


    return 0;
}