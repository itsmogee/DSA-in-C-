#include "queue.h"
#include <iostream>

using namespace std;

void testEnqueue() {
  cout << endl << "----------- Enqueue Test --------" << endl;
  Queue_List myQueue;
  for (int i = 0; i < 5; i++) {
    cout << "Enqueue : " << i << " to the queue" << endl;
    myQueue.Enqueue(i);
    myQueue.print();
  }
  cout << "Final queue structure : " << endl;
  myQueue.print();
  cout << "Is List Empty ? " << myQueue.isEmpty() << endl;
  cout << "----------- End Enqueue Test --------" << endl;
}

void testDequeue() {
  cout << endl << "----------- Dequeue Test --------" << endl;
  Queue_List myQueue;
  for (int i = 0; i < 8; i++) {
    if (i % 3 == 0 && i != 0) {
      cout << "Dequeue : ";
      cout << myQueue.Dequeue() << endl;
      myQueue.print();
      continue;
    }
    cout << "Enqueue : " << i << " to the queue" << endl;
    myQueue.Enqueue(i);
    myQueue.print();
  }
  while (!myQueue.isEmpty() > 0) {
    cout << "Dequeue : ";
    cout << myQueue.Dequeue() << endl;
  }
  myQueue.print();
  cout << "Is List Empty ? " << myQueue.isEmpty() << endl;
  cout << "----------- End Enqueue Test --------" << endl;
}

int main(int argc, char *argv[]) {
  testEnqueue();
  testDequeue();
  return 0;
}
