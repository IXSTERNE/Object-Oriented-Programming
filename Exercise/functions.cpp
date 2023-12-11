#include <iostream>
#include <string>
#include "header.hh"


Student::Student(std::string studentName){
    this->studentName = studentName;
}

std::string Student::getName() const{
    return studentName;
}

Teacher::Teacher(std::string teacherName){
    this->teacherName = teacherName;
}

std::string Teacher::getName() const{
    return teacherName;
}

Course::Course(std::string courseName, const Teacher& courseTeacher)
    : courseTeacher(courseTeacher)
{
    this->courseName = courseName;
}

void Course::enrollStudent(const Student& student){
    students.push_back(student);
    attendance[student.getName()] = "Absent";
}

void Course::recordAttendance(const std::string& studentName, std::string status){
    
}

void Course::printAttendance() const{
    
}


