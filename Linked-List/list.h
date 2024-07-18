#include "node.h"

#ifndef List_H
#define List_H

class List {
public:
  List();
  int getSize();
  bool isEmpty();
  int valueAt(int index);
  void pushFront(int value);
  int popFront();
  void pushBack(int value);
  int popBack();
  int front();
  int back();
  void insert(int index, int value);
  void erase(int index);
  void reverse();
  void removeValue(int value);
  ~List();

private:
  int size;
  Node *head;
  Node *tail;
};

#endif // !List_H
