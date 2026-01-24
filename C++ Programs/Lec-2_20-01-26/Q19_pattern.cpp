#include<iostream>
using namespace std;

int main(){
    int n=7;

    //first line
    for(int i=1;i<=n;i++){
        cout<<"*  ";
    }cout<<endl;


    //top mid
    for(int i=1;i<n/2;i++){
        
        for(int j=0;j<=n/2-i;j++){
            cout<<"*  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"   ";
        }
        for(int k=0;k<=n/2-i;k++){
            cout<<"*  ";
        }

         cout<<endl;
    }

    //bottom mid
    for(int j=1;j<=n/2;j++){
         for(int i=1;i<=j;i++){
            cout<<"*  ";
         }
         for(int k=1;k<=n-j-j;k++){
            cout<<"   ";
         }
         for(int l=1;l<=j;l++){
            cout<<"*  ";
         }cout<<endl;
   }

    //last line
    for(int i=1;i<=n;i++){
        cout<<"*  ";
    }cout<<endl;
}