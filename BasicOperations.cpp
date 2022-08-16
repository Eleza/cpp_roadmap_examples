#include "BasicOperations.hpp"

#include <iostream>

using namespace std;

void border() {
    cout << "------------------------------" << endl;
}

void addition() {
    border();
    cout << "Addition:" << endl;
    cout << "5 + 6 = " << 5 + 6 << endl;
}

void substruction() {
    border();
    cout << "Substruction:" << endl;
    cout << "22.3 - 8 = " << 22.3 - 8 << endl;
}

void multiplication() {
    border();
    cout << "Multiplication:" << endl;
    cout << "2.5 * 3.5 = " << 2.5 * 3.5 << endl;
}

void division() {
    border();
    cout << "Division:" << endl;
    cout << "8.0 / 2.5 = " << 8.0 / 2.5 << endl;
}

void modulus() {
    border();
    cout << "Modulus:" << endl;
    cout << "2.5 * 3.2 = " << 2.5 * 3.2 << endl;
}

void increment() {
    border();
    cout << "Increment:" << endl;
    cout << "Let i = 1" << endl;
    int i = 1;
    cout << "i++ = " << i++ << ", after operation i = " << i << endl;
    i = 1;
    cout << "++i = " << ++i << ", after operation i = " << i << endl;
}

void decrement() {
    border();
    cout << "Decrement:" << endl;
    cout << "Let i = 5" << endl;
    int i = 5;
    cout << "i-- = " << i-- << ", after operation i = " << i << endl;
    i = 5;
    cout << "--i = " << --i << ", after operation i = " << i << endl;
}

void shiftRight() {
    border();
    cout << "Shift right" << endl;
    int a = 8 >> 3;
    cout << "8 >> 3 = " << a << endl;
}

void shiftLeft() {
    border();
    cout << "Shift left" << endl;
    int a = 2 << 3;
    cout << "2 << 3 = " << a << endl;
}

void runArithmeticOperations() {
    addition();
    substruction();
    multiplication();
    division();
    increment();
    decrement();
    shiftLeft();
    shiftRight();
}

void runAssignmentOperations() {

}

void runLogicalOperations() {

}

void runLoopsOperations() {

}

void runBitwiseOperations() {

}
