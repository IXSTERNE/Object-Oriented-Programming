#include <iostream>
#include <string>
#include "header.hh"



Student::Student(std::string name, std::string attendance, Course takenCourse)
    : attendance(attendance), takenCourse(takenCourse)
{
    this->name = name;
    this->attendance = attendance;
}

void Student::toString(){
        std::cout << "Student name: " << name << std::endl;
        
    }

Course::Course(std::string name, Teacher courseTeacher)
    : courseTeacher(courseTeacher)
{
    this->name = name;
}

void Course::printCourseName(){
    std::cout << "Course name: " << name << std::endl;
}

Teacher::Teacher(std::string name){
    this->name = name;
}

void Teacher::printTeacherName(){
    std::cout << "Teacher name: " << name << std::endl;
}