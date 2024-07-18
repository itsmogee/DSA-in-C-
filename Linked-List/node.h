#ifndef Node_H
#define Node_H

class Node {
public:
  Node(int Key);
  ~Node();

private:
  int Key;
  Node *next;
};

#endif // !Node
