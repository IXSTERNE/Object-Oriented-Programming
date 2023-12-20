#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "teacher.hh"
#include "course.hh"

using namespace std;

class Student{
    public:
        Student(int = 0, string = "", string = "");
    private:
        string studentfName;
        string studentlName;
        int studentId;
};

#endif