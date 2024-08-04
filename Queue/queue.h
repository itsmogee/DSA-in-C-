#include "../Linked-List/list.h"
#ifndef QUEUE_H
#define QUEUE_H

class Queue_List {
public:
  List queue;
  Queue_List();
  void Enqueue(int value);
  int Dequeue();
  bool isEmpty();
  void print();
  ~Queue_List();

private:
};

#endif // !QUEUE
