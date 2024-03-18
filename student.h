#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
using namespace std;

class Student:public Person {
private:
    int numCredits;
public:
    Student();
    Student(string first, string last, int year, int day, int month, int credits);
    void setNumCredits(int credits);
    int getNumCredits() const;
};
#endif
