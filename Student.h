//
// Created by jaked on 10/2/2020.
//

#ifndef GRADETESTER_STUDENT_H
#define GRADETESTER_STUDENT_H
#include <iostream>
using std::cout, std::cin, std::endl, std::string;
class Student {
private:
    double grades = 0, temp=0, amount = 0;
    string name;
public:
        Student(string x){
            name = x;
        }
    void inputGrades();
    string getName();
    double getAverage();
};


#endif //GRADETESTER_STUDENT_H
