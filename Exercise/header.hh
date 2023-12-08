#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>

class Teacher{
    public:
        Teacher(std::string);
        void print() const;
    private:
        std::string teacherName;
};

class Course{
    public:
        Course(std::string, const Teacher& courseTeacher);
        void print() const;
    private:
        std::string courseName;
        Teacher courseTeacher;
};

class Student{
    public:
        Student(std::string, std::string, const Course& takenCourse);
        void print() const;
    private:
        std::string studentName;
        std::string attendance;
        Course takenCourse;
};

#endif