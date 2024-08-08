#include "queue.h"
#include "queueArray.h"
#include <iostream>

using namespace std;

void testEnqueue()
{
    cout << endl
         << "----------- Enqueue Test --------" << endl;
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

void testDequeue()
{
    cout << endl
         << "----------- Dequeue Test --------" << endl;
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

void testQueue_Array()
{
    cout << endl
         << "----------- Enqueue Array Test --------" << endl;
    Queue_Array myQueue(5);
    cout << "Queue Empty ? " << myQueue.isEmpty() << endl;
    for (int i = 1; i < 7; i++) {
        cout << "Enqueue : " << i << " to the queue" << endl;
        myQueue.Enqueue(i);
        myQueue.print();
    }
    for (int i = 0; i < 4; i++) {
        cout << "Dequeue : " << myQueue.Dequeue() << endl;
        myQueue.print();
    }
    for (int i = 1; i < 5; i++) {
        cout << "Enqueue : " << i << " to the queue" << endl;
        myQueue.Enqueue(i);
        myQueue.print();
    }
    cout << endl
         << "Queue Empty ? " << myQueue.isEmpty() << endl;
}

int main(int argc, char* argv[])
{
    testEnqueue();
    testDequeue();
    testQueue_Array();
    return 0;
}
