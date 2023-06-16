#include<iostream>
using namespace std;

// Polimorphism = ability of object/method to take diffrent forms.
// 1.Compile time polimorphism
// -> Func. overloading = func. with same name , perform acc. to how many argument pass
// and type of passed argument.

class Sum{
public:
    void add(int x,int y){
        int sum = x+y;
        cout<<sum<<endl;
    }

    void add(int x,int y,int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

    void add(float x,float y){
        float sum = x+y;
        cout<<sum<<endl;
    }

};

// Operator overloading:

class Complex{
public:
    int real;
    int img;

    Complex(int x,int y){
        real = x;
        img = y;
    }

    Complex operator+ (Complex &c2){

        Complex ans(0,0);
        ans.real = real + c2.real;
        ans.img = img + c2.img;
        return ans;
    }

};

// 2. Runtime Polymorphism = Resolved by func overriding if we have same func. in
//  parent and child class them which  is call , this is call func. overriding. 

class Parent{
public: 
// I write virtual for func. overriding means its decide at run time which func. will call.
    virtual void print (){
        cout<<"Parent class"<<endl;
     }
     void show(){
        cout<<"Parent class"<<endl;
     }
};

class Child: public Parent{
public:
    void print (){
        cout<<"Child class"<<endl;
     }
     void show(){
        cout<<"Child class"<<endl;
     }
     
};

int main (){

    Sum s;
    s.add(3,4);
    s.add(2,4,7);
    s.add(float(2.3),float(2.7));

    Complex c1(1,2);
    Complex c2(1,3);
    // complex which is after + operator will go in func. and before one will go in cons.
    Complex c3 = c1+c2;
    cout<<c3.real<<" i"<<c3.img<<endl;

    Parent *p;
    Child c;

    p = &c;
    // here child func. will call because of func. overiding.
    p->print();
    // here parent func. is call because here no func. overiding.
    p->show();

    return 0;
}