#ifndef LAB3_HH
#define LAB3_HH

template <typename T>
class Fifo{
    public:
        Fifo(int);
        ~Fifo();
        void write(T);
        T read();
        int nitems();
    T* array;
    int front;
    int back;
    int count;
    int capacity;
};




#endif