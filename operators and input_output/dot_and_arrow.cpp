#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student s1;
    s1.name = "John";

    cout << "Using dot: " << s1.name << endl;

    Student *ptr = &s1;
    cout << "Using arrow: " << ptr->name << endl;

    return 0;
}