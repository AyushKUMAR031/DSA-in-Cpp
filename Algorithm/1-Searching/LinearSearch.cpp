#include <iostream>
using namespace std;

int main()
{
    int array[10], n, ele, i;
    cout << "Enter the number of elements to be entered in the array. :";
    cin >> n;

    for (i = 0; i < n; i++){
        cout << "enter the elements: ";
        cin >> array[i];
    }
    
    cout << "enter the element you want to search :";
    cin >> ele;

    for (i = 0; i < n; i++){
        if (array[i] == ele){
            break;
        }
    }
    
    if (i == n)
        cout << "Number is not found.";
    else
        cout << "the location of the elements is :" << i + 1;

    return 0;
}
// time complexity of linear search is : O(n)