#include "list.h"
#include <iostream>

using namespace std;

void testPushFront();

void testValueAt();

void testPopFront();

int main(int argc, char* argv[])
{
    testPushFront();
    testValueAt();
    testPopFront();
    return 0;
}

void testPushFront()
{

    cout << endl
         << " ------------------------------ Testing PushFront() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(10);
    linkedListTest.pushFront(20);
    linkedListTest.pushFront(6);

    cout << "List Size : " << linkedListTest.getSize() << endl;

    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << endl;
        temp = temp->next;
    }
}

void testValueAt()
{

    cout << endl
         << " ------------------------------ Testing ValueAt() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(10);
    linkedListTest.pushFront(20);
    linkedListTest.pushFront(6);

    int index;
    cout << "List Size : " << linkedListTest.getSize() << endl;
    cout << "Input a index value " << endl;
    cin >> index;
    cout << endl
         << "Value at : " << index << " = " << linkedListTest.valueAt(index) << endl;
}

void testPopFront()
{
    cout << endl
         << " ------------------------------ Testing PopFront() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(223);
    linkedListTest.pushFront(33);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(28);

    cout << "List before popping : " << endl;
    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << endl;
        temp = temp->next;
    }

    int popNumber;
    cout << "List Size : " << linkedListTest.getSize() << endl;
    cout << "Input number of times to Pop front : " << endl;
    cin >> popNumber;
    for (int i = 0; i < popNumber; i++) {
        int pop = linkedListTest.popFront();
        cout << "Popped number is : " << pop << endl;
    }
    cout << "List size after popping : " << popNumber << " times : " << linkedListTest.getSize() << endl;

    temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << endl;
        temp = temp->next;
    }
}
