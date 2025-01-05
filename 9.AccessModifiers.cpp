//Access Modifier 
//types :(3 types) public , private , protected
#include<iostream>
using namespace std;

class Student{
    public:
    int rno;
    string name;

    Student(){ //default contructor

    }

    Student(int rno , string name , float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    void display(){
        cout<<name<<" "<<rno<<" "<<marks<<endl;
    }

    float getMarks(){ //getter
        return marks;
    }

    void setMarks(float marks){
        this->marks = marks;
    }
    private:
    float marks;
};

int main(){
    Student s1(28,"Amresh Yadav",91);
    // s1.name = "Amresh Yadav";
    // s1.rno = 28;
    // s1.marks = 91;
    s1.display();
    cout<<s1.getMarks()<<endl;
    s1.setMarks(96);
    cout<<s1.getMarks()<<endl;
    s1.display();

    return 0;
}