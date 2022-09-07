#include<iostream>
using namespace std;

template <typename T>
class value{
private:
    T shirt;
public:
    void setValue(T rex){
        shirt = rex ;
    }
    T getValue(){
        return shirt;
    }
};

int main(){
    value<int> obj1;
    obj1.setValue(1);
    cout << "int value is : "<< obj1.getValue() << '\n';

    value<string> obj2;
    obj2.setValue("tachii");
    cout << "string value is : "<< obj2.getValue() << '\n';

    return 0;
}
