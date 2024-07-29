#include<iostream>
using namespace std;

int main(){
    for(int rows=0;rows<3;rows++){
        if(rows==0 || rows==2){
            for(int i=0;i<5;i++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int col=0;col<3;col++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
}