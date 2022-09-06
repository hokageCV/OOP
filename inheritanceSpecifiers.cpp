#include<iostream>
using namespace std;

class baseClass{
public:
    int x;
    baseClass(){
        x=1;
        y=2;
        z=3;
    }

    void printProtectedData(){ cout << "y is : " << y << '\n'; }
private:
    int y;
protected:
    int z;
};

class derivedPublicClass : public baseClass{
    // baseClass ke proteced, public things ,except constructor , as it is derive honge
    /* public x
       protected y
    */
};

class derivedProtecedClass : protected baseClass{
    // baseClass ke proteced, public things ,except constructor , protecedly derive honge
    /* protected x
       protected y
    */
};

class derivedPrivateClass : private baseClass{
    // baseClass ke proteced, public things ,except constructor , privately derive honge
    /* private x
       private y
    */
};

int main(){
    derivedPublicClass obj2;
    cout << "x : "<< obj2.x << '\n';

    return 0;
}
