#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

class Student{
    public:
        Student(std::string, int studentId);
        std::string getName() const;
        int getStudentId() const;
    private:
        std::string studentName;
        int studentId;
};

class Teacher{
    public:
        Teacher(std::string);
        std::string getName() const;
    private:
        std::string teacherName;
};

class Course{
    public:
        Course(std::string, const Teacher& courseTeacher);
        void enrollStudent(const Student& student);
        void recordAttendance(const std::string& studentName, std::string status);
        void printAttendance() const;
    private:
        std::string courseName;
        std::string status;
        Teacher courseTeacher;
        std::vector<Student> students;
        std::map<std::string, int> attendance;
};

#endif