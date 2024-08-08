#include "queueArray.h"
#include <iostream>
#include <ostream>

using namespace std;

Queue_Array::Queue_Array(int size)
{
    this->queue = new int[size];
    this->capacity = size;
    this->size = 0;
    this->write = 0;
    this->read = 0;
}

int Queue_Array::Front()
{
}

int Queue_Array::Rear()
{
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
