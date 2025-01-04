#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;
    float avg;

    //Constructors
    Cricketer(string name,int runs,int avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }


};

int main(){
    Cricketer c1("Rohit Sharma",21000,51);
    // Cricketer c2("Virat Kohli",27000,54);

    // int* ptr = new int(627);
    // cout<<*ptr<<endl;

    //Similarly (Dynamic Allocation)
    Cricketer* c2 = new Cricketer("Virat Kohli",27000,54);
    cout<<c1.name<<endl;
    cout<<c2->name<<endl;



    return 0; 
}