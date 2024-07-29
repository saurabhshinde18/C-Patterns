#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = n + n - 1; // Initialize k to the width of the pattern

    for(int i = 0; i < n; i++){
        int c = 1;
        for(int j = 0; j < k; j++){
            if(j < n - i - 1){
                cout << " ";
            }
            else if(j < n + i){
                cout << c;
                if (j < n - 1) {
                    c++;
                } else {
                    c--;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
