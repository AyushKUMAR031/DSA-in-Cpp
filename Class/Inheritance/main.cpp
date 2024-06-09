#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        //Constructor - default
        Car(string make, string model, int year)
            : make(make), model(model), year(year) {}

        // Member function to display car information
        void display() {
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }

    protected:
        string make;
        string model;
        int year;
};

class SportsCar : public Car {
    private :
        int FuelCapacity; //member of SportsCar

    public :
        //Constructor - default
        SportsCar(string make, string model, int year, int FuelCapacity)
            : Car(make, model, year), FuelCapacity(FuelCapacity) {}

        // Member function to display car information
        void display() {
            Car::display();
            cout << "Fuel Capacity: " << FuelCapacity << endl;
        }
};

int main() {
    Car car("Toyota", "Corolla", 2015);
    SportsCar sportsCar("Ferrari", "488 GTB", 2016, 90);

    cout << "Car Information" << endl;
    car.display();

    cout << "\nSports Car Information" << endl;
    sportsCar.display();

    return 0;
}