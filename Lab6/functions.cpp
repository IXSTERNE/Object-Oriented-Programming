#include "lab6.hh"
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

Rectangle::Rectangle(double a, double b){
    this->a = a;
    this->b = b;
}

double Rectangle::area(){
    return a * b;
}

double Rectangle::perimeter(){
    return (a + b) * 2;
}

Triangle::Triangle(double a, double b, double c){
    this->a = a;
    this->b = b;
    this->c = c;
}

double Triangle::area(){
    double semi_p = (a + b + c) / 2;
    return sqrt(semi_p * (semi_p - a) * (semi_p - b) * (semi_p - c));
}

double Triangle::perimeter(){
    return a + b + c;
}

Circle::Circle(double r){
    this->r = r;
}

double Circle::area(){
    return pi * pow(r, 2);
}

double Circle::perimeter(){
    return 2 * pi * r;
}