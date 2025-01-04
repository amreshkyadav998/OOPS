#include<iostream>
using namespace std;

class Cricketer{
    public:
    string name;
    int runs;

    //Constructors
    Cricketer(string name,int runs){
        this->name = name;
        this->runs = runs;
    }

    // Function inside class
    void print(){
        cout<<this->name<<" "<<this->runs<<endl;
    }

    int matches(){
        int avg = 50;
        return runs/avg;
    }

};

int main(){
    Cricketer c1("Rohit Sharma",21000);
    Cricketer c2("Virat Kohli",27000);

    //Since print function is inside the class so c1 and c2 can access print function as well
    c1.print();
    c2.print();

    cout<<c1.matches()<<endl;
    cout<<c2.matches()<<endl; 

    return 0; 
}