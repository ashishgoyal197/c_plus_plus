#include<iostream>
#include<set>
using namespace std;

int main(){

    // Define a set.
    // In ordered(increasing) manners.
    set<int> set1;

    // For Decreasing order.
    set<int,greater<int>> set2;

    // For taking Input .
    set1.insert(5);
    set1.insert(4);
    set1.insert(9);
    set1.insert(2);

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     set1.insert(ele);
    // }

    set2.insert(5);
    set2.insert(4);
    set2.insert(9);
    set2.insert(2);
    set2.insert(11);

    // For Output.
    // set is not indexing so ,
    // we need to define a iterator.
    // For define iterator.here we need a iterator for set <int> so,

    set<int>::iterator itr;

    // now
   
    for (itr = set1.begin();itr !=set1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    // Or we can use 
    
    for(auto value:set2){
        cout<<value<<" ";
    }
     
    cout<<endl;
    
    // For delete a element .
    // 1. By value
    set1.erase(2);

    // 2. By Position 
    auto itr1 = set1.begin();
    // Increase itr by two positions.
    advance (itr1,2);
    set1.erase(itr1);

    // 2. For erase range of elements.

    auto start = set2.begin();
    auto end =set2.end();
    start++;
    end--;

    set2.erase(start,end);

    for (itr = set1.begin();itr !=set1.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    // Or we can use 
    
    for(auto value:set2){
        cout<<value<<" ";
    }
     
    cout<<endl;

    set2.insert(5);
    set2.insert(4);
    set2.insert(9);

    set1.insert(9);
    set1.insert(2);

    // For find a element 
    if(set1.find(15) != set1.end()){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    // For no. of occurance

    cout<<set2.count(4)<<endl;

    // Lower Bound - return element if present else return just greater element
    // Upper Bound - return next greater element 
    
    auto lower_bound =  set1.lower_bound(3);
    cout<< *lower_bound<<endl;

    auto upper_bound = set1.upper_bound(5);
    cout<<*upper_bound<<endl;

     // assigning the elements from set1 to set3.
    set<int> set3(set1.begin(), set1.end());

    for(auto value:set3){
        cout<<value<<" ";
    }
    cout<<endl;

    // remove all elements up to 5 in set3.

    set3.erase(set3.begin(),set3.find(5));
     for(auto value:set3){
        cout<<value<<" ";
    }
    cout<<endl;


    return 0;
}