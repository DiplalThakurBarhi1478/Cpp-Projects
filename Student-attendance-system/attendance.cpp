#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <cctype>

#include "attendance.h"
#include "student.h"

using namespace std;

void Attendance::startingAttendance(const vector<string>& students)
{
    cout << "Let's Start Attendance." << endl;

    cout << "Are you ready? "
         << "PRESS [1 for Yes] and [2 for No] : ";

    int start;
    cin >> start;

    vector<Student_attendance> status_of_student;

    if (start == 1)
    {
        char status;

        for (int i{0};
             i < students.size();
             ++i)
        {
            cout << "Roll Number: "
                 << i + 1
                 << " "
                 << students[i]
                 << " Status : ";

            while (true)
            {
                cin >> status;

                try
                {
                    if (status != 'a' &&
                        status != 'A' &&
                        status != 'p' &&
                        status != 'P')
                    {
                        throw invalid_argument(
                            "Status must be P or A");
                    }

                    break;
                }
                catch (invalid_argument& e)
                {
                    cout << e.what() << endl;
                    cout << "Enter again: ";
                }
            }

            status_of_student.emplace_back(i + 1,students[i],status);
        }

        cout << endl;
        cout << "Today's Attendance!" << endl;

        int count_absent{0};
        int count_present{0};

        for (int j{0};
             j < students.size();
             ++j)
        {
            cout << "Roll Number: "
                 << status_of_student[j].rollNumber
                 << ", Name of the Student: "
                 << status_of_student[j].name
                 << ", School Status: "
                 << (char)toupper(
                        status_of_student[j].Status)
                 << endl;

            if (status_of_student[j].Status == 'a' ||
                status_of_student[j].Status == 'A')
            {
                ++count_absent;
            }

            if (status_of_student[j].Status == 'p' ||
                status_of_student[j].Status == 'P')
            {
                ++count_present;
            }
        }

        cout << endl;

        cout << "Total Present : "
             << count_present
             << endl;

        cout << "Total Absent : "
             << count_absent
             << endl;
    }
}
