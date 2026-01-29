#include<iostream>
using namespace std;

int main() {
    for(int i=5;i>=1;i--){
        for(int j=i;j<=5;j++){
         cout<<"*"<<" ";
        }
        for(int k=5;k<=1;k--) {
        cout<<" ";
        }
         cout<<endl;
    }
    for(int j=1;j<=5;j++){
     for(int l=1;l<=5-j;l++){
            cout<<"*"<<" ";
        }cout<<endl;
    }
};