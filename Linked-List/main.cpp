#include "list.h"
#include <iostream>

using namespace std;

void testPushFront();

void testValueAt();

void testPopFront();

void testPushBack();

void testPopBack();

void testFront();

void testBack();

void testInsertAt();

int main(int argc, char* argv[])
{
    /*testPushFront();*/
    /*testValueAt();*/
    /*testPopFront();*/
    /*testPushBack();*/
    /*testPopBack();*/
    testFront();
    testBack();
    testInsertAt();
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

void testPushBack()
{
    cout << endl
         << " ------------------------------ Testing PushBack() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(223);
    linkedListTest.pushFront(33);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(28);

    cout << "List before pushing : " << endl;
    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << endl;
        temp = temp->next;
    }

    int popNumber;
    int value;
    cout << "List Size : " << linkedListTest.getSize() << endl;
    cout << "Input number of times to Push back : " << endl;
    cin >> popNumber;
    for (int i = 0; i < popNumber; i++) {
        cout << "Input number to Push back : " << endl;
        cin >> value;
        linkedListTest.pushBack(value);
        cout << "Pushed number is : " << value << endl;
    }
    cout << "List size after pushing : " << popNumber << " times : " << linkedListTest.getSize() << endl;

    temp = linkedListTest.head;
    cout << "Head == " << temp->Key << endl;
    cout << "Tail == " << linkedListTest.tail->Key << endl;
    while (temp) {
        cout << temp->Key << endl;
        temp = temp->next;
    }
}

void testPopBack()
{
    cout << endl
         << " ------------------------------ Testing PopBack() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(223);
    linkedListTest.pushFront(33);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(28);

    cout << "List before popping from back : " << endl;
    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << " , ";
        temp = temp->next;
    }

    int popNumber;
    cout << "List Size : " << linkedListTest.getSize() << endl;
    cout << "Input number of times to Pop from back : " << endl;
    cin >> popNumber;
    for (int i = 0; i < popNumber; i++) {
        int popNum = linkedListTest.popBack();
        cout << "Popped number is : " << popNum << endl;
    }
    cout << "List size after popping from back : " << popNumber << " times : " << linkedListTest.getSize() << endl;

    temp = linkedListTest.head;
    if (!temp) {
        cout << "Head == NULL" << endl;
        cout << "Tail == NULL" << endl;
    } else {
        cout << "Head == " << temp->Key << endl;
        cout << "Tail == " << linkedListTest.tail->Key << endl;
    }
    while (temp) {
        cout << temp->Key << " , ";
        temp = temp->next;
    }
}

void testFront()
{

    cout << endl
         << " ------------------------------ Testing Front() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(223);
    linkedListTest.pushFront(33);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(28);

    cout << "List : " << endl;
    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << " , ";
        temp = temp->next;
    }

    temp = linkedListTest.head;
    if (!temp) {
        cout << endl
             << "Head == NULL" << endl;
        cout << endl
             << "Tail == NULL" << endl;
    } else {
        cout << endl
             << "Head == " << linkedListTest.front() << endl;
        cout << "Tail == " << linkedListTest.back() << endl;
    }
}

void testBack()
{

    cout << endl
         << " ------------------------------ Testing Back() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(223);
    linkedListTest.pushFront(33);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(28);

    cout << "List : " << endl;
    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << " , ";
        temp = temp->next;
    }

    temp = linkedListTest.head;
    if (!temp) {
        cout << endl
             << "Head == NULL" << endl;
        cout << endl
             << "Tail == NULL" << endl;
    } else {
        cout << endl
             << "Back == " << linkedListTest.back() << endl;
        /*cout << "Tail == " << linkedListTest.tail->Key << endl;*/
    }
}

void testInsertAt()
{

    cout << endl
         << " ------------------------------ Testing Insert At() ------------------------------ " << endl;
    List linkedListTest;

    linkedListTest.pushFront(5);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(223);
    linkedListTest.pushFront(33);
    linkedListTest.pushFront(18);
    linkedListTest.pushFront(199);
    linkedListTest.pushFront(28);

    cout << "List : " << endl;
    Node* temp = linkedListTest.head;
    while (temp) {
        cout << temp->Key << " , ";
        temp = temp->next;
    }

    linkedListTest.insert(0, 99);
    linkedListTest.insert(4, 999);
    linkedListTest.insert(9, 88);
    temp = linkedListTest.head;
    cout << endl
         << "List after insertions" << endl;
    while (temp) {
        cout << temp->Key << " , ";
        temp = temp->next;
    }
}
