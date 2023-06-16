#include <iostream>
using namespace  std;

int main (){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    // using getline for take input full sentence in a single variable. and write ignore is compulsary. 

    cin.getline(arr,n);
    cin.ignore();

    cout<<arr<<endl;

    int currentLen = 0;
    int maxLen = 0;
    int end = 0;
    
    int i=0;

    while (1){

         if (arr[i]==' ' || arr[i]=='\0'){
            if (currentLen>maxLen){
                maxLen = currentLen ;
                end=i-1;
            }
            currentLen = 0;
        }

        else{
        currentLen++;
        }

        if (arr[i]=='\0'){
            break;
        }
        i++;
    }

    int start = end-maxLen;
     cout<<maxLen<<endl;
     for (int i=start+1;i<=end;i++){
        cout<<arr[i];
     }
     cout<<endl;



    return 0;
}