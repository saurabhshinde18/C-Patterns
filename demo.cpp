#include<iostream>
using namespace std;

int sumeven(int n){
    int sum=0;
    for(int i =0;i<n;i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of even numbers is "<< sum<<endl;
}
int main(){
    int n ;
    cout<< "enter how many numbers " <<endl;
    cin >> n;
    sumeven(n);
}