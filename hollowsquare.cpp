 #include<iostream>
 using namespace std;


 int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        if(row==0 || row==n-1){
            for(int col=0;col<n;col++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int spaces=0;spaces<n-2;spaces++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
 }