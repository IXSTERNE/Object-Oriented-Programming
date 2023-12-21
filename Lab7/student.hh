#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student{
    public:
        Student(int = 0, std::string = "", std::string = "");
        int getId() const;
        std::string getFirstName() const;
        std::string getLastName() const;
    private:
        std::string studentfName;
        std::string studentlName;
        int studentId;
};

#endif