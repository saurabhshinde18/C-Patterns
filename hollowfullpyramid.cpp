#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int row = 0; row <= n; row++) {
        for (int space = 0; space < n - row; space++) {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col++) {
            if (row == n || col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

