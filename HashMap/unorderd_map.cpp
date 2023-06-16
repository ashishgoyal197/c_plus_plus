#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main (){

    unordered_map<string, double> umap;

     // inserting values by using [] operator
  umap["PI"] = 3.14;
  umap["root2"] = 1.414;
  umap["root3"] = 1.732;
  umap["log10"] = 2.302;
  umap["loge"] = 1.0;
  umap.insert({"November",29});

 

  // find a element.

  string key = "PI";
  if(umap.find(key)==umap.end()){
    cout<<"Not Found"<<endl;
  }

  else {
    cout<<"Found"<<endl;
  }
  // For print all element.
  // Need to defind a iterator.
   // itr->first stores the key part and
   // itr->second stores the value part

  unordered_map<string,double>::iterator itr;

  for(itr=umap.begin(); itr != umap.end(); itr++){

    cout<<itr -> first<<" "<<itr->second<<endl;
  }

  // size and erase 

  cout << umap.size()<<endl;
  umap.erase("root2");

   cout << umap.size()<<endl;
   


  return 0;
}


