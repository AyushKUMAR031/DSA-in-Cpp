#include <iostream>
using namespace std;

//calloc, malloc, realloc
//array = (int*)malloc(size*sizeof(int)); - garbage Values is stored now
//array = (int*)calloc(size, sizeof(int)); - 0 is stored now
//array = (int*)realloc(array, newSize * sizeof(int)); - resize the array
// free(array); - freeing RAM by deallocation

int main() {
    int* array;
    int size = 5;

    // Allocate memory
    array = (int*)malloc(size * sizeof(int));
    if (array == NULL) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    // Initialize and print array
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
        cout << array[i] << " ";
    }
    cout << endl;

    // Resize the array
    int newSize = 10;
    array = (int*)realloc(array, newSize * sizeof(int));
    if (array == NULL) {
        cout << "Memory reallocation failed" << endl;
        return 1;
    }

    // Initialize the new elements and print array
    for (int i = size; i < newSize; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < newSize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Free the memory
    free(array);

    return 0;
}
