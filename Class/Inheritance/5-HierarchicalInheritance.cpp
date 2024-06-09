#include <iostream>
using namespace std;

class Base {
    public:
    void display() {
    cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base {
    public:
    void show() {
    cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base {
    public:
    void print() {
    cout << "Derived2 class print function" << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    obj1.display(); // Base class function
    obj1.show();   // Derived1 class function
    obj2.display(); // Base class function
    obj2.print();   // Derived2 class function
    return 0;
}


