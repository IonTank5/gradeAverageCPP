#include <iostream>
#include "Student.h"
using std::cout, std::cin, std::endl, std::string;
int getWeeks() {
    int weeks;
    cout<<"Enter amount of grades: " << endl;
    cin >> weeks;
    return weeks;
}
int main()
{
    string name1, name2;
    cout << "Enter name for student 1: " << endl;
    cin >> name1;
    Student kid1(name1);
    cout << "Enter name for student 2: " << endl;
    cin >> name2;
    Student kid2(name2);
    int weeks = getWeeks();
    for (int i = 0; i < weeks; ++i) {
        kid1.inputGrades();
        kid2.inputGrades();
    }
    cout << "The average for " << kid1.getName() << " was " << kid1.getAverage() << endl;
    cout << "The average for " << kid2.getName() << " was " << kid2.getAverage() << endl;
}
