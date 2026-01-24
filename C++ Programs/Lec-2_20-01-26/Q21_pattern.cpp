#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=1;i<n;i++){
       for(int j=1;j<=i;j++){
        cout<<"*  ";
       }
      for(int l=0;l<=2*n-i-i-2;l++){
        cout<<"   ";
      }
      for(int k=1;k<=i;k++){
        cout<<"*  ";
      }
      cout<<endl;
    }
    for(int i=1;i<=2*n-1;i++){
        cout<<"*  ";
    }
}