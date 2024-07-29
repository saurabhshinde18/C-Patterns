#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper part of the diamond
    for (int row = 0; row < n; row++) {
        // Printing spaces
        for (int col = 0; col < n - row - 1; col++) {
            cout << " ";
        }
        // Printing stars
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int row = 0; row < n - 1; row++) {
        // Printing spaces
        for (int col = 0; col < row + 1; col++) {
            cout << " ";
        }
        // Printing stars
        for (int col = 0; col < 2 * (n - row - 1) - 1; col++) {
            if (col == 0 || col == 2 * (n - row - 1) - 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
