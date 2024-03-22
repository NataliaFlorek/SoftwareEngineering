#include "Student.h"
#include "University.h"


int main(){
    Student *student = new Student();
    University *university = new University();
    university->attach(student);
    university->setData(0,"Jan Kowalski", 1234, "male", 20);
    university->attach(student);
    university->setData(1, "Anna Nowak", 4321, "female", 24);
    university->printData(0);
    university->printData(1);
    university->detach();
    university->detach();
    delete student;
    delete university;
    return 0;
}