#include <iostream>
#include <string>
#include "header.hh"


Student::Student(std::string studentName, int studentId){
    this->studentName = studentName;
    this->studentId = studentId;
}

std::string Student::getName() const{
    return studentName;
}

int Student::getStudentId() const{
    return studentId;
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


