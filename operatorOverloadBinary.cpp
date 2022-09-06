#include<iostream>
using namespace std;

class complex{
private:
    int real, imaginary;
public:
    complex(int r=0, int i=0){
        real = r;
        imaginary = i;
    }

    void print(){
        cout << "Number: " << real<<" + "<< imaginary<<"i" << '\n'<< '\n';
    }

    // operator overloading
    complex operator +(complex c){
        complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main(){
    complex c1(1,2);
    complex c2(3,4);
    complex c3;

    c3 = c1+c2;  // compiler evaluates this as  c3 = c1.add(c2)
    c3.print();

    return 0;
}
