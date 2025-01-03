#include<iostream>
using namespace std;

class Car {
    public:
    string name;
    int price;
    int seats;
    string type;
};

void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}

void change(Car& c){
    c.name = "Audi";
}

int main(){
    Car c1;
    c1.name = "Fortuner";
    c1.price = 83647;
    c1.seats = 5;
    c1.type = "Sedan";
    
    Car c2;
    c2.name = "Toyota";
    c2.price = 99379;
    c2.seats = 7;
    c2.type = "saddan";

    print(c1);
    change(c1); // if not using & in above function then pass by value , if using & then pass by reference
    print(c1);
    print(c2);
}
