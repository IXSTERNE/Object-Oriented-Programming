#include "lab3.hh"
#include <iostream>
using namespace std;

// class Fifo{
//     int *array;
//     int front;
//     int back;
// };

Fifo::Fifo(int n){
    array = new char[n];
    front = 0;
    back = 0;
    count = 0;
}

Fifo::~Fifo(){
    delete[] array;
    cout << "Destructor activated" << endl;
}

void Fifo::write(char c){
    array[back] = c;
    back++;
    count++;
}

char Fifo::read(){
    cout << array[front] << endl;
}

int Fifo::nitems(){
    return count;
}



