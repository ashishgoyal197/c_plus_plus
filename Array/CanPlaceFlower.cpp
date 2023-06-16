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

 bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    bool result = false;
    int count = 0;

    if (flowerbed.size()==1 ){
        if(flowerbed[0]==0){
        count = 1;
        }
    }
    
    else {

        
        if(flowerbed[0]==0 && flowerbed[1]==0){
            count++;
            flowerbed[0]=1;
        }

        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    count++;
                    flowerbed[i]=1;
                }
            }
        }

        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
            count++;
            flowerbed[flowerbed.size()-1]=1;
        }

    }

    if (count>=n){
        result = true;
    }
    else {
        result = false;
    }

    return result;

 }

int main (){

   int m;
   cin>>m;
   int n;
   cin>>n;


   vector<int> flowerbed;

   flowerbed = InputVector(m);

  

   bool result = false;


   result = canPlaceFlowers(flowerbed,n);

   cout<<result<<endl;

}