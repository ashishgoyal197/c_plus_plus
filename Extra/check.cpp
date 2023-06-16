#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

   int n; cin>>n;

   int arr[n];
   for (int i=0;i<n;i++){
	  cin>>arr[i];
   } 

    int k=0;
	for (int i=0;i<n;i++){
		if(arr[i]==0){
			k++;
		}
	}

	for (int i=0;i<k;i++){
		cout<<"0"<<" ";
	}

	for (int i=k;i<n;i++){
		cout<<"1"<<" ";
	}

	


	return 0;
}
