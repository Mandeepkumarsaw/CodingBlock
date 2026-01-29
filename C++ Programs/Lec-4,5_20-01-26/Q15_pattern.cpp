#include<bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
  
 for(int i=1;i<=n;i++) {
    for(int j=3;j<=2*i;j++){
        cout<<"  ";
    }

    for(int j=1;j<=n-i+1;j++) {
        cout<<"* ";
    }cout<<endl;
  }

  for(int j=1;j<n;j++){
     for(int k=1;k<=2*n-j-j-2;k++){
        cout<<"  ";
     } 
     for(int l=0;l<=j;l++){
        cout<<"* ";
     }cout<<endl;  
 
    }
}