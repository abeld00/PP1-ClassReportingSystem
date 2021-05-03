//PP1
//Class Reporting System
//Abel Desta



#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include "Students.h"

using namespace std;

void PrintCourses();
void ReadClassA(vector<Students>& vStudents, vector<double>& vGrades);


int main()
{
    int choice;
    char inpClass;
    string line = "\n\n----------------------------------------------------------\n\n";
    vector<Students> vStudents;
    vector<double> vGrades;

        cout << "Welcome to the Class Reporting System" << endl;
        cout << "Type 1 to view available courses" << endl;
        cout << "Type 2 to view grade report" << endl;
        cout << "Type 3 to end system" << endl;
        cout << ": ";

        cin >> choice;

        if (choice == 3) {
            cout << line << "End program";
            return 0;
        }

        if (choice == 1) {
            cout << line << "These are the available courses" << endl;
           // PrintCourses();
        }

        if (choice == 2) {
            cout << line << "Would you like to report on class A or B: ";

            cin >> inpClass;
        }

        if (inpClass == 'A') {
            ReadClassA(vStudents, vGrades);
        }

        if (inpClass == 'B') {
            //CIT1350.txt
        }
}

void ReadClassB(vector<Students>& vStudents, vector<double>& vGrades)
{

    Students student;
    string name;
    double g1, g2, g3, g4, final1;
    ifstream class1;

    class1.open("CIT1350.txt");

    if (class1.fail()) {
        cout << "did not open";
    }

    while (class1.good())
    {
        class1 >> name;

        class1 >> g1;
        vGrades.push_back(g1);

        class1 >> g2;
        vGrades.push_back(g2);

        class1 >> g3;
        vGrades.push_back(g3);

        class1 >> g4;
        vGrades.push_back(g4);

        class1 >> final1;
        vGrades.push_back(final1);

        student.SetName(name);
        student.SetGrades(vGrades);

        vStudents.push_back(student);
    }

    class1.close();

}

void ReadClassA(vector<Students>& vStudents, vector<double>& vGrades)
{

    Students student;
    string name;
    double g1, g2, g3, g4, final1;
    ifstream class1;

    class1.open("CIT1325.txt");

    if (class1.fail()) {
        cout << "did not open";
    }

    while (class1.good())
    {
        class1 >> name;

        class1 >> g1;
        vGrades.push_back(g1);

        class1 >> g2;
        vGrades.push_back(g2);

        class1 >> g3;
        vGrades.push_back(g3);

        class1 >> g4;
        vGrades.push_back(g4);

        class1 >> final1;
        vGrades.push_back(final1);

        student.SetName(name);
        student.SetGrades(vGrades);

        vStudents.push_back(student);
    }

    class1.close();

}

void PrintGrades(vector<Students> vStudents)
{
    cout << fixed << setprecision(2);
    for (int i = 0; i < vStudents.size(); i++)
    {

        cout << vStudents[i].PrintGrades() << endl;
    }
}

void PrintCourses()
{

    cout << "Composition I     Professor White    ENGL2458" << endl;
    cout << "Calculus II       Professor Chris    MATH1412" << endl;
    cout << "Management        Professor Balding  BUSI1309" << endl;
    cout << "Texas Government  Professor Ogre     GOVT2119" << endl;
    cout << "Biology           Professor Greig    BIO2314 " << endl;
}


}
