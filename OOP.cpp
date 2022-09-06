#include<iostream>
#include<string>
using namespace std;

class Cars{
private:
    // data members
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    //default constructor
    Cars(){
        cout << "default constructor summoned" << '\n';
        company_name = "Tata";
    }

    // parameterised constructor
    Cars(string cname, string mname, string ftype, float m, double p){
        cout << "parameterised constructor summoned" << '\n';
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    // copy constructor
    Cars(Cars &obj){
        cout << "copy constructor summoned" << '\n';
        company_name = obj.company_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }

    // member functions
    void setData(string cname, string mname, string ftype, float m, double p){
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    void displayData(){
        cout << "\n\tCar Properties" << '\n';
        cout << "Company : " << company_name << '\n';
        cout << "Model : " << model_name << '\n';
        cout << "Fuel type : " << fuel_type << '\n';
        cout << "Mileage : " << mileage << '\n';
        cout << "Mulya : " << price << '\n';
        cout << '\n';
    }


    // destructor
    ~Cars(){
        cout << "Destructor summoned " << '\n';
    }

};


int main(){
    Cars car1;
    Cars car2("Tata", "Safari", "Diseal", 19, 580000);
    car1.setData("Tata", "Nano", "Diseal", 18, 100000 );
    car1.displayData();
    car2.displayData();
    Cars car3 = car1;

    return 0;
}
