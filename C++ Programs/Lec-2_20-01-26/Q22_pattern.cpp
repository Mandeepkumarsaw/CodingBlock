#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1;i<=2*n-1;i++){
        cout<<"*  ";
    }cout<<endl;

    for(int j=1;j<n;j++){
        for(int k=1;k<=n-j;k++){
            cout<<"*  ";
        }
        for(int l=1;l<=2*j-1;l++){
            cout<<"   ";
        }
        for(int m=1;m<=n-j;m++){
            cout<<"*  ";
        }
        
        cout<<endl;
    }
}