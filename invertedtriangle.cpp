#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number :";
    cin>>n;

    for(int i=0;i<n;i++){
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}