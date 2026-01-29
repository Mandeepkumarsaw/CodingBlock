#include<iostream>
using namespace std;

int main(){
    int n=7;

 for(int i=1;i<=n/2;i++){
    for(int j=n/2;j<=n-i-1;j++){
        cout<<"*  ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<"   ";
    }
    for(int l=0;l<=n/2-i;l++){
        cout<<"*  ";
    }cout<<endl;
 }  
 for(int i=1;i<=n;i++){
    cout<<"   ";
 }cout<<endl;

 for(int j=1;j<=n/2;j++){
    for(int k=1;k<=j;k++){
      cout<<"*  ";
    }
     for(int l=1;l<=n-j-j;l++){
        cout<<"   ";
     }
     for(int m=1;m<=j;m++){
        cout<<"*  ";
     }
    cout<<endl;
 }


}