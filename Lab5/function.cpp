#include "lab5.hh"
#include <iostream>


using namespace std;

template <typename T>
Fifo<T>::Fifo(int n){
    array = new T[n];
    front = 0;
    back = 0;
    count = 0;
    capacity = n;
}

template <typename T>
Fifo<T>::~Fifo(){
    delete[] array;
    cout << "Destructor adctivated" << endl;
}

template <typename T>
void Fifo<T>::write(T t){
    if(count < capacity){
        array[back] = t;
        back = (back + 1) % capacity;
        count++;
    }
    else{
        cout << "Array is full" << endl;
    }

}

template <typename T>
T Fifo<T>::read(){
    if(count > 0){
        T c = array[front];
        front = (front + 1) % capacity;
        count--;
        return c;
    }
    else{
        cout << "Array is empty" << endl;
        return '\0';
    }
}

template <typename T>
int Fifo<T>::nitems(){
    return count;
}


