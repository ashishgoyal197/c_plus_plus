#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    
	int k=0;
    int m=0;

	while (m<n){
    for (int i=0;i<n;i++){
		int check = arr[i]-arr[i+1];
		if (check<2){
			k++;
		}
		else {
			 m=i;
			break;
		}
	}

	for (int i=m+1;m<n;i++){
		int check = arr[i]-arr[i+1];
		if (check<2){
			k++;
		}
		else {
			 m=i;
			break;
		}
           
	}

 }  
	return 0;
}
