#include<bits/stdc++.h>
using namespace std;

struct Item{

    int value;
    int weight;
};

bool comparator(Item i1, Item i2){

    // findind value and weight ratio.
    double v_w_i1 = static_cast<double>(i1.value)/i1.weight;
    double v_w_i2 = static_cast<double>(i2.value)/i2.weight;

    return v_w_i1 > v_w_i2;

}

double fractionalKnapsack(vector<Item> &items, int w){
    double ans = 0;
    sort(items.begin(), items.end(), comparator);
    for(auto item:items){
        if(item.weight <= w){
            ans += item.value;
            w -= item.weight;
        }
        else{
            double fraction = static_cast<double>(w)/item.weight;
            ans += fraction*item.value;
            w = 0;
        }
    }
    return ans;
    
}



int main(){

    int n,w;
    cin>>n>>w;

    vector<Item> items;

    for(int i=0 ; i<n ; i++){
        int x,y;
        cin>>x>>y;
        Item it;
        it.value = x;
        it.weight = y;
        items.push_back(it);
    }
    cout<<fractionalKnapsack(items, w)<<endl;

    return 0;
}