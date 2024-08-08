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
    // Check if theres space
    // Insert Value
    // Update write index
    // Check bounds

    // Cases where it is full
    int next = this->write + 1;
    if (next >= this->capacity) {
        next = 0;
    }
    if (next == this->read) {
        cout << "Queue is full. Cannot add : " << value << endl;
        return;
    }

    this->queue[this->write] = value;
    this->write += 1;
    if (this->write >= this->capacity) {
        this->write = 0;
    }
    return;
}

int Queue_Array::Dequeue()
{
    // Check if empty
    // Store value to remove in a variable
    // Replace value with placeholder or 0 = removed
    // Update read pointer
    if (this->write == this->read) {
        cout << "Queue is already empty, cannot dequeue " << endl;
        return -9999;
    }

    int temp = this->queue[this->read];
    this->queue[this->read] = 0;
    this->read += 1;

    if (this->read >= this->capacity) {
        this->read = 0;
    }

    if (this->read == this->write) {
        this->read = 0;
        this->write = 0;
    }

    return temp;
}

void Queue_Array::print()
{
    cout << "-----------------------------------" << endl;
    cout << "Front of Queue : " << Front() << endl;
    cout << "Rear of Queue : " << Rear() << endl;
    for (int i = 0; i < this->capacity; i++) {
        cout << this->queue[i];
    }
    cout << endl;
    cout << "-----------------------------------" << endl;
}

bool Queue_Array::isEmpty()
{
    return this->read == this->write;
}

Queue_Array::~Queue_Array()
{
    delete[] this->queue;
}
