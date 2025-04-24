#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number :";
    cin>>n;

    for(int i=0;i<n;i++){
        if(i!=0){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
        }
        //stars
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}