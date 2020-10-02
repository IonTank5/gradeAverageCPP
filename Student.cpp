//
// Created by jaked on 10/2/2020.
//

#include "Student.h"
void Student::inputGrades(){
    cout<<"Enter grades for " << name << ": " << endl;
    cin >> temp;
    grades+=temp;
    amount++;
}
double Student::getAverage() {
    return grades/amount;
}
string Student::getName() {
    return name;
}