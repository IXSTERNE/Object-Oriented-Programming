#include <iostream>
#include <string>
#include "header.hh"

using namespace std;

Student::Student(string studentName, string attendanceStatus, int studentId, const Course& takenCourse)
    : takenCourse(takenCourse)
{
    this->studentName = studentName;
    this->studentId = studentId;
    this->attendanceStatus = attendanceStatus;
}


int Student::getStudentId() const{
    return studentId;
}

string Student::getStudentStatus() const{
    return attendanceStatus;
}

Teacher::Teacher(string teacherName){
    this->teacherName = teacherName;
}

Course::Course(string courseName, const Teacher& courseTeacher)
    : courseTeacher(courseTeacher)
{
    this->courseName = courseName;
}

void Course::checkStudentAttendance(const Student& student){
    students.push_back(student);
    attendance.insert(pair<int, string>(student.getStudentId(), student.getStudentStatus()));
    attendance.insert(pair<int, string>(student.studentId, student.attendanceStatus));
}





