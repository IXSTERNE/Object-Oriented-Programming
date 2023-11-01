#include "lab4.hh"
#include <iostream>

using namespace std;

EngBut::EngBut(int hurtver, int huvaari){
    number = hurtver;
    denominator = huvaari;
}

istream& operator>>(istream& in, EngBut& object){
    cin >> object.number >> object.denominator;
    return in;
}

ostream& operator<<(ostream& out, const EngBut& object){
    cout << object.number << "/ "<< object.denominator;
    return out;
}

EngBut EngBut::operator+(EngBut const& object){
    int hurtver = number * object.denominator + denominator * object.number;
    int huvaari = denominator * object.denominator;
    
    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator-(EngBut const& object){
    int hurtver = number * object.denominator - denominator * object.number;
    int huvaari = denominator * object.denominator;

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator*(EngBut const& object){
    int hurtver = number * object.number;
    int huvaari = denominator * object.denominator;

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator/(EngBut const& object){
    int hurtver = number * object.denominator;
    int huvaari = denominator * object.number;

    return EngBut(hurtver, huvaari);
}
