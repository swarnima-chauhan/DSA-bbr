#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    
    for(int i=0;i<n;i++){
        //numbers
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }

        //stars
        for(int j=0;j<2*i;j++){
            cout<<"*";
        }

        //numbers
        for(int j=n-i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }


    return 0;
}