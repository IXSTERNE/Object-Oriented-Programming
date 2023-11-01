#ifndef LAB4_HH
#define LAB4_HH

using namespace std;

class EngBut{
    public:
        EngBut(int hurtver = 1, int huvaari = 0);
        friend istream& operator>>(istream& cin, const EngBut& object);
        friend ostream& operator<<(ostream& cout, EngBut& object);
        EngBut operator+(const EngBut& object);
        EngBut operator-(const EngBut& object);
        EngBut operator*(const EngBut& object);
        EngBut operator/(const EngBut& object);
    int number;
    int denominator;
};

#endif
