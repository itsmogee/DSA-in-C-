#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

class Queue_Array {
public:
    int* queue;
    int capacity;
    int size;
    int read;
    int write;
    Queue_Array(int size);
    int Front();
    int Rear();
    void Enqueue(int value);
    int Dequeue();
    void print();
    bool isEmpty();
    ~Queue_Array();

private:
};

#endif // !QUEUE_ARRAY_H
