#include "vector.h"
#include <cmath>
#include <iostream>

using namespace std;

const int SIZE = 5;

void testPushAt(Vector&);
void testPrepend(Vector&);
void poppingTest(Vector&);
void pushingTest(Vector&);
void deleteTest(Vector&);
void removeTest(Vector&);
void findTest(Vector&, int);

int main(int argc, char* argv[])
{
    Vector testVector;

    testPushAt(testVector);

    testPrepend(testVector);

    poppingTest(testVector);

    pushingTest(testVector);

    deleteTest(testVector);

    removeTest(testVector);

    findTest(testVector, -1);

    return 0;
}

void testPushAt(Vector& test)
{
    cout << "--------------Push At Begin----------------------" << endl;
    for (int i = 0; i < 12; i++) {
        test.insert(i, i);
    }

    for (int i = 0; i < test.getCapacity(); i++) {
        cout << "Vector at " << i << " : " << test.at(i) << endl;
    }
    cout << "--------------Push At End----------------------" << endl;
}

void testPrepend(Vector& test)
{
    cout << "--------------Prepend Begin----------------------" << endl;
    test.prepend(97);
    test.prepend(98);
    test.prepend(99);
    test.prepend(100);

    for (int i = 0; i < test.getCapacity(); i++) {
        cout << "Vector at " << i << " : " << test.at(i) << endl;
    }
    cout << "--------------Prepend End----------------------" << endl;
}

void poppingTest(Vector& test)
{
    cout << "--------------Popping Begin----------------------" << endl;
    cout << "Popped from Vector value : " << test.pop() << endl;
    cout << "Popped from Vector value : " << test.pop() << endl;
    cout << "Popped from Vector value : " << test.pop() << endl;
    cout << "Popped from Vector value : " << test.pop() << endl;
    cout << "Popped from Vector value : " << test.pop() << endl;
    cout << "Popped from Vector value : " << test.pop() << endl;
    for (int i = 0; i < test.getCapacity(); i++) {
        cout << "Vector at " << i << " : " << test.at(i) << endl;
    }
    cout << "--------------Popping End-----------------------" << endl;
}

void pushingTest(Vector& test)
{
    cout << "--------------Pushing Begin----------------------" << endl;
    test.push(1);
    test.push(2);
    test.push(3);
    test.push(5);
    test.push(9);
    for (int i = 0; i < test.getCapacity(); i++) {
        cout << "Vector at " << i << " : " << test.at(i) << endl;
    }
    cout << "--------------Pushing End----------------------" << endl;
}

void deleteTest(Vector& test)
{
    cout << "--------------Delete at Index Begin----------------------" << endl;

    test.deleteIdx(14);
    for (int i = 0; i < test.getCapacity(); i++) {
        cout << "Vector at " << i << " : " << test.at(i) << endl;
    }
    cout << "--------------Delete at Index End----------------------" << endl;
}

void removeTest(Vector& test)
{
    cout << "--------------Remove Begin----------------------" << endl;

    test.remove(1);
    for (int i = 0; i < test.getCapacity(); i++) {
        cout << "Vector at " << i << " : " << test.at(i) << endl;
    }
    cout << "--------------Delete End----------------------" << endl;
}

void findTest(Vector& test, int value)
{
    cout << "--------------Find Begin----------------------" << endl;

    int idx = test.find(value);
    cout << "Value : " << value << "  found at : " << idx << endl;
    cout << "--------------Find End----------------------" << endl;
}
