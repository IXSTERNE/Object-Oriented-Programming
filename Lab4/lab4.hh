#ifndef LAB4_HH
#define LAB4_HH

class EngBut{
    public:
        EngBut(int hurtver = 1, int huvaari = 0);
        friend std::istream& operator>>(std::istream& cin, const EngBut& object);
        friend std::ostream& operator<<(std::ostream& cout, EngBut& object);
        EngBut operator+(EngBut const& object);
        EngBut operator-(EngBut const& object);
        EngBut operator*(EngBut const& object);
        EngBut operator/(EngBut const& object);
    int number;
    int denominator;

};

#endif
