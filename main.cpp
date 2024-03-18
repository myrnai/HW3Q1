#include <iostream>
#include "Person.h"
#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"
using namespace std;

int main() {
    Student student("John", "Doe", 1999, 1, 15, 90);
    GradStudent gradStudent("Jane", "Smith", 1998, 5, 20, 25);
    UndergradStudent undergradStudent("Alice", "Johnson", 2000, 9, 10, 110);
    student.setNumCredits(100);
    gradStudent.setNumCredits(30);
    undergradStudent.setNumCredits(130);
    cout<<"Student Name: "<<student.getName()<<endl;
    cout<<"Student Birthdate: "<<student.getBirthdate()<<endl;
    cout<<"Student Credits: "<<student.getNumCredits()<<endl;
    cout<<"Graduation Status (GradStudent): "<<(gradStudent.canGraduateNow() ? "Eligible" : "Not Eligible")<<endl;
    cout<<"Graduation Status (UndergradStudent): "<<(undergradStudent.canGraduateNow() ? "Eligible" : "Not Eligible")<<endl;
    return 0;
}
