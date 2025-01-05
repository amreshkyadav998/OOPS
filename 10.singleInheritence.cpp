#include<iostream>
using namespace std;
class Scooty{ //parent class
    public:
    int topSpeed;
    float mileage;
    private:
    int bootSpace;
};

class Bike: public Scooty{ //(child class / derived class) can read as class bike extend scooty 
    public:
    int gears;
};
int main(){
    Bike b1;
    b1.topSpeed = 180;
    b1.mileage = 12.5;
    b1.gears = 6;
}