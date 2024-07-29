#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    // Upper part of the diamond
    for (int row = 0; row < n; row++) {
        for (int space = 0; space < n - row - 1; space++) {
            cout << " ";
        }
        for (int star = 0; star <= row; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int row = n - 1; row >= 0; row--) {
        for (int space = 0; space < n - row - 1; space++) {
            cout << " ";
        }
        for (int star = 0; star <= row; star++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
