#include "Student.h"
using namespace std;

Student::Student()
        : Person(), numCredits(0) {}
Student::Student(string first, string last, int year, int day, int month, int credits)
        : Person(first, last, year, day, month), numCredits(credits) {}
void Student::setNumCredits(int credits) {
    numCredits = credits;
}
int Student::getNumCredits() const {
    return numCredits;
}
