#include<iostream>
#include<string>
using namespace std;

// First we define a class.
// class is user defined datatype with some property/function of that datatype.
// And variable of class is called Object.

class fruit{
public:

   string name;
   string color;

};
// For constructor.
class rectangle{
public:
 
   int l;
   int b;

//If we want to initialize l and b with some value , we use
//constructor
// it has same name as class name.
 
  rectangle(){ // its a default constructor - no argument is passed.
    l=0;
    b=0;
  }

  rectangle(int x,int y){ // its a parameterised constructor - arg is passed.
    l=x;
    b=y;
  }

  rectangle(rectangle& r){ // its a copy contructor - copy some value from another object.
    l=r.l;
    b=r.b;
  }

  ~rectangle(){ // When a object is deleted distructor is called.
    cout<<"Distructor is called "<<endl;
  }

};

// For Encapsulation
class abc{
    // x is not public .x is only accessable for class method. x can not be directly access by main func.
    // for access x we Encapsulation
    int x;
public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }

};

// For Inhertance

class parent{
public: //can access from anywhere of code.
   int x;

protected: // access 1. own class 2. perent class 3. child class
   int y;

private:  // access from own class.
   int z; 

};

// forming a child/sub class 
class child1: public parent{
    // x is remain public.
    // y is remain protected.
    // z is not accessable.
};

class child2: private parent{
    // x is private.
    // y is private.
    // z will not accessable.

};

class child3: protected parent{
    // x is protected.
    // y is protected.
    // z will not accessable.
};

// For single Inheritance.
class parents{
public:
   parents(){
      cout<<"Parents class"<<endl;
   }

};
class childs: public parents{
public:

    childs(){
        cout<<"Child Class"<<endl;
    }


};

// for multi inheritance,we can make a another sub class of childs class.

class junior_child: public childs{
    public:
    junior_child(){
        cout<<"junior child class"<<endl;
    }
};

// Multiple inheritance - there is many parent class .

class parent1{
public:
   parent1(){
      cout<<"parent1"<<endl;
   }
};
class parent2{
public:
   parent2(){
      cout<<"parent2"<<endl;
   }
};

class child_multiple: public parent1,public parent2{
public:
     child_multiple(){
         cout<<"child multiple"<<endl;
     }

};

 

int main(){

    fruit apple; // this is object.
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<" - "<<apple.color<<endl;

    // Another way of define a object 

    fruit *mango = new fruit();
    // here we are not get variable. we get a pointer that pointed to that object.
    // here we are not use dot operator , we use arrow operator.

    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<" - "<<mango->color<<endl;

    rectangle* r1 = new rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    rectangle r2(3,4);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3 = r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    abc obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;

    junior_child c1;

    child_multiple cmul;






        
    


    return 0;
}