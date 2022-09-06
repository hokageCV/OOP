#include<iostream>
using namespace std;

class weight{
private:
    int kg;
public:
    weight(){
        kg=0;
    }
    weight(int x){
        kg = x;
    }

    void printWeight(){
        cout << "vajan (kg me) : " << kg << '\n';
    }

    // pre increment operator overloading
    void operator ++(){
        ++kg;
    }
    // post increment operator overloading
    void operator ++(int){
        kg++;
    }
};

int main(){
    weight obj;
    obj.printWeight();
    ++obj;
    obj.printWeight();
    obj++;
    obj.printWeight();

    return 0;
}
