#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include "Student.h"
using namespace std;

class GradStudent:public Student {
private:
    bool canGraduate;
public:
    GradStudent();
    GradStudent(string first, string last, int year, int day, int month, int credits);
    void updateGraduationStatus();
    bool canGraduateNow() const;
};
#endif
