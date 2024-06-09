#include <iostream>
using namespace std;
int main() {
    int* dynamicVar = new int; // Allocate memory on the heap
    *dynamicVar = 40;
    cout << "Dynamic Variable: " << *dynamicVar << endl;
    delete dynamicVar; // Deallocate memory

    // Allocating an array dynamically
    int* dynamicArray = new int[5];
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 10;
    }

    for (int i = 0; i < 5; ++i) {
        cout<<"Dynamic Array Element "<<i<<": "<<dynamicArray[i]<<endl;
    }
    
    delete[] dynamicArray; // Deallocate array memory

    return 0;

}