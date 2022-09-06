#include<iostream>
using namespace std;

class shape{
public:
    // pure virtual function
    virtual void getArea() = 0;
};

class circle : public shape{
public:
    void getArea(){
        cout << "enter ardhvyas :  " ;
        int radius;
        cin >> radius;
        cout << "kshetraphal : " << (3.14*radius*radius) << '\n';
    }
};

int main(){
    circle c;
    c.getArea();

    return 0;
}
