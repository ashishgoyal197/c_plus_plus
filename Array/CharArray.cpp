#include <iostream>
using namespace std;

int main (){

    int n;
    cin>>n;

    // Declare a array with data type char .
    char arr[n+1] = "apple";

    // using while loop till last element . where last element is a null charactar \0 .

    int i=0;

    while (arr[i] != '\0'){

        cout<<arr[i]<<endl;
        i++;
    }

    //How to take Input.

    char arrInput[n+1];
    cin>>arrInput;

    // for output

    cout<< arrInput<<endl;

    // For access any particular charactor.

    cout << arrInput[2];


    return 0;
}

