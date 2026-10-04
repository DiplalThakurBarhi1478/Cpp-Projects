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

// for student attendacne
    
Student_attendance::Student_attendance(int rollNumber, string name, char Status):Student(rollNumber, name){
        this->Status = Status;
    }

Student_attendance::Student_attendance():Student(rollNumber, name){
    cout << "I am default constructor";
}


