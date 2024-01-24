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
        Student getStudent(int);
        Student getKickStudent(int);
        void setKickList(Student);
        int getKickCapacity();
        int getCurrentCapacity();
        void kickListPrint();

        std::vector<Student>& returnStudentList();
        std::vector<Student>& returnKickList();
    private:
        std::string courseName;
        Teacher courseTeacher;
        int courseCapacity;
        std::vector<Student> studentList;
        std::vector<Student> kickList;
};

#endif