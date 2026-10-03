// it is the page where every thing is contained.

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;

public:
    Student(int rollNumber, string name);

    void display();
};

#endif