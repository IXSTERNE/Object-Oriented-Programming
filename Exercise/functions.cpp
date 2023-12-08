#include <iostream>
#include <string>
#include "header.hh"

Teacher::Teacher(std::string teacherName){
    this->teacherName = teacherName;
}

Course::Course(std::string courseName, const Teacher& courseTeacher)
    : courseTeacher(courseTeacher)
{
    this->courseName = courseName;
}

Student::Student(std::string studentName, std::string attendance, const Course& takenCourse)
    : takenCourse(takenCourse)
{
    this->studentName = studentName;
    this->attendance = attendance;
}