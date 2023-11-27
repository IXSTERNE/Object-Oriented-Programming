#ifndef LAB4_HH
#define LAB4_HH
#include <iostream>


class EngBut{
    public:
        EngBut(int hurtver = 1, int huvaari = 0);
        friend std::istream& operator>>(std::istream& in, EngBut& object);
        friend std::ostream& operator<<(std::ostream& out, const EngBut& object);
        EngBut operator+(const EngBut& object);
        EngBut operator-(const EngBut& object);
        EngBut operator*(const EngBut& object);
        EngBut operator/(const EngBut& object);
    int number;
    int denominator;
};

#endif
