#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

class Student{
    public:
        Student(std::string = 0, std::string = 0);
        void printStudentName();
        void printAttendance();
    private:
        std::string name;
        std::string attendance;
};

class Teacher{
    public:
        Teacher(std::string);
        void printTeacherName();
    private:
        std::string name;
};

class Course{
    public:
        Course(std::string, Student, Teacher);
        void toString();
    private:
        Student classAttendance;
        Teacher classTeacher;
        std::string name;
};


#endif