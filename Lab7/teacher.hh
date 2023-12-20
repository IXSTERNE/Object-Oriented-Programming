#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <string>
#include "course.hh"
#include "student.hh"
#include <vector>

using namespace std;

class Teacher{
    public:
        Teacher(string, string, string);
    private:
        string teacherfName;
        string teacherlName;
        string teacherEmail;
};



#endif