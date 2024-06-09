#include <iostream>
using namespace std;

class Base {
    public:
    void display() {
        cout << "Base class display function" <<endl:
    }
};

class Intermediate : public Base {
    public:
    void show() {
        cout << "Intermediate class show function" <<endl;
    }
};

class Derived : public Intermediate {
    public:
    void print() {
        cout << "Derived class print function" << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Base class function
    obj.show();    // Intermediate class function
    obj.print();   // Derived class function


    return 0;
}