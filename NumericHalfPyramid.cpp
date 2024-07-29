#include<iostream>
using namespace std;

int main(){
    int row;
    int n;
    cin>>n;
    for(row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
        if(col==0 || col==row){
            cout<<col+1;
        }
        else if(row==n-1){
            cout<<col+1;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}