#include<iostream>

class RingBuffer{
    private:
    int* Data;
    int head = 0;
    int tail = 0;
    int m_size = 0;

    public:
    RingBuffer(int size){
        m_size = size;
        Data = new int[size];
    }
    ~RingBuffer(){
        delete [] Data;
    }

    void push(int value){
        Data[head] = value;
        head = (head + 1) % m_size;
    }

    int pop(){
        int value = Data[tail];
        tail = (tail + 1) % m_size;
    }

    void print(){
        int i = tail;
        std::cout<< "buffer content: ";
        while (i != head){
            std::cout << Data[i] << " ";
        }
        std::cout << std::endl;
    }
};