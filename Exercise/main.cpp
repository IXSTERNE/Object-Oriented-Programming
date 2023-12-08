#include <iostream>
#include <string>
#include "header.hh"


int main(){

    Teacher john("John");
    Course math("Mathematics", john);
    Student kate("Kate", "Absent", math);

    Teacher desmond("John");
    Course math("Mathematics", john);
    Student alvin("Alvin", "Present", math);

    kate.print();
    alvin.print();

    return 0;
}