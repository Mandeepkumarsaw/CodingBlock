#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    int p=1;
    for(int i=1;i<=n;i++){
        if(p<10){
         for(int k=1;k<=n-i;k++){
            cout<<"    ";
         }
        }else {
        for(int k=1;k<=n-i;k++){
            cout<<"    ";
        }
      }
      if(p<10){
        for(int j=1;j<=2*i-1;j++){
            cout<<p++<<"   ";
        }

      }else
        for(int j=1;j<=2*i-1;j++){
            cout<<p++<<"  ";
        }cout<<endl;
    }
}