#include "queue.h"

Queue_List::Queue_List() {}

void Queue_List::Enqueue(int value) { this->queue.pushBack(value); }

int Queue_List::Dequeue() {
  if (!this->queue.isEmpty()) {
    return this->queue.popFront();
  }
  return -9999;
}

bool Queue_List::isEmpty() {
  if (this->queue.isEmpty()) {
    return true;
  }
  return false;
}

void Queue_List::print() {
  if (!this->queue.isEmpty()) {
    this->queue.print();
  }
}

Queue_List::~Queue_List() {}
