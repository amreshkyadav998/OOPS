#include<iostream>
using namespace std;
class Cricketer{ 
    public:
    int runs;
    int wickets;
    int average;
    
};

class Engineer{
    public:
    int experience;
    string domain;
};

class Phodu : public Engineer , Cricketer { // multiple Inheritence
public : 
    string name;
};

int main(){
    
}