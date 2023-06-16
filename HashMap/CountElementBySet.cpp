#include <iostream>
#include <vector>
#include <unordered_set>
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

int CountDistinctElement(vector<int> element){

    unordered_set<int> ele;
    for(int i=0;i<element.size();i++){
        ele.insert(element[i]);
    }

    return ele.size();

}

int main (){

    int n;
    cin>>n;

    vector <int> element;

    element = InputVector(n);

    int result ;

    result = CountDistinctElement(element);

    cout<<result<<endl;

    return 0;
}