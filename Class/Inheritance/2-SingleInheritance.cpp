#include <iostream>
using namespace std;

//Base class
class Base {
    public:
        void display() {
            cout << "Base class display function" << endl;
        }
};

//Derived class 
class Derived : public Base {
    public:
        void show() {
            cout << "Derived class show function" << endl;
        }
};

int main() {
    Derived obj;
    obj.display(); // Base class function
    obj. show(); // Derived class function

    return 0;
}

//It is a Single Inheritance