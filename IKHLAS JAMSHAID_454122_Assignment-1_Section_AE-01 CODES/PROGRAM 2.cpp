#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter length of your String: ";
    cin >> n;
    cout << endl;

    char string[n + 1];

    for(int i = 0; i < n; i++) {
        cout << "Enter Character " << i + 1 << ": ";
        cin >> string[i];
        cout << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n;) {
            if (string[i] == string[j]) {
                for (int k = j; k < n; k++) {
                    string[k] = string[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    
    cout << "String after removing duplicate Characters: " << endl;
    for (int j = 0; j < n; j++)
        cout << string[j];

    return 0;
}