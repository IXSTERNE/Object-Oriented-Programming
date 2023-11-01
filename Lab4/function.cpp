#include "lab4.hh"
#include <iostream>

using namespace std;

EngBut::EngBut(int hurtver, int huvaari){
    number = hurtver;
    denominator = huvaari;
}

istream& operator>>(istream& cin, EngBut& object){
    cin >> object.number >> object.denominator;
    return cin;
}

ostream& operator<<(ostream& cout, EngBut& object){
    cout << object.number << "/" << object.denominator;
    return cout;
}

