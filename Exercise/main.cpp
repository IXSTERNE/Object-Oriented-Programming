#include <iostream>
#include <string>
#include "header.hh"


int main(){
    Student kate("Kate", "Absent");
    Teacher john("John");
    Course Lekts1("Mathematics", kate, john);
    Lekts1.toString();

    Student desmond("Desmond", "Present");
    Teacher claire("Claire");
    Course Lekts1("Physics", desmond, claire);
    Lekts1.toString();

    return 0;
}