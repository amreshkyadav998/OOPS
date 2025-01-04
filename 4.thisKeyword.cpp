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
};

int main(){
    Cricketer c1("Rohit Sharma",21000);
    Cricketer c2("Virat Kohli",27000);

    cout<<c1.name<<" "<<c1.runs<<endl;   
    cout<<c2.name<<" "<<c2.runs<<endl;  

    return 0; 
}