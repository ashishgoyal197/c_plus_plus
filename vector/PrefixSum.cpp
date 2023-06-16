#include <iostream>
#include <vector>
using namespace std;

int main (){
    
    int n;
    cin>>n;
    vector<int>v;
  
    for (int i=0;i<n;i++){
      int element;
      cin>>element;
      v.push_back(element);
    }
    
    int sum=0;
    for (int i=0;i<n;i++){
        sum += v[i];
        cout<<sum<<" ";
    }

    return 0;
}