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

     Student(){ // Default constructor

    }
};

int main(){
    Student s1("Amresh Yadav",28,9.56);

    // Student s1;
    // s1.name = "Amresh Yadav";
    // s1.rno = 28;
    // s1.gpa = 9.56;

    // Student s2;
    // s2.name = "Chandrakesh Yadav";
    // s2.rno = 29;
    // s2.gpa = 9.73;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
}