#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "teacher.hh"
#include "student.hh"
#include <vector>

using namespace std;

class Course{
    public:
        Course(string, const Teacher& courseTeacher, int courseCapacity);
        void registerStudent(Student);
        void print();
        int stud_num();
        void kick();
        int getStudent(int);
        int getId();
    private:
        string courseName;
        Teacher courseTeacher;
        int courseCapacity;
        vector<Student> studentList;
};

#endif