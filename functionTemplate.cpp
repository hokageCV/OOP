#include<iostream>
using namespace std;

// function overloading
/*
int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
*/

// function template
template <typename T>
T add(T a, T b){
    return a+b;
}

int main(){
    cout << add<int>(1, 2) << '\n';
    cout << add<float>(1.1f, 2.2f) << '\n';

    return 0;
}
