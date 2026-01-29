#include<iostream>
using namespace std;

int main(){
    int n=7;

    //first line
   for(int i=1;i<=n/2;i++){
    cout<<"   ";
   }cout<<"*  "<<endl;
   
   //upside bottom
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n/2-i;j++){
            cout<<"   ";
        }
        for(int k=1;k<=1;k++){
            cout<<"*  ";
        }
        for(int l=1;l<=2*i-1;l++){
            cout<<"   ";
        }
        for(int m=1;m<=1;m++){
            cout<<"*  ";
        }
        
        cout<<endl;
    }

    //downside bottom
    for(int j=1;j<n/2;j++){
        for(int k=1;k<=j;k++){
            cout<<"   ";
        }
        for(int l=1;l<=1;l++){
            cout<<"*  ";
        }
        for(int m=1;m<=n-j-j-2;m++){
            cout<<"   ";
        }
        for(int n=1;n<=1;n++){
            cout<<"*  ";
        }
        
        cout<<endl;

    }

    //last line
    for(int i=1;i<=n/2;i++){
    cout<<"   ";
   }cout<<"*  "<<endl;
   
}