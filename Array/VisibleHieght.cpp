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
 vector<int> canSeePersonsCount(vector<int>& heights) {
   
        //   vector<int> result;
          int k=1;
      
      for (int i=0;i<heights.size()-1;i++){
         if(heights[i]<=heights[i+1]){
                  heights[i]=1;
                  continue;
                   
               }
               int minLocation = i+1;
          for(int j=i+2;j<heights.size();j++){
              
              if( heights[j]<heights[i]){
              
                if (heights[j]>heights[minLocation] ){
                   k++;
                   minLocation = j;
                     
               }
               else {
                   continue;
               }
             
          }
               else {
                  k++;
                  break;
               }
                
               }
           heights[i]=k;
               k=1;
      }
      heights[heights.size()-1]=0;
      return heights;
      }
        
    

int main()
{

    int n;
    cin >> n;
   

    vector<int> heights;

    heights = InputVector(n);

    vector<int> result1;
    result1 = canSeePersonsCount(heights);

    for (int i=0;i<result1.size();i++){
        cout<<result1[i]<<" ";
    }


   return 0;
}