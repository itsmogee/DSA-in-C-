#include "node.h"

Node::Node(int Key) {
  this->Key = Key;
  this->next = nullptr;
}

Node::~Node() {
  this->Key = 0;
  this->next = nullptr;
}
