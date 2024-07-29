#include<iostream>
using namespace std;


int main(){

    for(int row=0;row<6;row++){

        for(int space=0;space<6-row+1;space++){
            cout<<" ";
        }
        for(int star=0;star<row;star++){
            cout<<" *";
        }
        cout<<endl;
    }
}