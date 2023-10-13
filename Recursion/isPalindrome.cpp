#include<iostream>
using namespace std;

bool isPalindrome(int num , int *temp){
    if(num>=0 && num<=9){
        int lastnum = (*temp)%10;
        *temp /=10;
        return (num == lastnum);
    }

    bool result = (isPalindrome(num/10,temp)) && (((num%10)==(*temp)%10));
    *temp /= 10;
    return result;
}

int main(){

    int num;
    cin>>num;

    int number = num;
    int *temp = &number;

    bool result = isPalindrome(num,temp);
    cout<<result;

    return 0;
}