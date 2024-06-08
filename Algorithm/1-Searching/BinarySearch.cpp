#include <iostream> 
using namespace std;

int main()
{
    int a[100], n, low, mid, high, ele, i;
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "enter the elements in sorted form :";
        cin >> a[i];
    }

    // sort(a,a+n);

    low = 0;
    high = n - 1;
    cout << "enter the element you want to search :";
    cin >> ele;
    while (low <= high){
        mid = (low + high) / 2;
        if (ele == a[mid]){
            cout << "element found at location " << mid + 1 << endl;
            exit(0);
        }

        else if (a[mid] > ele)
            high = mid - 1;
        
        else if (a[mid] < ele)
            low = mid + 1;
    }
    cout << "element not found.";
    return 0;
}
// time complexity of Binary search is : O(log(n))