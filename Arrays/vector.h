#ifndef Vector_H
#define Vector_H

class Vector {
public:
    Vector(int size = 16);
    ~Vector();
    int getSize();
    int getCapacity();
    bool isEmpty();
    int at(int);
    void push(int);
    void insert(int index, int item);
    void prepend(int item);
    int pop();
    void deleteIdx(int index);
    void remove(int item);
    int find(int item);
    void resize(int new_capacity);

private:
    int size = 0;
    int capacity = 0;
    int* vector_array;
};
#endif // !Vector_H
