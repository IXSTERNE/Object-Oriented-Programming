#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

class Student{
    public:
        Student(std::string = 0, std::string = 0, Course takenCourse);
        void toString();
    private:
        Course takenCourse;
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
        Course(std::string, Teacher courseTeacher);
        void printCourseName();
    private:
        Teacher courseTeacher;
        std::string name;
};


#endif