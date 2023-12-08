#include <iostream>
#include <string>
#include "header.hh"

Teacher::Teacher(std::string teacherName){
    this->teacherName = teacherName;
}

void Teacher::print() const{
    std::cout << "Teacher name: " << teacherName << std::endl;
}

Course::Course(std::string courseName, const Teacher& courseTeacher)
    : courseTeacher(courseTeacher)
{
    this->courseName = courseName;
}

void Course::print() const{
    std::cout << "Course name: " << courseName << std::endl;
    courseTeacher.print();
}

Student::Student(std::string studentName, std::string attendance, const Course& takenCourse)
    : takenCourse(takenCourse)
{
    this->studentName = studentName;
    this->attendance = attendance;
}

void Student::print() const{
    std::cout << "Student name: " << studentName << std::endl;
    std::cout << "Attendance: " << attendance << std::endl;
    takenCourse.print();
}