#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // printing pattern
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+n-i+j-1;
            cout<<ch<<" ";
            j++; 
        }
        cout<<endl;
        i++;
    }

    return 0;
}