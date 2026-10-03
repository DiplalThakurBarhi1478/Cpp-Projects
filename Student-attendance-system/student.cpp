// the page where we tell the class to do or work

#include<iostream>
#include "student.h"


using namespace std;

// Inside Student Class

Student::Student(int rollNumber, string name){
    this->rollNumber = rollNumber;
    this->name = name;
}

void Student::display(){
    cout << rollNumber << " " << name << endl;
}


// Inside Search
