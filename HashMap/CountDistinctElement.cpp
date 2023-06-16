#include <iostream>
#include <vector>
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
   
   int result = 1;
   bool flag = false;
    for (int i=1;i<element.size();i++){
        for(int j=0;j<i;j++){
            if (element[i]==element[j]){
                flag=false;
                break;
            }
            else{
                flag = true;
            }
        }
        if (flag == true ){
            result++;
        }
    }
    return result;

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