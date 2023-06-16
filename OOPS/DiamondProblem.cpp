#include<iostream>
using namespace std;

// we get twice same property in grandChild class.

class parent{
public:
     parent(){
        cout<<"Parent class"<<endl;
     }

};
// here we have two clsses , which inherit parent class.

class child1: public parent{
public:
    child1(){
        cout<<"child1 class"<<endl;
    }

};
class child2: public parent{
public:
    child2(){
        cout<<"child2 class"<<endl;
    }

};
class grand_child: public child1,public child2{
public:

     grand_child(){
        cout<<"grand child class"<<endl;
     }

};


int main (){

    grand_child gch;

    return 0;
}