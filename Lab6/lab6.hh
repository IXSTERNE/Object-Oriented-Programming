#include <iostream>
#include <cmath>

class Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
    protected:
        double pi = M_PI;
        // protected : variables cannot be accessed from 
        // outside the class but possible to access it via inheritance
        // private : variables cannot be accessed from out of the class
};

class Rectangle : public Shape{
    public:
        Rectangle(double, double);
        double area();
        double perimeter();
    private:
        double a;
        double b;
};

class Triangle : public Shape{
    public:
        Triangle(double, double, double);
        double area();
        double perimeter();
    private:
        double a;
        double b;
        double c;
        double semi_p;
};

class Circle : public Shape{
    public:
        Circle(double);
        double area();
        double perimeter();
    private:
        double r;
};