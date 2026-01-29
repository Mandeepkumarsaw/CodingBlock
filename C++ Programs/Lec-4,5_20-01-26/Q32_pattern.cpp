#include<iostream>
using namespace std;

int main(){
   int n=5;
   int p=n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<2*i;j++){
            if(j%2 !=0){
            cout<<i<<"  ";
          } else {
            cout<<"*  ";
          }
        } cout<<endl;
    }
    
    p=p-1;
    int q=p;
    for(int j=1;j<n;j++){
       for(int k=1;k<2*q;k++){
        if(k%2 != 0){
          cout<<p<<"  ";
        } else {
            cout<<"*  ";
        }
        
       }p=p-1;
       q--;
       cout<<endl;
    }
}