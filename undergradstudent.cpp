#include "UndergradStudent.h"
using namespace std;

UndergradStudent::UndergradStudent()
        : Student(), canGraduate(false) {}
UndergradStudent::UndergradStudent(string first, string last, int year, int day, int month, int credits)
        : Student(first, last, year, day, month, credits), canGraduate(false) {}
void UndergradStudent::updateGraduationStatus() {
    if (getNumCredits() >= 120)
        canGraduate = true;
}
bool UndergradStudent::canGraduateNow() const {
    return canGraduate;
}
