#ifndef Node_H
#define Node_H

class Node {
public:
  Node(int Key);
  ~Node();
  int Key;
  Node *next;
};

#endif // !Node
