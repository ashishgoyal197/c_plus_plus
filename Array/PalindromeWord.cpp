#include <iostream>
using namespace std;

// Palindrome meaning is word is same from start and end both side. eg. NITIN.

int main (){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    // int result;

    // result = Palindrome( arr);

    bool check = true;

    for (int i=0,j=n-1;i<=j;i++,j--){

        if (arr[i]==arr[j]){
            continue;
        }
        else {

            check = false;
            break;
        }

    }

    if (check==true){
        cout<<"This is Palindrome"<<endl;
    }
    else {
        cout<<"This is not Palindrome"<<endl;
    }

    return 0;
}