#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // printing pattern
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        int count=i;
        while(j<=i){
            cout<<count<<" ";
            j++;  
            count++;  
        }
        cout<<endl;
        i++;
    }

    return 0;
}