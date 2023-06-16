#include <iostream>
#include <vector>
#include <set>
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

int findPoisonedDuration(vector<int>& timeSeries, int duration) {

    int result;
    set<int> count;

      for(int i=0;i<timeSeries.size();i++){

        count.insert(timeSeries[i]);
        count.insert(timeSeries[i]+duration-1);
          
      }

      result = count.size();
      return result;
        
    }

int main (){

   int m;
   cin>>m;
   int duration;
   cin>>duration;


   vector<int> timeSeries;

   timeSeries = InputVector(m);
   int result;

   result = findPoisonedDuration(timeSeries,duration);

   cout<<result<<endl;

}