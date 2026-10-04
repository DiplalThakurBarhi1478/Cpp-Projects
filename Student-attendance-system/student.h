// it is the page where every thing is contained.

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;

    Student(int rollNumber, string name);

    void display();
};



// student attendance
class Student_attendance : public Student
{
public:
    char Status;
    Student_attendance();

    Student_attendance(int Roll_number, string full_name, char Status); 
    /// this method updates the variable initialized inside the class.
};

#endif
