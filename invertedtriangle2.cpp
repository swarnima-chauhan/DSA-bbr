#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number :";
    cin>>n;

    int count=1;
    for(int i=0;i<n;i++){
        
        //spaces
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
    
        //stars
        for(int j=0;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}