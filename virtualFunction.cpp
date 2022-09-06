#include<iostream>
using namespace std;

class base{
public:
    void show(){
        cout << "base class show function called" << '\n';
    }
    // virtual function
    virtual void print(){
        cout << "base class print function called" << '\n';
    }
};

class derived: public base{
    void show(){
        cout << "derived class show function called" << '\n';
    }
    // virtual function
    void print(){
        cout << "derived class print function called" << '\n';
    }
};

int main(){
    base *basePtr;
    derived derivedObj;

    basePtr = &derivedObj;

    basePtr->print(); // derived class show function called
    // because print is virtual function, hence even with baseClassPointer, it can be accessed

    basePtr->show();  // base class show function called


    return 0;
}
