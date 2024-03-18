#ifndef UNDERGRADSTUDENT_H
#define UNDERGRADSTUDENT_H
#include "Student.h"
using namespace std;

class UndergradStudent : public Student {
private:
    bool canGraduate;
public:
    UndergradStudent();
    UndergradStudent(string first, string last, int year, int day, int month, int credits);
    void updateGraduationStatus();
    bool canGraduateNow() const;
};
#endif
