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

    void change(Cricketer * c){
        // (*c).avg = 57;
        // OR
        c->avg = 57; //(*c).avg = 57;
    }

};

int main(){
    Cricketer c1("Rohit Sharma",21000,51);
    Cricketer c2("Virat Kohli",27000,54);

    // int x = 4;
    // int* p = &x;
    // cout<<p<<endl;//address of x
    // cout<<*p<<endl;//value of x

    //Similarly 
    Cricketer* p1 = &c1;
    cout<<(*p1).runs<<endl; //c1.runs
    cout<<c1.avg<<endl;
    // (*p1).avg = 57;
    c1.change(&c1);
    cout<<c1.avg<<endl;



    return 0; 
}