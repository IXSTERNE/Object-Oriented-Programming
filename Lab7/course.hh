#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>

#include "teacher.hh"
#include "student.hh"

class Course{
    public:
        Course(std::string, const Teacher& courseTeacher, int courseCapacity);
        void registerStudent(Student);
        void print();
        int stud_num();
        void kick(int);
        Student getStudent(int);
        Student getKickList(int);
        int getCurrentCapacity();
    private:
        std::string courseName;
        Teacher courseTeacher;
        int courseCapacity;
        std::vector<Student> studentList;
        std::vector<Student> kickList;
};

#endif