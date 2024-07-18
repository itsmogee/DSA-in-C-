#include "list.h"
#include <iostream>

using namespace std;

void testPushFront();

void testValueAt();

int main(int argc, char* argv[])
{
    testPushFront();
    testValueAt();
    return 0;
}

void testPushFront()
{
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
