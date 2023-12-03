#include "lab4.hh"
#include <iostream>

using namespace std;

EngBut::EngBut(int hurtver, int huvaari){

    number = hurtver;
    denominator = huvaari;
}

istream& operator>>(istream& in, EngBut &object){

    cin >> object.number >> object.denominator;
    return cin;
}

ostream& operator<<(ostream& out, const EngBut& object){

    cout << object.number << '/' << object.denominator;
    return cout;
}

int EngBut::gcd(int a, int b){

    int result = abs(min(a, b));
    while(result > 0){
        if (a % result == 0 && b % result == 0){
            break;
        }
        result--;
    }
    return result;
}

void EngBut::refactor(int& re_hurtver, int& re_huvaari){

    simplifier = gcd(re_hurtver, re_huvaari);

    re_hurtver = re_hurtver / simplifier;
    re_huvaari = re_huvaari / simplifier;
}

EngBut EngBut::operator+(const EngBut& object){

    int hurtver = (number * object.denominator) + (denominator * object.number);
    int huvaari = denominator * object.denominator;

    refactor(hurtver, huvaari);
    
    return EngBut(hurtver, huvaari);
}


EngBut EngBut::operator-(const EngBut &object){

    int hurtver = (number * object.denominator) - (denominator * object.number);
    int huvaari = denominator * object.denominator;

    refactor(hurtver, huvaari);
    
    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator*(const EngBut &object){

    int hurtver = number * object.number;
    int huvaari = denominator * object.denominator;

    refactor(hurtver, huvaari);

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator/(const EngBut &object){

    int hurtver = number * object.denominator;
    int huvaari = denominator * object.number;

    refactor(hurtver, huvaari);

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator+(const int integer){

    int hurtver = number + (denominator * integer);
    int huvaari = denominator;

    refactor(hurtver, huvaari);

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator-(const int integer){

    int hurtver = number - (denominator * integer);
    int huvaari = denominator;

    refactor(hurtver, huvaari);

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator*(const int integer){

    int hurtver = number * integer;
    int huvaari = denominator;

    refactor(hurtver, huvaari);

    return EngBut(hurtver, huvaari);
}

EngBut EngBut::operator/(const int integer){
    if(integer == 0){
        throw std::invalid_argument("Division by zero is not allowed");
    }
    int hurtver = number;
    int huvaari = denominator * integer;

    refactor(hurtver, huvaari);

    return EngBut(hurtver, huvaari);
}