#include <iostream>
using namespace std;

class Base1 {
    public:
    void display() {
    cout << "Base1 class display function" <<endl;
    }
};

class Base2 {
    public:
    void show() {
    cout << "Base2 class show function" << endl;
    }
};

class Derived : public Base1, public Base2 {
    public:
    void print() {
    cout << "Derived class print function" << endl;
    }
};


int main() {
    Derived obj;
    obj.display(); // Base1 class function
    obj.show();    // Base2 class function
    obj.print();   // Derived class function
    return 0;
}
