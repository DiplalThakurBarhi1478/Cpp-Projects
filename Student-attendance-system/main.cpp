// main page where we add value to the system

#include <iostream>
#include "student.h"
#include "attendance.h"
#include <cctype>
#include <algorithm>
#include <vector>
#include <ostream>
#include <stdexcept>

using namespace std;

int main()
{
    vector<Student> students;

    string options[] = {
        "Add",
        "Display",
        "Search",
        "Calculate",
        "Attendance",
        "Attendance Percentage",
        "Exit"};

    vector<string> studentNames = {
        "Diplal",
        "Aman",
        "Aadarsh",
        "Aayansh",
        "Aaditya",
        "Biraj"};

    string choice;

    while (true)
    {
        for (int i{0}; i < sizeof(options) / sizeof(options[0]); i++)
        {
            cout << options[i] << "  ";
        }

        cout << endl
             << "What do you want to do? " << endl;
        cout << "Your choice : ";

        // Take input of user's choice
        cin >> choice;

        // Convert choice to lowercase
        transform(choice.begin(), choice.end(), choice.begin(),
                  [](unsigned char c)
                  {
                      return tolower(c);
                  });

        // =========================
        // ADD STUDENT
        // =========================

        if (choice == "add")
        {
            while (true)
            {
                int rollNumber;
                string fullName;

                cout << "Student's roll number : ";
                cin >> rollNumber;

                cout << "Student's full name : ";
                getline(cin >> ws, fullName);

                Student student1(rollNumber, fullName);

                students.push_back(student1);

                cout << "Do you want to continue (yes/no)? " << endl;
                cout << "Your choice : ";

                string again1;
                cin >> again1;

                if (again1 == "no")
                {
                    break;
                }
            }
        }

        // =========================
        // DISPLAY STUDENTS
        // =========================

        if (choice == "display")
        {
            for (Student &student : students)
            {
                student.display();
            }
        }

        // =========================
        // SEARCH STUDENT
        // =========================

        if (choice == "search")
        {
            while (true)
            {
                int searchRoll;

                cout << "Student's roll number : ";
                cin >> searchRoll;

                bool found = false;

                for (Student &student : students)
                {
                    if (student.rollNumber == searchRoll)
                    {
                        cout << student.rollNumber
                             << " "
                             << student.name
                             << endl;

                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    cout << "Student not found." << endl;
                }

                cout << "Do you want to continue (yes/no)? " << endl;
                cout << "Your choice : ";

                string again2;
                cin >> again2;

                if (again2 == "no")
                {
                    break;
                }
            }
        }

        // =========================
        // ATTENDANCE
        // =========================

        if (choice == "attendance")
        {
            Attendance a1;
            a1.startingAttendance(studentNames);

            a1.attendancePercentage();
            
        }

        // =========================
        // EXIT
        // =========================

        if (choice == "exit")
        {
            break;
        }
    }

    return 0;
}
