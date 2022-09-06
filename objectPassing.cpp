#include<iostream>
using namespace std;

class complexNumber{
private:
    // data members
    int real;
    float imaginary;
public:
    complexNumber(){}

    complexNumber(int r, float i){
        real = r;
        imaginary = i;
    }

    void displayData(){
        cout << "Number: " << real<<" + "<< imaginary<<"i" << '\n'<< '\n';
    }
    int getRealPart(){ return real; }
    float getImaginaryPart(){ return imaginary; }
};

complexNumber add(complexNumber num1, complexNumber num2){
    int r = num1.getRealPart() + num2.getRealPart();
    int i = num1.getImaginaryPart() + num2.getImaginaryPart();

    complexNumber temp(r,i);
    return temp;

}

int main(){
    complexNumber comp1(1,2);
    complexNumber comp2(3,4);
    comp1.displayData();
    comp2.displayData();

    cout << "\t adding numbers" << '\n';
    complexNumber comp3 = add(comp1, comp2);

    // pointers
    complexNumber *ptr1;
    ptr1 = &comp3;
    ptr1-> displayData();

    return 0;
}
