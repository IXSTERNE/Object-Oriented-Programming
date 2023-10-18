#include "lab3.hh"
#include <iostream>
using namespace std;


Fifo::Fifo(int n){
    array = new char[n];
    front = 0;
    back = 0;
    count = 0;
    capacity = n;
}


Fifo::Fifo(const Fifo& original)
{   
    capacity = original.capacity;
    front = original.front;
    back = original.back;
    count = original.count;
    
    array = new char[capacity];
    cout << "Copy constructor activated" << endl;
    for(int i = 0; i < capacity; i++){
        array[i] = original.array[i];
    }
}


Fifo::~Fifo(){
    delete[] array;
    cout << "Destructor activated" << endl;
}


void Fifo::write(char c){
    if(count < capacity){
        array[back] = c;
        back = (back + 1) % capacity;
        count++;
    }
    else{
        cout << "Array is full" << endl;
    }
}


char Fifo::read(){
    if(count > 0){
        char c = array[front];
        front = (front + 1) % capacity;
        count--;
        return c;
    }
    else{
        cout << "Array is empty" << endl;
        return '\0';
    }
}


int Fifo::nitems(){
    return count;
}



