#include "queueArray.h"
#include <iostream>

using namespace std;

Queue_Array::Queue_Array(int size)
{
    this->queue = new int[size];
    this->capacity = size;
    this->write = 0;
    this->read = 0;
}

int Queue_Array::Front()
{
    // Front of Queue is the last item in array
    if (this->write - 1 >= 0)
        return this->queue[this->write - 1];
    return this->queue[this->capacity - 1];
}

int Queue_Array::Rear()
{
    // Back of Queue is the first item
    return this->queue[this->read];
}

void Queue_Array::Enqueue(int value)
{
}

int Queue_Array::Dequeue()
{
}

void Queue_Array::print()
{
}

bool Queue_Array::isEmpty()
{
}

Queue_Array::~Queue_Array()
{
    delete[] this->queue;
}
