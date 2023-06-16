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

 int minPricesLocation(vector<int> prices)
 {
     int min = prices[0];
     int minLocation = 0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]<min){
            min = prices[i];
            minLocation=i;
        }
    }

    return minLocation;

 }

 int maxProfit(vector<int>& prices) {

   int  minLocation = minPricesLocation(prices);
   int min = prices[minLocation];
     
    for(int i=0;i<prices.size();i++){
       if(prices.size()==1){
        return 0;

       }
      
       else if(minLocation==prices.size()-1 ){
        prices.pop_back();
        prices.resize(prices.size()-1);

        int  minLocation = minPricesLocation(prices);
        int min = prices[minLocation];
        // i--;
    }
   
 
 }
   
    int max = prices[minLocation+1];
    int maxLocation = minLocation +1;
    for(int i=minLocation+1;i<prices.size();i++){
        if(prices[i]>max){
            max=prices[i];
        }
    }

    return max-min;
  
     }    
  

int main (){

    int n;
    cin>>n;

    vector<int> prices;

    prices = InputVector(n);

    int profit;
    profit= maxProfit(prices);

    cout<<profit<<endl;

    


    return 0;
}