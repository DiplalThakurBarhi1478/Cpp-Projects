// main page where we add value to the system

#include<iostream>
#include "student.h"
#include<cctype>
#include<algorithm>

using namespace std;

int main(){

    string options[] = {"Add", "Display", "Search", "Calculate", "Attendance", "Attendance Percentage", "Exit"};

    for(int i{0}; i < sizeof(options)/ sizeof(options[0]); i++){
        cout << options[i] << "  ";
    }

    cout << endl << "What do you want to do? " << endl;
    cout << "Your choice : ";
    
    string choice;
    cin >> choice;        // taking input of user choice

    transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c) {     // converting the string into the lowercase
        return tolower(c);
    });


     // Add
    if(choice == "add" ){
        cout << "add";
    }

    //Display
    if(choice == "display" ){
        cout << "display";
    }


    //Search
    if(choice == "search" ){
        cout << "search";
    }


    //Calculate
    if(choice == "calculate" ){
        cout << "calculate";
    }

    //Attendance
    if(choice == "attendance" ){
        cout << "attendance";
    }


    //Attendance Percentage
    if(choice == "attendace percentage" ){
        cout << "attendance percentage";
    }


    //Exit
    if(choice == "exit" ){
        cout << "exit";
    }

    return 0;
}