#include <iostream>
#include <string>
#include "header.hh"


int main(){
    Teacher john("John");
    Course math("Mathematics", john);
    Student kate("Kate", "Present", 1, math);

    

    return 0;
}