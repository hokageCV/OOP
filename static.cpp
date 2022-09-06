#include<iostream>
using namespace std;

class thepla{
private:
    int x;
    static int count;
public:
    // default constructor
    thepla(){count++;}

    // static function
    static int getCount(){
        return count;
    }
};

// initializing static member
int thepla::count = 0 ;

int main(){

    cout << "initial count value: "<<thepla::getCount() << '\n';
    thepla obj1, obj2;
    cout << "new count value: "<<thepla::getCount() << '\n';
    return 0;
}
