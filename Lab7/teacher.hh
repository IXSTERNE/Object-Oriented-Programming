#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <vector>
#include <string>


class Teacher{
    public:
        Teacher(std::string, std::string, std::string);
        std::string getTeacherfName() const;
        std::string getTeacherlName() const;
        std::string getTeacherEmail() const;
    private:
        std::string teacherfName;
        std::string teacherlName;
        std::string teacherEmail;
};



#endif