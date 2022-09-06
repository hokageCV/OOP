#include<iostream>
using namespace std;

class Distance{
private:
    int meters;
public:
    Distance(){ meters = 0; }

    void displayData(){
        cout << "Distance is : "<< meters << '\n';
    }

    // function signature
    friend void addValue(Distance &d, int val);
};

void addValue(Distance &d, int val){
    d.meters += val;
}

int main(){
    Distance d1;
    d1.displayData();

    addValue(d1, 4);
    d1.displayData();

    return 0;
}
