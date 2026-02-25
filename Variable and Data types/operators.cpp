#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    int a = 10, b = 3;

    //  Arithmetic Operators
    cout << "Arithmetic Operators\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    //  Relational Operators
    cout << "\nRelational Operators\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    //  Logical Operators
    cout << "\nLogical Operators\n";
    cout << "(a > 5 && b < 5) : " << (a > 5 && b < 5) << endl;
    cout << "(a > 5 || b > 5) : " << (a > 5 || b > 5) << endl;
    cout << "!(a > b) : " << !(a > b) << endl;

    //  Assignment Operators
    int c = a;
    c += 5;
    cout << "\nAssignment Operator (c += 5): " << c << endl;

    //  Bitwise Operators
    cout << "\nBitwise Operators\n";
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    //  Ternary Operator
    int max = (a > b) ? a : b;
    cout << "\nTernary Operator (max): " << max << endl;

    //  Pointer Operators
    int* ptr = &a;
    cout << "\nPointer Operators\n";
    cout << "Address of a: " << &a << endl;
    cout << "Value using pointer: " << *ptr << endl;

    //  sizeof Operator
    cout << "\nSize of int: " << sizeof(int) << " bytes" << endl;

    //  typeid Operator
    cout << "Type of a: " << typeid(a).name() << endl;

    
    return 0;
}
