#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Student{
    public:
        Student(string, string, int studentId, const Course& takenCourse);
        int getStudentId() const;
        string getStudentStatus() const;
    protected:
        string attendanceStatus;
        string studentName;
        int studentId;
        Course takenCourse;
};

class Teacher{
    public:
        Teacher(string);
    private:
        string teacherName;
};

class Course{
    public:
        Course(string, const Teacher& courseTeacher);
        void checkStudentAttendance(const Student& student);
    private:
        string courseName;
        Teacher courseTeacher;
        vector<Student> students;
        map<int, string> attendance;
};

#endif