#include "list.h"
#include <iostream>

using namespace std;

void testPushFront()
{
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(10);
    linkedListTest.pushFront(20);
    linkedListTest.pushFront(6);

    cout << "List Size : " << linkedListTest.getSize() << endl;

    while (linkedListTest.head) {
        cout << linkedListTest.head->Key << endl;
        linkedListTest.head = linkedListTest.head->next;
    }
}

int main(int argc, char* argv[])
{
    testPushFront();
    return 0;
}
