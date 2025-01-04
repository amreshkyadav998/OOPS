// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student { // Student is a new data type
public:
    string name;
    int rno;
    float gpa;


    // construnctor -> it is a function which return nothing
    Student(string s , int r , float g){ //parameterized constructor
        name = s;
        rno = r;
        gpa = g;
    }

    Student(string s , int r){
        name = s;
        rno = r;
    }

    Student(int r , string s , float g){
        name = s;
        rno = r;
        gpa = g;
    }

     Student(){ // Default constructor

    }

    // We can define more than one constructors that is called as multiple constructor 
};

int main(){
    Student s1("Amresh Yadav",28,9.56);
      Student s4(81,"Hello",8.87);

    // Student s1;
    // s1.name = "Amresh Yadav";
    // s1.rno = 28;
    // s1.gpa = 9.56;

    // Student s2;
    // s2.name = "Chandrakesh Yadav";
    // s2.rno = 29;
    // s2.gpa = 9.73;
    Student s3("Amy",39);

    Student s6 = s1; // deep copy
    s6.name = "Manish";

    Student s7(s1); // copy constructor -> deep copy




    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
    cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
    cout<<s7.name<<" "<<s7.rno<<" "<<s7.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<endl;
}