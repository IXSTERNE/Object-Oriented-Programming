#include <iostream>
#include "course.hh"
#include "teacher.hh"
#include "student.hh"
#include <vector>
#include <string>

using namespace std;

Student::Student(int studentId, string studentfName, string studentlName){
    this->studentId = studentId;
    this->studentfName = studentfName;
    this->studentlName = studentlName;
}

Teacher::Teacher(string teacherfName, string teacherlName, string teacherEmail){
    this->teacherfName = teacherfName;
    this->teacherlName = teacherlName;
    this->teacherEmail = teacherEmail;
}

Course::Course(string courseName, const Teacher& courseTeacher, int courseCapacity)
    :courseTeacher(courseTeacher)
{
    this->courseName = courseName;
    this->courseCapacity = courseCapacity;
}

int Student::getId() const{
    return studentId;
}

string Student::getFirstName() const{
    return studentfName;
}

string Student::getLastName() const{
    return studentlName;
}

void Course::registerStudent(Student mkut_stud){
    studentList.push_back(mkut_stud);
}

int Course::getCurrentCapacity(){
    return studentList.size();
}

int Course::getKickCapacity(){
    return kickList.size();
}

string Teacher::getTeacherfName() const{
    return teacherfName;
}

string Teacher::getTeacherlName() const{
    return teacherlName;
}

string Teacher::getTeacherEmail() const{
    return teacherEmail;
}

void Course::print(){
    cout << "Course Name: " << courseName 
    << "   Teacher: " << courseTeacher.getTeacherfName() << " "
    << courseTeacher.getTeacherlName() <<" " << "("
    << courseTeacher.getTeacherEmail() << ")" <<"   "
    << "Seat: "
    << courseCapacity << endl;

    std::cout <<"----------------------------------------------------------------------------------------" << endl;

    int enumerate = 1;
    for (const Student& student : studentList){
        cout << enumerate << ". "
        << "ID: " << student.getId()
        << ", First name: " << student.getFirstName()
        << ", Last name: " << student.getLastName() << endl;
        enumerate++;
    }
}

int Course::stud_num(){
    return courseCapacity;
}

Student Course::getStudent(int index){
    return studentList[index];
}

void Course::setKickList(Student studentList){
    kickList.push_back(studentList);
}

void Course::kick(int id){
}