#include <iostream>
using namespace std;

int main() {
    int a[6] = {11, 23, 69, -10, 420, 17};
    int temp, min, max;

    for (int i = 0; i < 5; ++i) {
        min = i; 
        for (int j = i + 1; j < 6; ++j) {
            if (a[j] > a[min]) {
            temp = a[j];
            a[j] = a[min];
            a[min] = temp;
            }
        }
    }
    cout << "Array in Descending Order: ";
    for (int i = 0; i < 6; ++i) {
        cout << a[i] << " ";
    }
     cout << endl;
     for (int i = 0; i < 5; ++i) {
        max = i; 
        for (int j = i + 1; j < 6; ++j) {
            if (a[j] < a[max]) {
            temp = a[j];
            a[j] = a[max];
            a[max] = temp;
            }
        }
    }
    cout << "Array in Accending Order: ";
    for (int i = 0; i < 6; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}