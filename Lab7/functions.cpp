#include <iostream>
#include <course.hh>
#include <teacher.hh>
#include <student.hh>
#include <vector>

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

void Course::registerStudent(Student mkut_stud){
    studentList.push_back(mkut_stud);
}

void Course::print(){
    cout << "Hello world!" << endl;
}

int Course::stud_num(){
    return courseCapacity;
}

void Course::kick(){

}

int Course::getStudent(int index){

}

int Course::getId(){

}