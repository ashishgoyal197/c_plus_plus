#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> InputVector(int n){

    vector <int> Input;

    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        Input.push_back(ele);
    }

    return Input;
}

void FrequencyOfElement(vector<int> element){

    unordered_map<int,int> freq;

    for(int i=0;i<element.size();i++)
        freq[element[i]]++;
        
        // Use for print in unordered way.
        // for(auto x: freq)

        // cout<<x.first<<"  "<<x.second<<endl;

        // Use for print in orderd form.
        for (int i=0;i<element.size();i++){
            if(freq[element[i]] != -1){
                cout<<element[i]<<"  "<<freq[element[i]]<<endl;
                freq[element[i]] = -1;
            }
         }    

}


int main (){

    int n;
    cin>>n;

    vector <int> element;

    element = InputVector(n);

    FrequencyOfElement(element);

return 0;

}