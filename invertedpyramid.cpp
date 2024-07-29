#include<iostream>
using namespace std;

int main(){
    for(int row = 6; row > 0; row--){
        for(int col = row; col > 0; col--){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
