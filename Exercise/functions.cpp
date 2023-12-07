#include <iostream>
#include <string>
#include "header.hh"



Student::Student(std::string name, std::string attendance){
    this->name = name;
    this->attendance = attendance;
}

Teacher::Teacher(std::string name){
    this->name = name;
}

Course::Course(std::string name, Student classAttendance, Teacher classTeacher)
    : name(name), classAttendance(classAttendance), classTeacher(classTeacher)
{}

void Student::printStudentName(){
    std::cout << name << std::endl;
}

void Student::printAttendance(){
    std::cout << attendance << std::endl;
}

void Course::toString(){
    std::cout << "Name of the class: " << name << std::endl;
    std::cout << "Name of the student: ";
    classAttendance.printStudentName();
    std::cout << "Attendance: ";
    classAttendance.printAttendance();
    std::cout << "Course teacher name: ";
    classTeacher.printTeacherName();
}

void Teacher::printTeacherName(){
    std::cout << name << std::endl;
}

