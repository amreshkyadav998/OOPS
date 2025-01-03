// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Student { // Student is a new data type
public:
    string name;
    int rno;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "Amresh Yadav";
    s1.rno = 28;
    s1.gpa = 9.56;

    Student s2;
    s2.name = "Chandrakesh Yadav";
    s2.rno = 29;
    s2.gpa = 9.73;

    cout<<s1.name<<" "<<s1.rno<<" "<<s2.gpa<<endl;
}