#include "lab5.hh"
#include <iostream>


using namespace std;

int main()
{
        Fifo<int> fi(3);
        Fifo<char> fc(3);

        fi.write(3);
        fi.write(5);
        fi.write(7);
        fc.write('a');
        fc.write('b');
        fc.write('c');
        cout<< fi.read() << endl; // 3
        cout<< fc.read() << endl; // a

        cout<< "The integer array has \"" << fi.nitems() << "\"" << " items left" << endl;
        cout<< "The character array has \"" << fc.nitems() << "\"" << " items left" << endl;

        return 0;
}
