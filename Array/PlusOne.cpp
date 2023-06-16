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

 vector<int> plusOne(vector<int>& digits) {

      if(digits[digits.size()-1]==9){
           int check=0;
           for(int i=0;i<digits.size();i++){
               if(digits[i]==9){
                   check++;   
                }
           }

           if(check==digits.size()){
                for(int i=0;i<digits.size();i++){
                    digits[i]=0;
                }
                digits.insert(digits.begin(),1);
           }
           else{
               for(int i=digits.size()-1;i>=0;i--){
                  if(digits[i]==9){
                     digits[i]=0;
                  }
                  else{
                     digits[i]++;
                     break;
                  }
                   
               }
           }
        
      }
      else{
         digits[digits.size()-1]++;
      }
      return digits;

    }
   

int main (){

    int n;
    cin>>n;

    vector<int> digits;

    digits = InputVector(n);

    vector<int> result;

    result = plusOne(digits);

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }




    return 0;
}