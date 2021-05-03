#include "Students.h"
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

void Students::SetName(string name)
{

    this->name = name;
}

void Students::SetGrades(vector<double> vGrades) {

    this->vGrades = vGrades;
}

void Students::PrintGrades() {

        cout << name << setw(6);

        for (int j = 0; j < vGrades.size(); j++)
        {

        cout << vGrades.at(j) << setw(6);
        }

    cout << endl;
}
