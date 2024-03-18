#include "GradStudent.h"
using namespace std;

GradStudent::GradStudent()
        : Student(), canGraduate(false) {}
GradStudent::GradStudent(string first, string last, int year, int day, int month, int credits)
        : Student(first, last, year, day, month, credits), canGraduate(false) {}
void GradStudent::updateGraduationStatus() {
    if (getNumCredits() >= 30)
        canGraduate = true;
}
bool GradStudent::canGraduateNow() const {
    return canGraduate;
}
