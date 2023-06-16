#include <iostream>
#include <vector>
using namespace std;

vector<int> InputVector(int n)
{
    vector<int> input;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        input.push_back(ele);
    }

    return input;
}

 int minCostClimbingStairs(vector<int>& cost) {

      if(cost.size()==2){
        if (cost[0]<cost[1]){
            return cost[0];
        }
        else {
            return cost[1];
        }

      }
      if (cost.size()==1){
          return cost[0];
      }

      
      int start;

      if (cost[0]==0 && cost[1] != 0 && cost[2] != 0){
         if (cost[1]<cost[2]){
          start = 2;
      }
    //   else if(cost[1]<cost[2])
    //   {
    //     start = 1;
    //   }
    //   else {
    //       start = 2;
    //   }
        
      else {
        start=1;

        }
      }
      else {
      
      
      if (cost[1]<cost[2]){
          start = 1;
      }
      else if(cost[0]<cost[1])
      {
        start = 0;
      }
      else {
          start = 1;
      } 
  }
    
      int minCost = cost[start];

      while (start<cost.size()-2){

        if (cost[start+1]>=cost[start+2]){
            start += 2;
        }
        else {
            start += 1;
        }

        minCost += cost[start];
        if (start >= cost.size()-2){
            break;
        }
      }

      return minCost;
        
    }

int main (){

    int n;
    cin>>n;

    vector<int> cost;

    cost = InputVector(n);

    int result =  minCostClimbingStairs(cost);

    cout<<result<<endl;


    return 0;
}