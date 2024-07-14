#include "vector.h"
#include <iostream>

using namespace std;

Vector::Vector(int size)
{
    this->vector_array = new int[size];
    this->capacity = size;
}

Vector::~Vector()
{
    delete[] this->vector_array;
    this->size = 0;
    this->capacity = 0;
}

int Vector::at(int index)
{
    if (index >= this->size) {
        return -1;
    }
    return *(this->vector_array + index);
}

int Vector::getSize()
{
    return this->size;
}

int Vector::getCapacity()
{
    return this->capacity;
}

bool Vector::isEmpty()
{
    if (this->size == 0) {
        return true;
    }
    return false;
}

void Vector::push(int item)
{
    if (this->size < this->capacity) {
        *(this->vector_array + this->size) = item;
        this->size += 1;
    } else {
        cout << "------------------------------------" << endl;
        cout << "Capacity is full : " << this->capacity << endl;
        this->capacity *= 2;
        cout << "Capacity is now doubled : " << this->capacity << endl;
        cout << "------------------------------------" << endl;

        int* ptr = new int[this->capacity];

        for (int i = 0; i < this->size; i++) {
            *(ptr + i) = *(this->vector_array + i);
        }

        delete[] this->vector_array;
        this->vector_array = ptr;
        *(this->vector_array + this->size) = item;
        this->size += 1;
    }
}

void Vector::insert(int index, int item)
{
    cout << "Inserting value of : " << item << " at index : " << index << endl;
    if (index >= this->size) {
        this->push(item);
    } else {
        // Shift all index values after the index to the right
        // Resize handled by push

        // Replace at index
        // Shift remaining to the right
        int shiftSize = this->size - index; // Number of elements to shift
        this->size = index; // New size begins at index
        int oldValue = this->vector_array[index]; // Previous index values placeholder
        this->vector_array[index] = item; // Replace the first item
        this->size += 1;

        for (int i = index + 1; i < shiftSize + index + 1; i++) {
            int tempValue = this->vector_array[i];
            this->push(oldValue);
            oldValue = tempValue;
        }
    }

    return;
}

void Vector::prepend(int item)
{
    this->insert(0, item);
}

int Vector::pop()
{
    if (this->size > 0) {
        int removedValue = this->vector_array[this->size - 1];
        this->vector_array[this->size - 1] = -1;
        this->size -= 1;
        return removedValue;
    }
    return -1;
}

void Vector::deleteIdx(int index)
{
    // Delete at index and shift everything left once
    if (index >= this->size || index < 0) {
        return;
    }

    // Shift everything left by one then pop at the end
    int shift_size = this->size - index;
    int oldValue = this->vector_array[this->size - 1];

    for (int i = this->size - 2; i >= index; i--) {
        int tempValue = oldValue;
        oldValue = this->vector_array[i];
        this->vector_array[i] = tempValue;
    }
    this->pop();
}

void Vector::remove(int item)
{
    // Looks for value and removes it index holding it
    // Duplicate entries are also removed.
    for (int i = 0; i < this->size; i++) {
        if (item == this->vector_array[i]) {
            this->deleteIdx(i);
        }
    }
    return;
}

int Vector::find(int item)
{
    for (int i = 0; i < this->size; i++) {
        if (item == this->vector_array[i]) {
            cout << item << endl;
            cout << this->vector_array[i] << endl;
            return i;
        }
    }
    return -1;
}

void Vector::resize(int new_capacity)
{
}
