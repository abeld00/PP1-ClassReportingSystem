#ifndef STUDENTSH
#define STUDENTSH
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Students {

public:
    void SetName(string name);
    void SetGrades(vector<double> vGrades);
    string GetName() { return name; }
    void PrintGrades();



private:
    string name;
    vector<double> vGrades;

    };

    #endif
