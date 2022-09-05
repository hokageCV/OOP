#include<iostream>
#include<string>
using namespace std;

class Cars{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:

    void setData(string cname, string mname, string ftype, float m, double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    void displayData(){
        cout << "Car Properties" << '\n';
        cout << "Company : " << company_name << '\n';
        cout << "Model : " << model_name << '\n';
        cout << "Fuel type : " << fuel_type << '\n';
        cout << "Mileage : " << mileage << '\n';
        cout << "Mulya : " << price << '\n';
    }

};


int main(){
    Cars car1;
    car1.setData("Tata", "Nano", "Diseal", 18, 100000 );
    car1.displayData();
}
